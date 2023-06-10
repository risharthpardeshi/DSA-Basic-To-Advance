/*
ABCDE
ABCD
ABC
AB
A
*/

#include <bits/stdc++.h>
using namespace std;
void Print15(int n)
{

    for (int i = 1; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
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
        Print15(n);
    }
}

void printTriangle(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= i; j++)
        {
            cout << char(ch + j);
        }
        cout << endl;
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
            char count = 'A';
            for (int j = 1; j <= n - i + 1; j++)
            {
                cout << count;
                count++;
            }
            cout << endl;
        }
    }
};