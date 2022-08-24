#include<iostream>
using namespace std;

float CelsiusToFahrehneit(float);
float FahrenheitToCelsius(float);

int main()
{
    float fahrenheit, celsius;
    char choice;
    cout<<"Would you like to convert to fahrenheit (F) or celsius (C)?: ";
    cin>>choice;
    if(choice =='f'){
      cout<<"Enter the Temperature in Celsius: ";
      cin>>celsius;
      fahrenheit = CelsiusToFahrehneit(celsius);
      cout<<celsius<<"\370C = "<<fahrenheit<<"\370F";
      cout<<endl;
    }else {
      cout<<"Enter the Temperature in Fahrenheit: ";
      cin>>fahrenheit;
      celsius = FahrenheitToCelsius(fahrenheit);
      cout<<fahrenheit<<"\370F = "<<celsius<<"\370C";
      cout<<endl;
    }
    return 0;
}
float FahrenheitToCelsius(float f)
{
    float c;
    c = (f-32)/1.8;
    return c;
}

float CelsiusToFahrehneit(float celsius)
{
    //float c;
    return ((celsius*1.8)+32);
}
