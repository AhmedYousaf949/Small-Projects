#include<iostream>
using namespace std;
void cross()
{
    int outerloop = 10;
    int innerloop = 0;
    int i = 0;
    for(i = 0; i < 10; i++){
        for(int j = 0; j < innerloop; j++ ){
            cout << " ";
        }
        cout << "*" << endl;
        innerloop++;
    }
    for(int j = 0; j < outerloop; j++){
        cout << " ";
    }
    outerloop--;
    cout << "*";
    cout << endl;
}
void croos()
{
    int outerloop = 0;
    int innerloop = 10;
    int i = 0;
    for(i = 0; i < 10; i++){
        for(int j = 0; j < innerloop; j++){
            cout << " ";
        }
        cout << "*" << endl;
        innerloop--;
    }
    for(int j = 0; j < outerloop; j++){
        cout << " ";
    }
    outerloop++;
    cout << "*";
    cout << endl;
}
int main()
{
     cross();
     croos();
    return 0;
}