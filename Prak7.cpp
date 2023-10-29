#include <iostream>
using namespace std;

float cal_gpa(int n, float numscore[], float sks[]){
    float gpa=0, skst=0;
    for(int i=0;i<n;i++){
        gpa += numscore[i] * sks[i];
        skst += sks[i];
    }
    return gpa/skst;
}
int main(){
    int n;
    cout << "How Many Subjects: " << endl;
    cin >> n;
    char score[n];
    float numscore[n], sks[n];

    cout << "Input Your Alphabetic Score: " << endl;
    for(int i=0;i<n;i++){
        cin >> score[i];
        if(score[i] == 'A'){
            numscore[i]=4.0;
        }else if(score[i] == 'B'){
            numscore[i]=3.0;
        }else if(score[i] == 'C'){
            numscore[i]=2.0;
        }
        else if(score[i] == 'D'){
            numscore[i]=1.0;
        }else{
            numscore[i]=0;
        }
    }
    cout << "Input Your SKS For Each Score: " << endl;
    for(int i=0;i<n;i++){
        cin >> sks[i];
    }
    cout << "Your GPA is: " << cal_gpa(n, numscore, sks) << endl;
}

/*
string word(string x, int n){
    int length = x.length();
    string res;
    if(n<1){
        res = " ";
    }else if(n>=length){
        res = x;
    }else{
    for(int i=length - n;i<length;i++){
        res += x[i];
    }}
    return res;    
}

int main(){
    int n;
    string p;
    cout << "Input Word: " << endl;
    cin >> p;
    cout << "Number of Characters: " << endl;
    cin >> n;

    string x =  word(p, n);
    cout << x << endl;
}
*/
