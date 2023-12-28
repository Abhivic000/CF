#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string p = "";

        p += s[0];

        for (int i = 1; i <= n - 2; i++)
        {

            if ((s[i] == 'b' || s[i] == 'c' || s[i] == 'd') && (s[i + 1] == 'a' || s[i + 1] == 'e'))
            {
                p += '.';
                p += s[i];
            }
            else
            {
                p += s[i];
            }
        }
        p += s[n - 1];

        cout << p << endl;
    }

    return 0;
}
