#include <bits/stdc++.h>
using namespace std;

int main()
{

    srand(time(0));
    int length;
    string result = "";

    cout << "SIMPLE PASSWORD GENERATOR : " << endl;

    cout << "Enter length of password : ";

    cin >> length;

    if (length <= 0)
    {
        cout << "Invalid Input!";
        return 0;
    }
        for (int i = 0; i < length; i++)
        {
            result += to_string(rand() % 10);
        }

        cout << "\nGenerated Password : " << result;

}