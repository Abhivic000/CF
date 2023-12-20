#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
 // Wrong

        vector<int> skiing(n), movie(n), boardGames(n);

        for (int i = 0; i < n; ++i) {
            cin >> skiing[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> movie[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> boardGames[i];
        }

        vector<long long> totalFriends(n);

        for (int i = 0; i < n; ++i) {
            totalFriends[i] = skiing[i] + movie[i] + boardGames[i];
        }

        long long maxFriends = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    if (i != j && j != k && k != i) {
                        long long currentFriends = totalFriends[i] + totalFriends[j] + totalFriends[k];
                        maxFriends = max(maxFriends, currentFriends);
                    }
                }
            }
        }

        cout << maxFriends << endl;
    }

    return 0;
}
