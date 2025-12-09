#include<iostream>
using namespace std;

int main(){
    int num = -1;
    int E = 0;
    int O = 0;
    
    while(num != 0){
    cout << "Enter an integer: ";
    cin >> num;
    
    if(num > 0 && num % 2 == 0){
        E = E + 1;
    }
    else if(num % 2 == 1){
        O = O + 1;
    }
    
    }

    cout << "#Even numbers = " << E << "\n";
    cout << "#Odd numbers = " << O;
    return 0;
}