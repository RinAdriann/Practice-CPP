#include <iostream>
using namespace std;
int fibonacci(){
}
int main(){
    int i, n; 
    float a=0;
    cin >>n;
    int x[]={3,7,9,4,5,6};
    for(i=0;i<n;i++){
        a+=x[i];
    }
    cout << a/i;
}
/*
    int x[]= {1,4,8,7,5,4,3,4};
    int a=2, i=0;
    bool found = 0;
   do{
    if(x[i]==a){
        cout << "found in " << i << endl;
        found = 1;
    }
    i++;
   }
    while(i<8);
    if(found == 0){
        cout << "not found" << endl;
    }
    */

/*    
int a = 0, n;
    cin >> n;
    int x[]={0, 1, 2, 3, 4};
    for(int i=0;i<n;i++){
        a+=x[i];
    }
    cout << a << endl;

*/