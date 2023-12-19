#include <iostream>

int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int countGoodTriples(int n) {
    int count = 0;
    for (int a = 0; a <= n; ++a) {
        for (int b = 0; b <= n - a; ++b) {
            int c = n - a - b;
            if (digitSum(a) + digitSum(b) + digitSum(c) == digitSum(n)) {
                ++count;
            }
        }
    }
    return count;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        int result = countGoodTriples(n);
        std::cout << result << std::endl;
    }

    return 0;
}
