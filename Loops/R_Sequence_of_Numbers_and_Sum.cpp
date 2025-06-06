#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    while (cin >> a >> b)
    {
        if (a <= 0 || b <= 0)
            break;
        int x = min(a, b);
        int y = max(a, b);
        int sum = 0; 
        for (int i = x; i <= y; i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}
