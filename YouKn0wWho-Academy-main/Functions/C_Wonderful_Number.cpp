#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

bool isOdd(ll n)
{
    return n % 2 == 1;
}

bool isBinaryPalindrome(ll n)
{
    string bin;
    while (n > 0)
    {
        bin += (n % 2) + '0';
        n /= 2;
    }
    string rev = bin;
    reverse(rev.begin(), rev.end());
    return bin == rev;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;

    if (isOdd(n) && isBinaryPalindrome(n))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
