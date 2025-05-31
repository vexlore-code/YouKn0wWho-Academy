#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    if (n < 2)
    {
        cout << "-1" << endl;
        return 0;
    }
    else
    {
        for (long long i = 2; i <= n; i += 2)
        {
            cout << i << endl;
        }
    }
    return 0;
}