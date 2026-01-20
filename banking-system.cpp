#include <bits/stdc++.h>
using namespace std;

void checkbalance(double balance)
{
    cout << "Remaining Balance : " << balance;
}

void deposit(double &balance)
{
    double amount;
    cout << "Enter the amount you want to deposit : ";
    cin >> amount;
    cout << "Amount deposited successfully!";
    balance += amount;
}

void withdraw(double &balance)
{
    double amount;
    cout << "Enter the amount you want to withdraw : ";
    cin >> amount;
    if (amount <= balance)
    {
        cout << "Amount withdrawn successfully!";
        balance -= amount;
    }
    else
    {
        cout << "Insufficient balance!";
    }
}

int main()
{

    cout << "SIMPLE BANKING SYSTEM" << endl;

    double balance = 0;
    int choice;

    while (true)
    {
        cout << "\nEnter:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            checkbalance(balance);
            break;
        case 2:
            deposit(balance);
            break;
        case 3:
            withdraw(balance);
            break;
        case 4:
            return 0;
        default:
            cout << "Invalid Input!\n";
            
        }
        
    }
}