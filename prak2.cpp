
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    double det, x1, x2;

    det = (b*b) - (4*a*c);
    if(det > 0){
        x1 = (-b + sqrt(det)) / (2.0 *a);
        x2 = (-b - sqrt(det)) / (2.0 *a);
        cout << "x1 is " << x1 << " and x2 is " << x2 << endl;
    }
    else if(det == 0){
        x1 = (-b / 2.0) * a;
        x2 = x1;
        cout << "x1 and x2 is " << x1 << endl;
    }
    else{
        det = det*(-1);
        x1 = (-b / 2.0 *a) + (sqrt(det) / 2.0 *a);
        x2 = (-b / 2.0 *a) - (sqrt(det) / 2.0 *a);
        cout << "x1: " << x1 << "i" << " and x2: " << x2 << "i" << endl;
    }
    // int m;
    // string month[13]= {"invalid", "January", "February", "March", "April", "May", "Juny", "July", "August", "September", "October", "November", "December"}; 
    // cout << "input month (in number): " << endl;
    // cin >> m;
    // int day1 = 31, day2= 30, day3= 28;
    // while(m>12){
    //     cout << "invalid month" << endl << "reinput month: ";
    //     cin >> m;
    // }
    
    // if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
    //     cout << "there are " << day1 << " days in " << month[m] << endl;
    // }
    // else if(m == 2){
    //     cout << "there are " << day3 << " days in " << month[m] << endl;
    // }
    // else{
    //     cout << "there are " << day2 << " days in " << month[m] << endl;
    // }
} 


// switch(m){
    //     case 1:
    //         cout << "There are 31 days in January" << endl;
    //         break;
    //     case 2:
    //         cout << "There are 28 days in February" << endl;
    //         break;
    //     case 3:
    //         cout << "There are 31 days in March" << endl;
    //         break;
    //     case 4:
    //         cout << "There are 30 days in April" << endl;
    //         break;
    //     case 5:
    //         cout << "There are 31 days in May" << endl;
    //         break;
    //     case 6:
    //         cout << "There are 30 days in June" << endl;
    //         break;
    //     case 7:
    //         cout << "There are 31 days in July" << endl;
    //         break;
    //     case 8:
    //         cout << "There are 31 days in August" << endl;
    //         break;
    //     case 9:
    //         cout << "There are 30 days in September" << endl;
    //         break;
    //     case 10:
    //         cout << "There are 31 days in October" << endl;
    //         break;
    //     case 11:
    //         cout << "There are 30 days in November" << endl;
    //         break;
    //     case 12:
    //         cout << "There are 31 days in December" << endl;
    //         break;
    //     default:
    //     cout << "invalid input" << endl; 
    // } 
    /* long double x;
    long int y;
    cin >> x;
    y = x;
    if(x == y){
        cout << "an integer" << endl;
    }
    else{
        cout << "not an integer" << endl;
    }

    
    */


    /* 
    */