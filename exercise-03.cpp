/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   : swap angka x dan y
Tahun       : 2019
*/
#include <iostream>
using namespace std;

void swap(int& x, int& y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int x = 5, y = 4;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    swap (x,y);
    cout << "After swap" << endl;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
}
