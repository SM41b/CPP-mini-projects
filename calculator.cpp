#include <bits/stdc++.h>
using namespace std;

void calculator(double a  , double b , char op){
    if (op == '+'){
        double sum = a+b ; 
        cout << a << " " << op << " " << b << " = " << sum;
    }
    else if (op == '-'){
        double sub = a-b ; 
        cout << a << " " << op << " " << b << " = " << sub;
    }
    else if (op == '*'){
        double mul = a*b ; 
        cout << a << " " << op << " " << b << " = " << mul;
    }
    else if (op == '/'){
        if (b!= 0){
            double div = a/b ; 
            cout << a << " " << op << " " << b << " = " << div;
        }
        else{
            cout << "Error: Division by zero!" ;
        }
        
    }
    else {
        cout << "Invalid input!";
        
    }
}


int main(){
    cout << "SIMPLE CALCULATOR" << endl ;
    double num1 ; 
    double num2 ; 
    char op ; 
    cout << "Enter first number" << endl ;
    cin >> num1 ; 
    cout << "Enter second number" << endl ;
    cin >> num2 ; 
    cout << "Enter the operation you want to perform : (+ , - , * , /)" << endl ;
    cin >> op ; 

    calculator(num1 , num2 , op);
}
