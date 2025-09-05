#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the sixe of array: ";
    cin >> size;
    int *test = new int [size];
    for(int i = 0; i < size; i++){
        cout << "Elements " << (i+1) << ": " ;
        cin >> test[i];
    }
    cout << test[3];
    return 0;
}