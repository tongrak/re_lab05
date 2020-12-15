#include<iostream>
using namespace std;

int main(){
    int x = 1, EveNum = 0, OddNum = 0; 
    while ( x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x > 0 && x!=0){
            if (x%2 == 0){EveNum++;}
            else {OddNum++;} 
        }
    }

    cout << "#Even numbers = " << EveNum <<endl;
    cout << "#Odd numbers = " << OddNum;
    return 0;
}
