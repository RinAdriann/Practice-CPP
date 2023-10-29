#include <iostream>
using namespace std;

// struct siswa{
//     int student_id;
//     int midterm_score;
//     int finalexam_score;
// };

// int main(){
//     int n;
//     cout << "Enter the Number of Students" << endl;
//     cin >> n;
//     siswa s[n];
//     while(n>=50){
//         cout << "Number is beyond maximum. Reinput Number of Students" << endl;
//         cin >> n;
//     }

//     for(int i = 0;i<n;i++){
//         cout << "Enter Student ID : ";
//         cin >> s[i].student_id;
//         cout << "Enter Midterm Score : ";
//         cin >> s[i].midterm_score;
//         cout << "Enter Final Exam Score : ";
//         cin >> s[i].finalexam_score;

//         float avg = (s[i].midterm_score + s[i].finalexam_score)/2;
//         cout  << endl << "Student ID : " << s[i].student_id << endl << "Average : " << avg << endl;
//         cout << endl;
//     }
// }
// /*
struct siswa{
    string name;
    string month;
    int date;
};

int main(){
        siswa x;
        cout << "Input name, date and month: " << endl;
        cin >> x.name >> x.date >> x.month;
        for (int i = 0; i < x.month.length(); i++){
            if(x.month[i] >= 65 && x.month[i] <= 90){
                x.month[i] += 32;
            }
        }
        while(x.date<=0 || x.date>31){
            cout << "Re Input Date: ";
            cin >> x.date;
        }
        while(x.month== "february" && x.date > 29){
            cout << "Re Input Date: ";
            cin >> x.date;
        }
        while( (x.month== "april" || x.month== "june" || x.month== "september" || x.month=="november") && x.date > 30){
            cout << "Re Input Date: ";
            cin >> x.date;
        }
        cout << x.name << "'s zodiac is ";
        if((x.month == "april" && x.date <= 19) || (x.month == "march" && x.date >= 21 )){
            cout << "Aries" << endl;
        }else if ((x.month == "may" && x.date <= 20) || (x.month == "april" && x.date >= 20 ))
        {
            cout << "Taurus" << endl;
        }else if ((x.month == "may" && x.date >= 21) || (x.month == "june" && x.date <= 20 ))
        {
            cout << "Gemini" << endl;
        }else if ((x.month == "june" && x.date >= 21) || (x.month == "july" && x.date <= 22 ))
        {
            cout << "Cancer" << endl;
        }else if ((x.month == "july" && x.date >= 23) || (x.month == "august" && x.date <= 22 ))
        {
            cout << "Leo" << endl;
        }else if ((x.month == "august" && x.date >= 23) || (x.month == "september" && x.date <= 22  ))
        {
            cout << "Virgo" << endl;
        }else if ((x.month == "september" && x.date >= 23) || (x.month == "october" && x.date <= 22 ))
        {
            cout << "Libra" << endl;
        }else if ((x.month == "october" && x.date >= 23) || (x.month == "november" && x.date <= 21 ))
        {
            cout << "Scorpio" << endl;
        }else if ((x.month == "november" && x.date >= 22) || (x.month == "december" && x.date <= 21 ))
        {
            cout << "Sagitarius" << endl;
        }else if ((x.month == "december" && x.date >= 22) || (x.month == "january" && x.date <= 19 ))
        {
            cout << "Capricorn" << endl;
        }else if ((x.month == "january" && x.date >= 20) || (x.month == "february" && x.date <= 18 ))
        {
            cout << "Aquarius" << endl;
        }else if ((x.month == "february" && x.date >= 19 )|| (x.month == "march" && x.date <= 20 ))
        {
            cout << "Pisces" << endl;
        }else {
            cout << "Invalid Input" << endl;
        }
}


/*
//nomor 2

struct siswa{
    int student_id;
    int midterm_score;
    int finalexam_score;
};

int main(){
    int n;
    cout << "input jml siswa" << endl;
    cin >> n;
    siswa s[n];
    while(n>=50){
        cout << "way too big, re input." << endl;
        cin >> n;
    }

    for(int i = 0;i<n;i++){
        cout << "Masukkan ID Mahasiswa: ";
        cin >> s[i].student_id;
        cout << "masukkan UTS: ";
        cin >> s[i].midterm_score;
        cout << "masukkan UAS: ";
        cin >> s[i].finalexam_score;

        float avg = (s[i].midterm_score + s[i].finalexam_score)/2;
        cout  << endl << "ID Mahasiswa: " << s[i].student_id << endl << "Rata-rata: " << avg << endl;
    }
}
*/