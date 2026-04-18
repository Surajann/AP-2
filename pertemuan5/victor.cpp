#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector declaration
        vector<string> nama_karyawan = {"dimas", "bimo", "azka", "ilam", "ajan"};

    // //menampilkan data ascending
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }
    //add ata ke vektor
    nama_karyawan.push_back("billy");
    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    //delete data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3); 


    for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i] << endl;
    }




}