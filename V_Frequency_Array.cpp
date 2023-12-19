#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> count(M + 1, 0);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
        count[A[i]]++;
    }

    for (int i = 1; i <= M; i++) {
        cout << count[i] << endl;
    }

    return 0;
}
