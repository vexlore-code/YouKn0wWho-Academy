#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

void gcd_and_lcm(ll A, ll B)
{
    ll g = __gcd(A, B);
    ll l = (A / g) * B; // To avoid overflow
    cout << g << " " << l << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll A, B;
    cin >> A >> B;
    gcd_and_lcm(A, B);
    return 0;
}