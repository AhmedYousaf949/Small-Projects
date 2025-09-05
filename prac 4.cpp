#include<iostream>
using namespace std;
int main()
{
    int sum , start , end;
    cout << " Enter starting point: ";
    cin >> start;
    cout << "Enter ending point: ";
    cin >> end;
    for(int i = start; i <= end; i++){
        if(i % 3 == 0 || i % 5 == 0){
           sum = sum +i; 
        }
        
    }
    cout << sum << endl;
    return 0;
}