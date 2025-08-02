#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b;
    cin >> a >> b;
    long long max_value = max(a, b);
    long long min_value = min(a, b);
    if (max_value % min_value == 0)
    {
        cout << "Multiples" << endl;
    }
    else
    {
        cout << "No Multiples" << endl;
    }
    return 0;
}