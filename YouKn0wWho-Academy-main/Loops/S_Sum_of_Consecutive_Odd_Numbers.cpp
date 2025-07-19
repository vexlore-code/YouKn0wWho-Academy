#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    while (n--)
    {
        int X, Y;
        cin >> X >> Y;
        int a = min(X, Y) + 1;
        int b = max(X, Y) - 1;
        int sum = 0;
        for (int i = a; i <= b; ++i)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
}