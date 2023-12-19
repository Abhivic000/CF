#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int i = 1; // Start from the first positive integer

        while (k > 0) {
            if (i % 3 != 0 && i % 10 != 3) {
                // If i is liked by Polycarp
                k--; // Decrement k
            }
            i++; // Move to the next positive integer
        }

        cout << i-1 << '\n'; // Subtract 1 to get the k-th liked integer
    }

    return 0;
}
