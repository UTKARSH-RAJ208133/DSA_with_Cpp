#include <iostream>
using namespace std;
int main()
{
//Learnng how to take input in C++
int age; // A memory location got alloted named age with garbege value stored i.e. random any value got stored
cout <<age <<"\n";

cout <<"Inter our Age :"; //No end line character so that input in next line takes place on the same line
cin >>age;
cout <<"You entered your age as : " <<age << "\n";

char confermation;
cout <<"Press Y if your entered age is correct else Press N :";
cin >> confermation;

return 0 ;
}