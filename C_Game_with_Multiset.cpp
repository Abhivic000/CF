#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<string> is_possible_subset_sum(const vector<pair<int, int>>& queries) {
    unordered_set<int> multiset;
    unordered_set<int> possible_sums;
    vector<string> result;

    for (const auto& query : queries) {
        int t = query.first;
        int v = query.second;

        if (t == 1) {
            unordered_set<int> new_sums;
            for (int s : multiset) {
                new_sums.insert(s + v);
            }
            multiset.insert(new_sums.begin(), new_sums.end());
            multiset.insert(v);
        } else if (t == 2) {
            result.push_back(multiset.count(v) ? "YES" : "NO");
        }
    }

    return result;
}

int main() {
    int m;
    cin >> m;

    vector<pair<int, int>> queries;
    for (int i = 0; i < m; ++i) {
        int t, v;
        cin >> t >> v;
        queries.push_back({t, v});
    }

    vector<string> results = is_possible_subset_sum(queries);

    for (const auto& res : results) {
        cout << res << endl;
    }

    return 0;
}
