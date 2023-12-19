#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> gradebook(n);
    vector<bool> successful(n, false);

    for (int i = 0; i < n; i++) {
        cin >> gradebook[i];
    }

    vector<int> max_mark_for_subject(m, -1);

    for (int subj = 0; subj < m; subj++) {
        for (int student = 0; student < n; student++) {
            int mark = gradebook[student][subj] - '0';
            max_mark_for_subject[subj] = max(max_mark_for_subject[subj], mark);
        }
    }

    for (int subj = 0; subj < m; subj++) {
        for (int student = 0; student < n; student++) {
            int mark = gradebook[student][subj] - '0';
            if (mark == max_mark_for_subject[subj]) {
                successful[student] = true;
            }
        }
    }

    int count_successful = count(successful.begin(), successful.end(), true);

    cout << count_successful << endl;

    return 0;
}
