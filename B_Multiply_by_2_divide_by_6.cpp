#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int c = 0;
        while (n > 1)
        {
            if (n % 6 == 0)
            {
                n /= 6;
            }
            else
            {
                n *= 2;
            }
            c++;
        }

        if (n == 1)
        {
            cout << c << "\n";
        }

        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}