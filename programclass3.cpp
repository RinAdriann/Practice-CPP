#include <iostream>
using namespace std;
int main(){
int A[4][3]= { 
                    {1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {6,5,6}
                    };
    int B[3][4]= { 
                    {9,8,7,6},
                    {6,5,4,5},
                    {3,2,1,6}
                    };
    int C[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum += A[i][k] * B[k][j];
            } 
            C[i][j] = sum; 
            cout << C[i][j];
            cout << ",";
        }
        cout << endl;
    }
}

/*
    //outputting matrix
    int A[3][3][3]= { 
                    {{1,2,3},{1,2,3},{7,6,8}},
                    {{5,6,7},{3,6,7},{3,3,3}},
                    {{2,9,8},{2,3,4},{1,2,3}}
                    };
    int a, b, c;
    cin >> a >> b >> c;
    while(a>3 || b>3 || c>3){
        cout << "invalid" << endl;
        cin >> a >> b >> c;
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            for(int k=0;k<c;k++){
                cout << A[i][j][k] << ",";
            }
            cout << " ";
        }
        cout << endl;
    }
*/
/*
    //adding two matrix
    int A[2][3]= { 
                    {1,2,3},
                    {4,5,6}};
    int B[2][3]= { 
                    {3,1,2},
                    {2,3,4}};
    int C[2][3];
    int o,p,r,s;
    cin >> o >> p;
    int a,b;
    for (int i=0; i<o; i++) {
        for (int j=0; j<p;j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i=0;i<o;i++) {
        for (int j=0;j<p;j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
*/
/*
//matrix multiplication
    int A[3][3]= { 
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                    };
    int B[3][3]= { 
                    {9,8,7},
                    {6,5,4},
                    {3,2,1}
                    };
    int C[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum += A[i][k] * B[k][j];
            } 
            C[i][j] = sum; 
            cout << C[i][j];
           cout << ",";
        }
        cout << endl;
    }
*/