#include <iostream>
using namespace std;

int main(){
    int n;
    long long cont = 1;
    cin >> n;
    cout << n << "! = ";
    for (int i = n; i > 0; i--){
        cont *= i;
    //     if(i==1){
    //         cout << i << " = ";
    //     }
    //     else{
    //         cout << i << " x ";
    //     }   
    }
    cout << cont << endl;
}

/* 
//cek prime dan ubah non jadi #
   int num;
    cin >> num;
    for(int i = 1; i<=num; i++){
        if ( i == 1 ) {
            cout << "# ";
        }
        else if(i==2 || i==3 || i==5 || i==7){
            cout << " " << i << " ";
        }
        else if (i%2==0 || i%3==0 || i%5==0 || i%7==0){
            cout << " # ";
        }
        else {
            cout << " " << i << " ";
        }
    }
    */

   // persegi pake *
   /* 
    int row;
    cin >> row;
    
    for(int i=1; i<=row; i++){
        cout << "*"; 
    }
    cout << endl; 
    for(int i=2; i<row; i++){
        cout << "*";
        for(int k=2;k<row; k++){
            cout << " ";
         }
         cout << "*";
         cout << endl;
        // cout << " 3" << endl;
    }
   for(int i=1; i<=row; i++){
        cout << "*"; 
    }
    cout << endl;
    */

   /*
// HOURGLASS and pyramid no spaces
    int p;
    cout << "enter rows: ";
    cin >> p;
    //reverse pyramid
     for(int i=1; i<=p ; i++){
        for(int k=1;k<i;k++){
            cout << " ";
        }
        for(int j=i; j<=2*p-i; j++){
            cout << "*";
         }
        cout << endl;
     } 
    //pyramid
    for(int i=1; i<=p ; i++){
        for(int k=1;k<=p-i;k++){
            cout << " ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << endl;
     }
   */

    /*
//factorial
    int n;
    long long cont = 1;
    cin >> n;
    cout << n << "! = ";
    for (int i = n; i >= 1; i--){
        cont *= i;
        if(i==1){
            cout << i << " = ";
        }
        else{
            cout << i << " x ";
        }   
    }
    cout << cont << endl;
    */