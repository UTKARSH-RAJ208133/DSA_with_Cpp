#include<iostream>
using namespace std;

int main()
{

int a=10, b=15; //We can define multiple variables in same line just by separating by comma

//      Arithmatic Operators

int gamma=a+b ;
cout << "Sun is : " <<gamma <<endl;
cout <<"Sum is : " << (a+b) <<endl; //Alternate code to above 2 line of code
cout <<"Product is : " <<(a*b) <<endl;

cout <<"Difference is : " <<(a-b) <<" or " <<(b-a) <<endl;
cout <<"Quotient is : " <<(a/b) <<" or " <<(b/a) <<endl;
cout <<"The remainder upon devision of b with a is : " <<(b%a) <<endl;

cout <<(5/(double)2) <<endl; //Writing the data type in parrenthisis before data, will type caste the data to data type mentioned in parrenthisis



//      Relational Operators
cout << (a==b) <<endl; //False
cout << (a!=b) <<endl; //True
cout << (a<b) <<endl;  //True
cout << (a<=b) <<endl; //True
cout << (a>b) <<endl;  //False
cout << (a>=b) <<endl; //False


//      Logical Operators
cout << ((2>1)||(1>2)) <<endl; //OR 
cout << ((2>1)&&(1>2)) <<endl; //AND
cout << !(1>2);         //NOT

    return 0;
}