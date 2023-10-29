#include <iostream>
using namespace std;

int main() {
//Finds the smallest positive integer from an input
 int size;
    cout << "How many integers? ";
    cin >> size;
    int numbers[size];
    cout << "Write the integers separated by spaces: ";
    int p = 1;

    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < size; i++) {
        if (numbers[i] <= 0) {
            continue;
        }
        if (numbers[i] == p) {
            p++;
        }
    }
    cout << "The smallest missing positive integer is " << p << endl;

//FInd the average from an input of a series of a number
    int p; 
    float sum=0;
    cin >> p;
    int arr[p];
    for(int i=0;i<p;++i){
        cin >> arr[i];
        sum+=arr[i];
    }
     cout << sum/p;

//Convert Number to Binary
int number, a=0;
    cin >> number;
    int P[a];

    while (number>0) {
        int sisa = number % 2;
        number/=2;
        P[a] = sisa;
        a++;
    }
    for(int i=a-1;i>=0;i--){
        cout << P[i];
    }

//Finds Intersection of 2 Matrices
    int p;
    cout << "Insert the length of array:" << endl; 
    cin >> p;
    int arr[p],bru[p];
    cout << endl;
    cout << "Enter element of array 1" << endl;
    for(int i=0;i<p;++i){
        cout << "Enter element a" << i+1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
    cout << "Enter element of array 2" << endl;
    for(int k=0;k<p;++k){
        cout << "Enter element a" << k+1 << ": ";
        cin >> bru[k];
    }
    cout << endl;
    cout << "Intersection: "<< endl;
    for(int i=0;i<p;i++){
        for(int k=0;k<p;k++){
            if(arr[i] == bru[k]){
                cout << arr[i] << endl;
            }
        }
    }

//2 Matrices Multiplication
    int a[2][2];
    int b[2][2];
    int c[2][2];
    cout << "Enter elements of matrix 1: " << endl;
    for(int i=0;i<2;i++){
        for(int k=0;k<2;k++){
            cout << "enter element a" << i+1 << k+1 << " : "; 
            cin >> a[i][k]; 
        }
    }
    cout << endl;
    cout << "Enter elements of matrix 2: " << endl; 
    for(int i=0;i<2;i++){
        for(int k=0;k<2;k++){
            cout << "enter element b" << i+1 << k+1 << " : ";
            cin >> b[i][k]; 
        }
    }
    cout << endl;

    cout << "Matrix 1: " << endl;
    for(int i=0;i<2;i++){
        for(int k=0;k<2;k++){
            cout << a[i][k] << "  "; 
        }
        cout << endl;
    }
    cout << "Matrix 2: " << endl;
    for(int i=0;i<2;i++){
        for(int k=0;k<2;k++){
            cout << b[i][k] << "  "; 
        }
        cout << endl;
    }
    cout << "Output Matrix: " << endl;
    for(int i=0;i<2;i++){
        for(int k=0;k<2;k++){
            c[i][k]=0;
            for(int j=0;j<2;j++){
                c[i][k] += a[i][j]*b[j][k];
            }
            cout << c[i][k] << "  ";
        }
        cout << endl;
     }
    cout << endl;
}
