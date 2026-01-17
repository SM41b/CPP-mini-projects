#include <bits/stdc++.h>
using namespace std;

void evenoddchecker(int num){
    if (num%2 == 0){
        cout << num << " is an even number.\n";
    }
    else{
        cout << num << " is an odd number.\n";
    }
}

int main(){
    int number;
    cout << "SIMPLE ODD EVEN CHECKER" << endl;

    cout << "Enter a number  : ";
    cin >> number;
    evenoddchecker(number);
}