#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> min_operations(int t, vector<pair<int, string>>& test_cases) {
    vector<int> results;

    for (int i = 0; i < t; ++i) {
        int n = test_cases[i].first;
        string s = test_cases[i].second;
        char smallest_char = 'z';
        int operations = 0;

        for (int j = n - 1; j >= 0; --j) {
            if (s[j] > smallest_char) {
                break;
            }
            smallest_char = min(smallest_char, s[j]);
            operations += 1;
        }

        if (operations == n) {
            results.push_back(0);  // Already sorted
        } else if (operations == 1 && s.substr(0, n - 1) <= s.substr(1)) {
            results.push_back(-1);  // Impossible to sort
        } else {
            results.push_back(operations);
        }
    }

    return results;
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, string>> test_cases;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        test_cases.push_back(make_pair(n, s));
    }

    // Output
    vector<int> results = min_operations(t, test_cases);
    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
