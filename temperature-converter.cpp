#include <bits/stdc++.h>
using namespace std;

void celsiustofahrenheit(double celsius){
    double  fahrenheit ;  
    fahrenheit = (celsius * 1.8) + 32;
    cout << celsius << " C = " << fahrenheit << " F\n" ;
}
void fahrenheittocelsius(double fahrenheit){
    double  celsius ;
    celsius = (fahrenheit - 32) * 5.0/9.0 ;
    cout << fahrenheit << " F = " << celsius << " C\n" ;
}
void celsiustokelvin(double celsius){
    double  kelvin ;
    kelvin = celsius + 273.15;
    cout << celsius << " C = " << kelvin << " K\n" ;
}
void kelvintocelsius(double kelvin){
    double  celsius ;
    celsius = kelvin - 273.15;
    cout << kelvin << " K = " << celsius << " C\n" ;
}

int main(){

    double celsius ; 
    double fahrenheit ; 
    double kelvin ; 
    cout << "SIMPLE TEMPERATURE CONVERTER\n";
    int choice;
    cout << "Press 1 to convert from celsius to fahrenheit\nPress 2 to convert from fahrenheit to celsius\nPress 3 to convert from celsius to kelvin\nPress 4 to convert from kelvin to celsius : ";

    cin >> choice ; 

    switch (choice)
    {
    case 1:
        cout << "Enter temperature in celsius : ";
        cin >> celsius;
        celsiustofahrenheit(celsius);
        break;
    
    case 2 :
        cout << "Enter temperature in fahrenheit : ";
        cin >> fahrenheit;
        fahrenheittocelsius(fahrenheit);
        break;

    case 3 :
        cout << "Enter temperature in celsius : ";
        cin >> celsius;
        celsiustokelvin(celsius);
        break;
    
    case 4:
        cout << "Enter temperature in kelvin : ";
        cin >> kelvin ;
        kelvintocelsius(kelvin);
        break;

    default:
        cout << "Invalid Input!";
        break;
    }
}