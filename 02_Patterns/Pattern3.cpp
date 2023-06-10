/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include <bits/stdc++.h>
using namespace std;

void Print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
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
        Print3(n);
    }
}