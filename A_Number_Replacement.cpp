#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        string s;
        cin >> s;
        bool ok = true;

        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (arr[i] == arr[j] && s[i] != s[j]){
                    ok = false;
                    break;
                }
            }
            if (!ok){
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}