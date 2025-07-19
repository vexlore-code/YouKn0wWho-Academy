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
    for (long long i = 1; i <= 12; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
    return 0;
}
