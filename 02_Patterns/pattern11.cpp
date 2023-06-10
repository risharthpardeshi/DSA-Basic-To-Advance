/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include <bits/stdc++.h>
using namespace std;
void Print11(int n)
{
    int start = 1;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
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
        Print11(n);
    }
}

class Solution
{
public:
    void printTriangle(int n)
    {
        // code here
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if ((i + j) % 2 == 0)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    }
};