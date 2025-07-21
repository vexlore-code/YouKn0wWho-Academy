#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long a, b, c;
    char op1, op2;
    cin >> a >> op1 >> b >> op2 >> c;
    long long addition = a + b;
    long long subtraction = a - b;
    long long multiplication = a * b;
    if (op1 == '+' && c == addition)
    {
        cout << "Yes" << endl;
    }
    else if (op1 == '+' && c != addition)
    {
        cout << addition << endl;
    }
    else if (op1 == '-' && c == subtraction)
    {
        cout << "Yes" << endl;
    }
    else if (op1 == '-' && c != subtraction)
    {
        cout << subtraction << endl;
    }
    else if (op1 == '*' && c == multiplication)
    {
        cout << "Yes" << endl;
    }
    else if (op1 == '*' && c != multiplication)
    {
        cout << multiplication << endl;
    }
    return 0;
}