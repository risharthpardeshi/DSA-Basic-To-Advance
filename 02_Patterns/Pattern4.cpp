/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include <bits/stdc++.h>
using namespace std;

void Print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
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
        Print4(n);
    }
}