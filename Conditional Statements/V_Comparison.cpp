#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b;
    char op;
    cin >> a >> op >> b;
    if (a > b && op == '>')
    {
        cout << "Right" << endl;
    }
    else if (a < b && op == '<')
    {
        cout << "Right" << endl;
    }
    else if (a == b && op == '=')
    {
        cout << "Right" << endl;
    }
    else if (a >= b && op == '<')
    {
        cout << "Wrong" << endl;
    }
    else if (a <= b && op == '>')
    {
        cout << "Wrong" << endl;
    }
    else if (a != b && op == '=')
    {
        cout << "Wrong" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}