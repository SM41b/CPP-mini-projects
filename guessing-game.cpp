#include<bits/stdc++.h>
using namespace std ;

int main(){
    srand(time(0));
    int random_number = rand() % 51 ;
    int number;
    int guesses = 0 ;
    cout << "NUMBER GUESSING GAME" << endl;

    while(true){
    cout << "\nEnter a number : ";
    cin >> number;
    
    if(number > random_number){
        cout << "Guess lower!";
    }
    else if(number < random_number){
        cout << "Guess higher!";
    }
    else{
        cout << "Yeahh ! Correct Guess!";
        break;
    }
    guesses += 1;
    }

    cout << "\nYou took " << guesses << " guesses to win !";
}