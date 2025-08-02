#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;
    if (a <= b && a <= c && b <= c)
    {
        cout << a << endl << b << endl << c << endl << endl << a << endl << b << endl << c << endl;
    }
    else if (a <= c && a <= b && c <= b)
    {
        cout << a << endl << c << endl << b << endl << endl << a << endl << b << endl << c << endl;
    }
    else if (b <= a && b <= c && a <= c)
    {
        cout << b << endl << a << endl << c << endl << endl << a << endl << b << endl << c << endl;
    }
    else if (b <= c && b <= a && c <= a)
    {
        cout << b << endl << c << endl << a << endl << endl << a << endl << b << endl << c << endl;
    }
    else if (c <= a && c <= b && a <= b)
    {
        cout << c << endl << a << endl << b << endl << endl << a << endl << b << endl << c << endl;
    }
    else if (c <= b && c <= a && b <= a)
    {
        cout << c << endl << b << endl << a << endl << endl << a << endl << b << endl << c << endl;
    }
    return 0;
}