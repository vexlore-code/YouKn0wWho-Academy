#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    long long years = n / 365;
    long long months = (n % 365) / 30;
    long long days = (n % 365) % 30;
    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    return 0;
}