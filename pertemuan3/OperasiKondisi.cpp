#include<iostream>
using namespace std;

int main(){
    int nilai;
    system("cls");
    cout << "Masukkan Nilai: ";
    cin >> nilai;

    // // if statement
    // if(nilai <= 65){
    //     cout << "anda tidak lulus!" << endl;
    // }
    // // if else statement
    // else(){
    //     cout << "anda lulus!" << endl;
    // }

    // if(nilai == 100){
    //     cout << "nilai sempurna!" << endl;
    // }
    // else if(nilai >= 80){
    //     cout << "nilai sangat baik!" << endl;
    // }
    // else if(nilai >= 70){
    //     cout << "nilai baik!" << endl;
    // }
    // else if(nilai >= 60){
    //     cout << "nilai cukup!" << endl;
    // }
    // else{
    //     cout << "anda tidak lulus!" << endl;
    // }


    // if(nilai <= 65){
    //     cout << "anda tidak lulus!" << endl;
    // }
    // else{
    //     if(nilai == 100){
    //         cout << "anda lulus dan anda hebat" << endl;
    //     }
    //     else{
    //         cout << "nilai sangat baik!" << endl;
    //     }
    // }
       

    //switch case statement
    // switch(nilai){
    //     case 1:
    //         cout << "senin" <<endl;
    //         break;
    //     case 2:
    //         cout << "selasa" <<endl;   
    //         break;
    //     case 3:
    //         cout << "rabu" <<endl;   
    //         break;
    //     case 4:
    //         cout << "kamis" <<endl;
    //         break;
    //     case 5:
    //         cout << "jumat" <<endl;
    //         break;
    //     case 6:
    //         cout << "sabtu" <<endl;
    //         break;
    //     case 7:
    //         cout << "minggu" <<endl;    
    //         break;
    //     default:
    //         cout << "inputan salah!" << endl;
    //         break;
    // }

// switch range
    // switch (nilai)
    // {
    // case 85 ... 100:
    //     cout << "nilai a" << endl;
    //     break;
        
    // case 80 ... 84:
    //     cout << "nilai b" << endl;
    //     break;
    // case 70 ... 79:
    //     cout << "nilai c" << endl;
    //     break;
    // case 60 ... 69:
    //     cout << "nilai d" << endl;
    //     break;
    // default:
    //     cout << "nilai e" << endl;
    //     break;
    // }
    

    // ternery operator
    // if(nilai % 2 == 0){
    //     cout << "nilai genap!" << endl;
    // }
    // else{
    //     cout << "nilai ganjil!" << endl;
    // }

    (nilai % 2 == 0) ? cout << "nilai genap!" << endl : cout << "nilai ganjil!" << endl;

}