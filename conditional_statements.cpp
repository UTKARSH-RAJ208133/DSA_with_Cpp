#include<iostream>
using namespace std;

//Providing grading on the basis of Marks got out of 100

int main()
{
float n;
cout <<"Enter your marks out of 100 in Computer Science : ";
cin >> n ;
if (n>=90 && n<=100){
    cout << "Congratulations !! You got passed by 'A' grade" <<endl;
}else if (n>=80 && n<90){
    cout << "Congratulations !! You got passed by 'B' grade" <<endl;
}else if (n>=70 && n<80){
    cout << "Congratulations !! You got passed by 'C' grade" <<endl;
}else if (n>=60 && n<70){
    cout << "Congratulations !! You got passed by 'D' grade" <<endl;
}else if (n>=50 && n<60){
    cout << "Congratulations !! You got passed by 'E' grade" <<endl;
}else if (n>=0 && n<50){
    cout << "You got 'F' grade" <<endl;
}else {
    cout << "Invalid Marks" <<endl;
}

    return 0;
}