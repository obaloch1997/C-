#include<iostream>
using namespace std;

float CelsiusToFahrehneit(float);
float FahrenheitToCelsius(float);

int main()
{
    float fahrenheit, celsius, choice;
    cout<<"Would you like to convert to fahrenheit (F) or celsius (C)?: ";
    cin>>choice;
    if(choice =='f'){
      cout<<"Enter the Temperature in Celsius: ";
      cin>>celsius;
      fahrenheit = CelsiusToFahrehneit(celsius);
      cout<<endl<<celsius<<"\370C = "<<fahrenheit<<"\370F";
      cout<<endl;
    }else {
      cout<<"Enter the Temperature in Fahrenheit: ";
      cin>>fahrenheit;
      celsius = FahrenheitToCelsius(fahrenheit);
      cout<<endl<<fahrenheit<<"\370F = "<<celsius<<"\370C";
    }
    return 0;
}
float FahrenheitToCelsius(float f)
{
    float c;
    c = (f-32)/1.8;
    return c;
}

float CelsiusToFahrehneit(float c)
{
    return ((celsius*1.8)+32);
}
