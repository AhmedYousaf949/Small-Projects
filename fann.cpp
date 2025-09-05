#include<iostream>
// #include<unistd.h>
#include <windows.h>
// #include<conio.h>
using namespace std;
void myplus ()
{
    int size = 14;

    for(int i = 0; i <= (size / 2 - 1); i++){
        for(int j = 0; j <= size; j++){
        cout << " ";
    }
    cout << "*" << endl;
    }
    for (int i = 0; i <= size; i++){
        cout << " *";
    }
    for(int i = 0; i <= (size / 2 - 1); i++){
        for(int j = 0; j <= size; j++){
        cout << " ";
    }
    cout << "*" << endl;
    }
    
}
void across(int size)
{
    int outerloop = size;
    int innerloop = 0;
    int i = 0;
    for(i = 0; i <= size; i++){
        for(int j= 0; j <= (innerloop); j++){
            cout << "  ";
        }
        innerloop++;
       cout << "*";
       
    
    
       for(int j = 0; j < (outerloop*2); j++){
            cout << "  ";
        }
        outerloop--;
        cout << "*";
        cout << endl;
        
    }

     outerloop = 0;
     innerloop = size;
     i = 0;
    for(i = 0; i < size; i++){
        for(int j = 0; j < (innerloop); j++){
            cout << "  ";
        }
        outerloop++;
        cout << "*";
        

    
    
        for(int j = 0; j < (outerloop*2); j++){
            cout << "  ";
        }
        innerloop--;
        cout << "*";
        cout << endl;
        
    }
    
}

int main ()
{
    across(6);
    
    myplus();
    
    // clrscr();
    // sleep(2);
    
    return 0;
}