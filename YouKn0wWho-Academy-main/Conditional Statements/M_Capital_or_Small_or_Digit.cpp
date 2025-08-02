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
        cout << "ALPHA" << endl
            << "IS CAPITAL" << endl;
    }
    else if (c >= 97 && c <= 122)
    {
        cout << "ALPHA" << endl
            << "IS SMALL" << endl;
    }
    else if (c >= 48 && c <= 57)
    {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}