#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        vector<int> vec;
        if (s == 0)
        {
            vec.push_back(0);
        }
        while (s > 0)
        {
            int x = s % 10;
            vec.push_back(x);
            s /= 10;
        }
        for (int &i : vec)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}