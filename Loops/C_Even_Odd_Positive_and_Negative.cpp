#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    int Ecount = 0, Ocount = 0, Pcount = 0, Ncount = 0;
    while (n--)
    {
        long long x;
        cin >> x;
        if (x % 2 == 0)
        {
            Ecount++;
        }
        else
        {
            Ocount++;
        }
        if (x > 0)
        {
            Pcount++;
        }
        else if (x < 0)
        {
            Ncount++;
        }
    }
    cout << "Even: " << Ecount << endl;
    cout << "Odd: " << Ocount << endl;
    cout << "Positive: " << Pcount << endl;
    cout << "Negative: " << Ncount << endl;
    return 0;
}