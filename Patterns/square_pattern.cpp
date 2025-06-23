#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"Enter the number of sides you want for a Square : " ;
    cin >>n;
    cout <<endl ;

// Square formed by numbers
cout <<"Square formed by numbers" <<endl;

    for (int i=1; i<=n;i++) {   //Outer loop for changing the line

        for(int j=1; j<=n; j++){    //Inner loop for data in each line
            cout <<j;
            cout <<" ";         //For space between numers
        }

        cout <<endl;        //Endline Character so that after every alteration next line is used
    }




// Square formed by Stars
cout <<"Square formed by Stars" <<endl;

    for (int i=1; i<=n;i++) {   //Outer loop for changing the line

        for(int j=1; j<=n; j++){    //Inner loop for data in each line
            cout <<"* ";
        }

        cout <<endl;        //Endline Character so that after every alteration next line is used
    }




// Square of Characters
cout <<"Square formed by Characters" <<endl;

   for (int i=1; i<=n;i++) {   //Outer loop for changing the line
        char ch='A' ;
        for(int j=1; j<=n; j++){    //Inner loop for data in each line
            cout <<ch <<" ";
            ch=ch+1 ;
        }

        cout <<endl;        //Endline Character so that after every alteration next line is used
    }
    






// Square pattern of Type 2
// 1 2 3
// 4 5 6
// 7 8 9
cout <<"Square formed by numbers of type 2" <<endl;
int num=1;
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cout <<num <<" ";
        num++;
    }
cout <<endl;
}


char alpha='A';
for (int i=0; i<n; i++){
    for (int j=0; j<n; j++){
        cout <<alpha <<" ";
        alpha++;
    }
cout <<endl;
}

    return 0;
}