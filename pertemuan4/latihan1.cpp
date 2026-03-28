#include <iostream>
#include <string>
using namespace std;

int main(){

    string kata;
    int i;  
    cout << "Masukkan kata: ";
    getline(cin, kata);

    for (i=0; i<kata.length(); i++) {
        kata[i] = toupper(kata[i]);
    }
    cout << "Kata dalam huruf kapital: " << kata << endl;

    return 0;
}