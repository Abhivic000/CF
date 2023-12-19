
#include <bits/stdc++.h>

using namespace std;

int mex(const vector<int>& arr) {
    int x = 0;
    while (find(arr.begin(), arr.end(), x) != arr.end()) {
        x++;
    }
    return x;
}

int calculate_cost(const vector<int>& arr) {
    return arr.size() - mex(arr);
}

int find_max_cost(const vector<int>& p) {
    int max_cost = 0;
    int n = p.size();

    for (int i = 0; i < n; i++) {
        // Generate cyclic shift
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            a[j] = p[(i + j) % n];
        }

        // Calculate cost for the current cyclic shift
        int cost = calculate_cost(a);

        // Update max_cost if the current cost is greater
        max_cost = max(max_cost, cost);
    }

    return max_cost;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        int result = find_max_cost(p);
        cout << result << endl;
    }

    return 0;
}
