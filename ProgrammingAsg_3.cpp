#include <iostream>
#include <iomanip>
using namespace std;
int main(){
//Multiplication Table
        int n;
        cout << "insert maximum number: ";
        cin >> n;

        cout << setw(4) << " ";
        for(int a=0;a<=n;a++){
            cout << setw(4) << a;
        }
        cout << endl;
        for(int x=0;x<=n;x++){
            cout << x << "  -";
            for(int y=0;y<=n;y++){
                cout << setw(4) << x*y;
            }
            cout << endl;   
        }
        cout << "press Enter to continue...";

//Even Numbers Descending
        int n;
        cin >> n;
        for(int i=n;i>=0;i--){
          if(i%2==0){
          cout << i;
        }else{
          cout << " ";
          }
        }

//Pattern According To User
        int max, p;
        cin >> max >> p;
        for(int i=1;i<=max;i++){
          if(i%p==0){
            cout <<  "*";
          }else{
            cout << " " << i << " ";
            }
          }
}
