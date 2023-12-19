#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> numbers(n);
    vector<int> operations(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> operations[i];
    }

    for (int i = 0; i < n; i++) {
        if (operations[i] == 1) {
            bool is_prime = true;
            for (int j = 2; j <= sqrt(numbers[i]); j++) {
                if (numbers[i] % j == 0) {
                    is_prime = false;
                    break;
                }
            }
            
            if (is_prime) {
                int result = (numbers[i] * 5 * 3) % 10;
                cout << result << " ";
            } else {
                cout << -1 << " ";
            }
        } else if (operations[i] == 2) {
            int result = (numbers[i] * 2 * 5) % 10;
            cout << result << " ";
        }
    }

    cout << endl;

    return 0;
}
