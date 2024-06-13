#include <iostream>
#include <algorithm>

using namespace std;

long long countPositions(long long x, long long y, long long z, long long k) {
    long long dims[3] = {x, y, z};
    sort(dims, dims + 3);
    long long positions = min(k / (dims[0] * dims[1]), x) * min(y, k / dims[0]) * min(z, k);
    return positions;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, z, k;
        cin >> x >> y >> z >> k;
        long long result = countPositions(x, y, z, k);
        cout << result << endl;
    }

    return 0;
}
