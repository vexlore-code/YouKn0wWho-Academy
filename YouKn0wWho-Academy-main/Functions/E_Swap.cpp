#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void swap(ll &a, ll &b)
{
    ll temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll x, y;
    cin >> x >> y;
    swap(x, y);
    return 0;
}