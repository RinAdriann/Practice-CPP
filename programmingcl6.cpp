#include <iostream>
using namespace std;

int main(){
    int p = 10;
    int arr[]={2,3,4,3,4,2,3,5,3};
    int co[p]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0; i<p; i++){
        for(int j=i+1; j<p; j++){ 
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<p; i++){
        if(arr[i] >= 2 && arr[i] <= 5){
            co[arr[i]]++;
        }}
    for(int i=0; i<=3; i++){
        for(int j=i+1;j<5;j++){
            if(co[i]>co[j]){
                int temp = co[i];
                co[i]=co[j];
                co[j]=temp;
                cout << "mode is " << i << " show up " << temp << " times";
            }}}
}

/*
//find mode
    int arr[]={2,3,4,3,4,2,3,5,3};
    int co[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){ 
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }}}
    for(int i=0; i<10; i++){
        if(arr[i] >= 2 && arr[i] <= 5){
            co[arr[i]]++;
        }}
    for(int i=0; i<=3; i++){
        for(int j=i+1;j<5;j++){
            if(co[i]>co[j]){
                int temp = co[i];
                co[i]=co[j];
                co[j]=temp;
                cout << "mode is " << i << " show up " << temp << " times";
            }}}

*/
