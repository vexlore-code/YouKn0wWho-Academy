#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    double n;
    cin >> n;
    if (n - int(n) == 0)
    {
        cout << "int " << int(n) << endl;
    }
    else
    {
        cout << "float " << int(n) << " " << n - int(n) << endl;
    }
    return 0;
}