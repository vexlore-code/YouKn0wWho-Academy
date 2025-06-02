#include <iostream>
#include <vector>
using namespace std;

bool isLucky(int n)
{
    while (n > 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    int A, B;
    cin >> A >> B;
    vector<int> luckyNumbers;
    for (int i = A; i <= B; ++i)
    {
        if (isLucky(i))
            luckyNumbers.push_back(i);
    }
    if (luckyNumbers.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (size_t i = 0; i < luckyNumbers.size(); ++i)
        {
            if (i > 0)
                cout << " ";
            cout << luckyNumbers[i];
        }
        cout << endl;
    }sdd
}