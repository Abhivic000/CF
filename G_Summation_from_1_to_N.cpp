#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    // Calculate the summation using the formula
    long long sum = (N * (N + 1)) / 2;

    cout << sum << endl;

    return 0;
}
