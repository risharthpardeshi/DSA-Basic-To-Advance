/*
 *********
 *******
 *****
 ***
 *
 */

#include <bits/stdc++.h>
using namespace std;
void Print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void Print8(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
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
        Print7(n);
        Print8(n);
    }
}

for (int i = 1; i <= n; i++)
{
    // space
    for (int j = 1; j <= n - i; j++)
    {
        cout << " ";
    }

    // star
    for (int j = 1; j <= i; j++)
    {
        cout << "* ";
    }

    cout << endl;
    // space
    // no need to print this spaces as this makes no difference in the pattern

    // now we are done with half pattern lesgooo
    // lets do next half
}

for (int i = 1; i <= n; i++)
{
    // space
    for (int j = 1; j < i; j++)
    {
        cout << " ";
    }

    // star "* "
    for (int j = 1; j <= n + 1 - i; j++)
    {
        cout << "* ";
    }

    cout << endl;
}