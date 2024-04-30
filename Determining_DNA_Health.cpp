#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to calculate the total health of a DNA strand
int calculateTotalHealth(const string& DNA, const vector<string>& genes, const vector<int>& health, int first, int last) {
    unordered_map<string, int> geneHealth;
    int totalHealth = 0;

    for (int i = first; i <= last; ++i) {
        string gene = genes[i];
        int geneHealthValue = health[i];
        geneHealth[gene] += geneHealthValue;
    }

    for (int i = 0; i <= DNA.length() - (last - first + 1); ++i) {
        string subDNA = DNA.substr(i, last - first + 1);
        totalHealth += geneHealth[subDNA];
    }

    return totalHealth;
}

int main() {
    int n;
    cin >> n;

    vector<string> genes(n);
    for (int i = 0; i < n; ++i) {
        cin >> genes[i];
    }

    vector<int> health(n);
    for (int i = 0; i < n; ++i) {
        cin >> health[i];
    }

    int s;
    cin >> s;

    int minTotalHealth = INT32_MAX;
    int maxTotalHealth = INT32_MIN;

    while (s--) {
        int first, last;
        string DNA;
        cin >> first >> last >> DNA;

        int totalHealth = calculateTotalHealth(DNA, genes, health, first, last);
        minTotalHealth = min(minTotalHealth, totalHealth);
        maxTotalHealth = max(maxTotalHealth, totalHealth);
    }

    cout << minTotalHealth << " " << maxTotalHealth << endl;

    return 0;
}
