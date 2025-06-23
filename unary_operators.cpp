#include<iostream>
using namespace std;

int main()
{
int a =10;

//Post Increment
int b=(a++); //First the value of 'a' got stored in 'b' then 'a' is increasing itself by 1
cout <<b <<endl;
cout <<a <<endl;

//Pre Increment
int c=(++a); //First 'a' is increased by 1 then the value of 'a' is updated in 'c'
cout <<c <<endl;
cout <<a <<endl;

//Post Decrement
int d=(a--); //First the value of 'a' got stored in 'd' then 'a' is decreasing itself by 1
cout <<d <<endl;
cout <<a <<endl;

//Pre Decrement
int e=(--a); //First 'a' is decreased by 1 then the value of 'a' is updated in 'e'
cout <<e <<endl;
cout <<a <<endl;

    return 0;
}
