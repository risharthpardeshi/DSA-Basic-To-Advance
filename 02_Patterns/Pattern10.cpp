/*
 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 */

#include <bits/stdc++.h>
using namespace std;
void Print10(int n)
{
    for (int i = 1; i < 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; i <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int main()
    {
        int t;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            int n;
            cin >> n;
            Print10(n);
        }
    }

    //     class Solution{
    // public:
    //     void printTriangle(int n) {
    //         // code here
    //         for(int i=1; i<=2*n-1; i++){
    //             int stars = i;
    //             if(i > n){
    //                 stars = 2*n-i;
    //             }
    //             for(int j=1; j<=stars; j++){
    //                 cout<<"* ";
    //             }
    //             cout<<endl;
    //         }
    //     }
    // };