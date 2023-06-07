#include<bits/stdc++.h>
using namespace std;
/*
Take the day no. nad print the corresponding day
for 1 print monday
for 2 print tuesday and so on and 7 print sunday
*/
int main(){
    int day;
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
       default:
            cout<<"Invalid day number";
    }
    cout<< "check";

    return 0;
}