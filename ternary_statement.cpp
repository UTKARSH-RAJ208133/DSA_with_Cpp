#include<iostream>
using namespace std;

int main()
{
    float n;
    cout << "Enter the number : ";
    cin >> n;
    cout << (n>=0 ? (n==0 ? "Zero" : "Positive"):"Negative" );
    return 0;
}