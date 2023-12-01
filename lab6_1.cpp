#include<iostream>
using namespace std;

int main(){
    int num;
    int even = 0;
    int odd = 0;
    
    
    cout << "Enter an integer: ";
    cin >> num;
    if (num % 2 == 0 && num != 0) {
                even++; }
            else if (num %2 != 0 && num !=0) {
                odd++; }
            else {
             }
    
    while (num != 0) {
            cout << "Enter an integer: ";
            cin >> num;
            if (num % 2 == 0 && num != 0) {
                even++; }
            else if (num %2 != 0 && num !=0) {
                odd++; }
            else {
            break; }
                
    }
        
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}