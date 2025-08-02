#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
using ll = long long;

void fcr(ll X, ll Y)
{
    ll f = floor(X * 1.0 / Y);
    ll c = ceil(X * 1.0 / Y);
    ll r = round(X * 1.0 / Y);

    cout << "floor " << X << " / " << Y << " = " << f << endl;
    cout << "ceil " <<  X << " / " << Y << " = " << c << endl;
    cout << "round " <<  X << " / " << Y << " = " << r << endl;
} 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll A, B;
    cin >> A >> B;
    fcr(A, B);
    return 0;
}