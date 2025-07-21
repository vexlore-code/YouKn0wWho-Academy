#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;
    long long max_value = max({a, b, c});
    long long min_value = min({a, b, c});
    cout << min_value << " " << max_value << endl;
    return 0;
}