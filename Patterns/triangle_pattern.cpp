#include<iostream>
using namespace std;

int main(){

    int n;
    cout <<"Enter the number of units of a side you want for the triangle : " ;
    cin >>n;
    cout <<endl ;

    // for (int i=0; i<n; i++){
    //     for (int j=0; j<i; j++){
    //         cout <<"* ";
    //     }
    // cout <<endl;
    // }

    for (int i=1; i<=n; i++){
        for (int j=0; j<i; j++){
            cout <<"* ";
        }
    cout <<endl;
    }
    



     for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout <<j <<" ";
        }
    cout <<endl;
    }



     for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout <<i <<" ";
        }
    cout <<endl;
    }
    

//Alphabetcal Triangle Pattern



    return 0;
}