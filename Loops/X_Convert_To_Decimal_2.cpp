#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    while (n--)
    {
        int N;
        cin >> N;
        int ones = __builtin_popcount(N);
        int result = (1 << ones) - 1;
        cout << result << endl;
    }
    return 0;
}