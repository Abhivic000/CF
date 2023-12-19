#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> programmers; // (stress tolerance, programmer index)
    vector<pair<int, int>> projects;   // (difficulty level, project index)

    for (int i = 0; i < n; i++) {
        int stress;
        cin >> stress;
        programmers.push_back({stress, i + 1});
    }

    for (int i = 0; i < m; i++) {
        int difficulty;
        cin >> difficulty;
        projects.push_back({difficulty, i + 1});
    }

    sort(programmers.begin(), programmers.end()); // Sort programmers in ascending order of stress tolerance
    sort(projects.begin(), projects.end());       // Sort projects in ascending order of difficulty

    vector<vector<int>> assignment(m);
    int prog_index = 0;

    for (int i = 0; i < m; i++) {
        while (prog_index < n && programmers[prog_index].first <= projects[i].first) {
            assignment[i].push_back(programmers[prog_index].second);
            prog_index++;
        }

        if (assignment[i].empty()) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    for (int i = 0; i < m; i++) {
        cout << assignment[i].size() << " ";
        for (int j = 0; j < assignment[i].size(); j++) {
            cout << assignment[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
