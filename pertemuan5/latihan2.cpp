#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<string> nama = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};

    cout << "Isi vector awal:" << endl;
    for (string n : nama) {
        cout << n << endl;
    }

    nama.push_back("Houra");

    nama.pop_back();

    nama.erase(nama.begin() + 1);
    cout << endl;

    cout << "Isi vector setelah perubahan:" << endl;
    for (string n : nama) {
        cout << n << endl;
    }
    cout << endl;
    cout << "Jumlah data tersisa: " << nama.size() << endl;

    return 0;
}