#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // Get the last character (last digit) of each string
    char lastDigitA = a[a.size() - 1];
    char lastDigitB = b[b.size() - 1];

    // Convert the characters to integers and calculate the sum
    int sum = (lastDigitA - '0') + (lastDigitB - '0');

    cout << sum;

    return 0;
}
