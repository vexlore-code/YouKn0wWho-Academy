#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    const int password = 1999;
    int n;
    while (cin >> n) {
        if (n == password) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}