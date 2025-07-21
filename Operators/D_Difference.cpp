#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long X;
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    X = A * B - C * D;
    cout << "Difference = " << X << endl;
    return 0;
}