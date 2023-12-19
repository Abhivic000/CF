
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
        vector<int> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        sort(v.begin(), v.end());

        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            ok &= (v[i] - v[i - 1] <= 1);
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


return 0;
}