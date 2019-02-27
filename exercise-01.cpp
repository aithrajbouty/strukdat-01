/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   : mengeluarkan "Fizz", "Buzz", dan "FizzBuzz" di angka2 tertentu
Tahun       : 2019
*/

#include <iostream>

using namespace std;

void fizzbuzz(int& i){
    for(int i=1;i<=100;i++){
        if (i%15==0){
            cout << "Fizzbuzz";
        }
        else if(i%3==0){
            cout << "Fizz";
        }
        else if(i%5==0){
            cout << "Buzz";
        }
        else{
            cout << i;
        }
    cout << endl;
    }
}

int main()
{
    int i;
    fizzbuzz(i);
}
