/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   : konversi celcius ke fahrenheit
Tahun       : 2019
*/
#include <iostream>
using namespace std;

float cel2Fah(float celcius);

int main()
{
    float celcius = 9;
    float fahrenheit = cel2Fah(celcius);
    cout << "temp is = " << fahrenheit;
}

float cel2Fah(float celcius){
    float fahrenheit;
    fahrenheit = (celcius * 9/5) + 32;
    return (fahrenheit);
}
