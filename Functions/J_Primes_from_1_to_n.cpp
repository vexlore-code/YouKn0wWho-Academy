#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

bool isPrime(ll n)
{
    if (n < 2)
    {
        return false;
    }
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    for (ll i = 1; i <= n; ++i)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}