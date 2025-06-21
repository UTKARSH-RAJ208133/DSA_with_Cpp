#include <iostream>
using namespace std;
int main()
{
//Type Casting
//1. Implicit (known as Conversion)
char alpha='A';
int beta=alpha;
cout <<beta <<"\n"; //this line code will return the ASCII value of character

char gamma='B';
int delta=gamma;
cout <<delta <<endl;

//2. Explicit (known as Casing)
double theeta=166.66;
int omega=(int)theeta; //we tell new data type in the parrenthesis before the value to be type casted
cout << omega <<endl;

return 0;
}