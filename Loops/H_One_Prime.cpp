#include <bits/stdc++.h>
using namespace std;

void isPrime(long long n)
{
    if (n < 2)
    {
        cout << "YES" << endl;
        return;
    }
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    isPrime(n); 
    return 0;
}