#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int currentSum = arr[0]; 
        int maxSum = arr[0]; 

        for (int i = 1; i < n; i++) {
            if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
                currentSum = max(arr[i], currentSum + arr[i]);
            } else {
                currentSum = arr[i];
            }

            maxSum = max(maxSum, currentSum);
        }

        cout << maxSum << endl;
    }

    return 0;
}
