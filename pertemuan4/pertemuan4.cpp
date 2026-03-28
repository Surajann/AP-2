#include <iostream>
using namespace std;

int main() {
//     //goto label
//     // hello world, fasilkomti, ILMU KOMPUTER, IKLC
//     a:
//     cout << "Hello World" << endl;
// goto d;

//     b:
//     cout << "Fasilkomti" << endl;
// return 0;
//     c:
//     cout << "ILMU KOMPUTER" << endl;
// goto b;
//     d:
//     cout << "IKLC" << endl;
// goto c;

//menampilkan bilangan genap dari 10-2 dengan menggunakan goto
// int i

// genap:
// if (i % 2 == 0) {
//     cout << i << " ";
// }
// i--;
// if (i >= 2) {
//     goto genap;
// }

//statement while
// int i = 1;
// while (i <= 10) { //false nya afalah i > 10
//     if (i % 2 == 0) {
//         cout << i << " ";
//     }
//     i++;
//     }

    //statement do while

// int i = 1;
// do {
//     cout << i << endl;
// }while (i <= 0);

//statement for

// for(int 1=1; i<=10; 1+2)
// {    cout << "HELLO WORLD" << endl

// };

//NESTED for
// for(int i=1 ; i<=5; i++){
//     for(int j=1; j<=5; j++){
//         cout << "* ";
            
        
//     }
//     cout<< endl;
    
// }
//segitiga siku siku
for(int i=1 ; i<=5; i++){
    for(int j=1; j<=i; j++){
        cout << "* ";
            
        
    }
    cout<< endl;
}








return 0;

}