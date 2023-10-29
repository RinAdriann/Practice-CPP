#include <iostream>
using namespace std;

int main(){
    string gender;
    float age, height;
    cout << "male or female?" << endl;
    cin >> gender;
    while((gender != "male") && (gender != "female")){
        cout << "invalid gender" << endl;
        cout << "re input gender, male or female" << endl;
        cin >> gender;
    }
    cout << "input age, height" << endl;
    cin >> age >> height;

    if(gender == "male"){
        if ((age <= 15) && ((height >= 160) && (height <= 165))){
            cout << "category A";
        }
        else if (((age > 15) && (age < 20)) && ((height >= 165) && (height <= 170))){
            cout << "category B";
        }
        else if ((age >= 20) && (height > 170)){
            cout << "category C";
        }
        else{
            cout << "invalid input";        
        }
    }
    else if(gender == "female"){
        if ((age <= 17) && ((height >= 155) && (height <= 160))){
            cout << "category X";
        }
        else if (((age > 17) && (age <= 23)) && ((height >= 160) && (height <= 165))){
            cout << "category Y";
        }
        else if (((age > 23) && (age <= 30)) && ((height > 165) && (height <= 170))){
            cout << "category Z";
        }
        else{
            cout << "invalid input";
        }
    }
    else{
        cout << "invalid input";
    }

}
/* 
    float x;
    cout << "insert number: " << endl;
    cin >> x;

    if(((x>=2)&&(x<3))||(x>5)){
        cout << "1st condition" << endl;
    }
    else if((x>=3)&&(x<=5)){
        cout << "2nd condition" << endl;
    }
    else{
        cout << "3rd condition" << endl;
    }

*/

/*    
    float ipk;
    cout << "insert IPK" << endl;
    cin >> ipk; 
    while((ipk >4.0) || (ipk < 0)){
        cout << "not valid" << endl;
        cout << "insert IPK" << endl;
        cin >> ipk;
    }
    if((ipk >= 3.5) && (ipk <= 4.0 )){
        cout << "cumlaude" << endl;
    }
    else if((ipk >= 3.0) && (ipk < 3.5)){
        cout << "very satisfactory" << endl;
    }
    else if((ipk >= 2.5) && (ipk < 3.0)){
        cout << "satisfactory" << endl;
    }
    else if((ipk >= 2.0) && (ipk < 2.5)){
        cout << "fair" << endl;
    } 
    else if((ipk >= 0) && (ipk < 2)){
        cout << "failed" << endl;
    }
    else{
        cout << "not valid";
        cin >> ipk;
    }
*/
