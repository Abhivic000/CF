#include <iostream>

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int result = 0;

        // Calculate the sum of digits for each number from 1 to 9
        for (int i = 1; i <= 9; ++i) {
            result += digitSum(i);
        }

        // Repeat the sum for every multiple of 9
        result *= (n / 9);

        // Calculate the remaining sum for the last set of numbers
        for (int i = 1; i <= n % 9; ++i) {
            result += digitSum(i);
        }

        std::cout << result << std::endl;
    }

    return 0;
}
