#include<iostream>
using namespace std;
int main()
{
    int size = 10;
    
    for(int i = 0; i <= size; i++){
        for( int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    int siz = 0;
    
    for(int i = 10; i >= siz; i--){
        for( int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    int num = 8
    for (int i = num; i > 0; i--){
        for (int j = 1; j <= num; j++){
            if(j > i){
                cout << "*";
            }
            else {
                cout << " ";
            }
            
        }
           cout << endl;
        
    }
    return 0;
}
// 
// {
//     int row = 5;
//     for (int i = 1; i <= row; i++){
//         for(int j = 0; j <= row - i; j++){
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i -1); k++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Fibaconaci series
// {
//     int num, first = 0, second = 1, next;
//     cout << "Enter the number: ";
//     cin >> num;

//     cout << "Fibaconna series: ";
//     for(int i = 1; i <= num; i++){
//         cout << first << " ";
//         next = first + second;
//         first = second;
//         second = next; 
//     }
//     return 0;
// }