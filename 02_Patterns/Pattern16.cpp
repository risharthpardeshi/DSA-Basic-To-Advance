/*
A
BB
CCC
DDDD
EEEEE
*/

#include <bits/stdc++.h>
using namespace std;
void Print16(int n)
{

    for (int i = 1; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
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
        Print16(n);
    }
}

void printTriangle(int n)
{
    // code here
    for (int i = 1; i <= n; i++)
    {
        char count = ('A' + i - 1);
        for (int j = 1; j <= i; j++)
        {
            cout << count;
        }
        cout << endl;
    }