#include<iostream>
using namespace std;
int main ()
{
    int size;
    cout << " Enter inverted pyramid size";
    cin >> size;
    for(int i = size; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}