#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int result = (a * b) % 100;
    result = (result * c) % 100;
    result = (result * d) % 100;
    cout << setw(2) << setfill('0') << result << endl;
    return 0;
}