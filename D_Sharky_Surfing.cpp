#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

typedef vector<int> vi;
typedef pair<int, int> pi;

#define fr first
#define sc second
#define pb push_back
#define pob pop_back
#define pf push_front
#define pof pop_front

#define rep(i, a, b) for (int i = a; i <= b; i++)
template <typename T, typename T1>
T amax(T &a, T1 b) {
    if (b > a) a = b;
    return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b) {
    if (b < a) a = b;
    return a;
}

void solve() {
    int n, m, L;
    cin >> n >> m >> L;

    vector<pair<int, int>> hurdles(n);
    vector<pair<int, int>> powerUps(m);

    // Input hurdles and power-ups
    rep(i, 0, n - 1) {
        cin >> hurdles[i].fr >> hurdles[i].sc;
    }

    rep(i, 0, m - 1) {
        cin >> powerUps[i].fr >> powerUps[i].sc;
    }

    int currentPosition = 1, currentPower = 1, collected = 0;
    priority_queue<int> pq; // Max-heap to store power-ups
    int hurdleIdx = 0, powerUpIdx = 0;

    while (currentPosition < L) {
        int maxReach = currentPosition + currentPower;

        // Collect power-ups within range
        while (powerUpIdx < m && powerUps[powerUpIdx].fr <= maxReach) {
            pq.push(powerUps[powerUpIdx].sc);
            powerUpIdx++;
        }

        // Skip hurdles that are fully cleared
        while (hurdleIdx < n && hurdles[hurdleIdx].sc <= maxReach) {
            hurdleIdx++;
        }

        // Adjust maxReach for the next hurdle
        if (hurdleIdx < n && hurdles[hurdleIdx].fr <= maxReach) {
            maxReach = hurdles[hurdleIdx].fr - 1;
        }

        // If blocked, use a power-up
        if (currentPosition > maxReach) {
            if (pq.empty()) {
                cout << -1 << '\n';
                return;
            }
            currentPower += pq.top();
            pq.pop();
            collected++;
        } else {
            // Progress forward
            currentPosition = maxReach;
        }

        // Prevent infinite loop
        if (currentPosition == L) break;
    }

    cout << collected << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
