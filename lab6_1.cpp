#include<iostream>
using namespace std;

int main(){
    int num =1;
    int Even = 0;
    int Odd = 0;
    while(num != 0){
     cout << "Enter an integer: ";
     cin >> num;
     if (num != 0){
     if(num %2 == 0 && num != 0){
        Even = Even + 1;
     }
     else if(num % 2!= 0 && num != 0) {
        Odd = Odd+ 1;
     }
    }
    }

    cout << "#Even numbers = " << Even << "\n";
    cout << "#Odd numbers = " << Odd << "\n";
    return 0;
}
