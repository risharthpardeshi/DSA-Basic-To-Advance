/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

#include <bits/stdc++.h>
using namespace std;

void Print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        Print6(n);
    }
}