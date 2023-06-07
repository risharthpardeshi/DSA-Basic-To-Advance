// #include<bits/stdc++.h>
// using namespace std;

// //Funcitons are set are codes which performs something for you
// //Functions are used to modularise code
// //Functions are used to increase readablity
// //Functions are used to use same code multiple times
// //void -> does not return anything
// //return
// //parameterised
// //non paramenterise

// //without paramnter
// // void printName(){
// //     cout<<"hello Risharth";
// // }

// //with paramerter
// void printName(string name){
//     cout << "hello " <<name<<endl;;
// }
// int main(){
//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name2;
//     printName(name2);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// //Funcitons are set are codes which performs something for you
// //Functions are used to modularise code
// //Functions are used to increase readablity
// //Functions are used to use same code multiple times
// //void -> does not return anything
// //return
// //parameterised
// //non paramenterise

// //Take two numbers and print its sum
// int sum(int num1, int num2){
//     int num3 = num1 + num2; //5+6 = 11
//     return num3;
// }

// int main(){
//     int num1, num2;
//     cin>>num1>>num2;
//     int res = sum(num1, num2);
//     cout << res;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// //Funcitons are set are codes which performs something for you
// //Functions are used to modularise code
// //Functions are used to increase readablity
// //Functions are used to use same code multiple times
// //void -> does not return anything
// //return
// //parameterised
// //non paramenterise

// int main(){
//    int num1 , num2;
//    cin>> num1 >> num2;
//    int minimum = min(num1 , num2);
//    cout<<minimum;
// }

// pass by value
#include <bits/stdc++.h>
using namespace std;

// Funcitons are set are codes which performs something for you
// Functions are used to modularise code
// Functions are used to increase readablity
// Functions are used to use same code multiple times
// void -> does not return anything
// return
// parameterised
// non paramenterise

//pass by value
// void doSomething(int num){
//     cout<< num<<endl;
//     num += 5;
//     cout<< num<<endl;
//     num += 5;
//     cout<< num<<endl;
//     num += 5;
// }
void doSomething(string &s){
    s[0] = 't';
    cout<<s<<endl;
}
int main()
{
    string s = "rishi";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}