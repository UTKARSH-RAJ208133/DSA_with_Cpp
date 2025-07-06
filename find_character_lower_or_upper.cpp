#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cout <<"Enter a alphabetical character : ";
    cin >> alpha;
    int alpha_num = alpha;
    if (alpha_num >=65 && alpha_num<=90){
        cout << "The entered alphbetical charater is CAPITAL Letter" <<endl;
    }else if (alpha_num >=97 && alpha_num<=122){
        cout << "The entered alphbetical charater is SMALL Letter" <<endl;
    }else {
        cout <<"Invald Input" <<endl;
    }


    //Since I know the ASCII vale of Capital A=65 an Small a=97,upper code is written on the basis of that
    //If you don't know first store the value of A/a and Z/z in some variable and then write the code operationl for this range in between

    
    return 0;
}