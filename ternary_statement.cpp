#include<iostream>
using namespace std;

int main()
{
    float n;
    cout << "Enter the number : ";
    cin >> n;
    cout << (n>=0 ? (n==0 ? "Zero" : "Positive"):"Negative" ); // two if else used as single ternary statement
    return 0;

    // if (n>=0){
    //     if (n==0){
    //         cout << "ZERO";
    //     }else {
    //         cout << "Positive";
    //     }
    // }else {
    //     cout << "Negative";
    // }
}