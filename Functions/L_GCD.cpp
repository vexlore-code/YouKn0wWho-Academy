#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void gcd(ll A, ll B)
{
    ll gcd = __gcd(A, B);
    cout << gcd << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll A, B;
    cin >> A >> B;
    gcd(A, B);
    return 0;
}