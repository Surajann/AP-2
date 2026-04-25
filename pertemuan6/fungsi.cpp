#include <iostream>
using namespace std;
//fungsi tanpa niolai balikan

void tampilkanpesan(){  
    cout<<"belajar fungsi" << endl;
}

// fungsi dengan nilai balikan
int tambah(int a , int b){
    return a + b;
}

int kali(int a , int b){
    return a * b;
}

double kali(double a , double b){
    return a * b;
}

// fungsi rekursif
int faktorial(int n){
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return n * faktorial(n - 1);
    }
}



int main(){
    

    tampilkanpesan();

    int x = 5;
    int y = 3;
    int hasiltambah = tambah(x, y);


    cout << "Hasil penjumlahan: " << hasiltambah << endl;

    int hasilkali = kali(x, y);
    cout << "Hasil perkalian: " << hasilkali << endl;

    double n = 3;
    double m = 5;
    double hasilkali_double = kali(n, m);
    cout << "Hasil perkalian (double): " << hasilkali_double << endl;
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah: " << faktorial(angka) << endl;

}