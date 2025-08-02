#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char ch;
    cin >> ch;
    int c = ch;
    if (c >= 65 && c <= 90)
    {
        cout << char(c + 32) << endl;
    }
    else if (c >= 97 && c <= 122)
    {
        cout << char(c - 32) << endl;
    }
    return 0;
}