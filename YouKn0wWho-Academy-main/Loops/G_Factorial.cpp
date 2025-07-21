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
    while(n--)
    {
        int x;
        cin >> x;
        long long factorial = 1;
        if (x < 0)
        {
            cout << "Error!" << endl;
            continue;
        }
        for (int i = 1; i <= x; i++)
        {
            factorial *= i;
        }
        cout << factorial << endl;
    }
    return 0;
}
