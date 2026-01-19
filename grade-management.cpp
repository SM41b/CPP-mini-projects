#include <bits/stdc++.h>
using namespace std;

void gradecalculator(double avg){

    if (avg<=100 && avg >= 90){
        cout << "Grade : O";
    }
    else if (avg >= 80){
        cout << "Grade : E";
    }
    else if (avg >= 70){
        cout << "Grade : A";
    }
    else if (avg >= 60){
        cout << "Grade : B";
    }
    else if (avg >= 50){
        cout << "Grade : C";
    }
    else if (avg >= 40){
        cout << "Grade : D";
    }
    else{
        cout << "Fail";
    }
}

int main(){
    cout << "SIMPLE GRADE ALLOCATION SYSTEM" << endl;

    cout << "Enter the number of subjects : " ; 

    int num ;
    cin >> num ;
    double total = 0;
    vector <int> marks(num);

    for (int i = 0 ; i < num ; i++){
        cout << "Enter marks of subject " << i+1 << " : ";
        cin >> marks[i];

        if(marks[i] > 100 || marks[i] < 0){
            cout << "Invalid Input!\n";
            return 0;
        }

        total += marks[i] ; 
    }

    cout << "Total marks obtained by student : " << total << endl;
    double average ; 
    average  = total / num ; 
    cout << "Average marks of student : " << average << endl; 

    gradecalculator(average);

}