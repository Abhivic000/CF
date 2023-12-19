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

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long smallest_sum = arr[0] + arr[1] + 1 - 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                long long current_sum = arr[i] + arr[j] + j - i;
                smallest_sum = min(smallest_sum, current_sum);
            }
        }

        cout << smallest_sum << endl;
    }

    return 0;
}
