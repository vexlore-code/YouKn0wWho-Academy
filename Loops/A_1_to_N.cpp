#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, m = 0;
    cin >> n;
    do
    {
        m++;
        cout << m << endl;
    } while (n != m);
    
    return 0;
}
