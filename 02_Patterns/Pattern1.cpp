
/*
 * * * * *
 * * * * *
 * * * * *
 * * * * *
 * * * * *
1. There are always nested loops
2. The outer loops are for the rows - for outer lops count the number of lines
3. The inner lops are for the coloumns - focus on the coloumns and connect them somehow to rows
4. Print it inside the inner for loop
5. Observe symmetry
 */

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Lets do it with function
#include <bits/stdc++.h>
using namespace std;

void Print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
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
        Print1(n);
    }
}