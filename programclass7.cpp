#include <iostream>
using namespace std;

void odd(int arr[], int n){
    int count1 = 0, od[n], max=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 != 0){
            count1 ++;
            if(arr[i] > max){
                max = arr[i];
            } } }
    cout << "Odd are: " << count1 << " Max Odd: " << max << endl; 
}

void even(int arr[], int n){
    int count2 = 0, max1 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count2++;
            if (arr[i] > max1){
                max1 = arr[i];
            } } }
    cout << "Even are: " << count2 << " Max Even: " << max1 << endl;
}

void increase(int arr[], int n){
    int count3 = 0, max2=0;
    for(int i=0;i<(n-1);i++){
        if(arr[i] < arr[i+1]){
            count3 += 1;
            if( (arr[i+1] - arr[i]) > max2){
                max2 = (arr[i+1] - arr[i]);
            } } }
    cout << "Increases are: " << count3 << " Max Increase: " << max2 << endl;
}

void decrease(int arr[], int n){
    int count4 = 0, max3 = 0;
    for(int i=0;i<(n-1);i++){
        if(arr[i] > arr[i+1]){
            count4 += 1;
            if( (arr[i] - arr[i+1]) > max3){
                max3 = (arr[i] - arr[i+1]);
            } } }
    cout << "Decreases are: " << count4 << " Max Decrease: " << max3 << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];    
    }
        odd(arr, n);
        even(arr, n);
        increase(arr, n);
        decrease(arr, n);
}