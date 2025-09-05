#include<iostream>
using namespace std;

int main ()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    bool hasDrivingLicense;
    cout << "Do you have a driving license? (1 for yes, 0 for no): ";
    cin >> hasDrivingLicense;

    if (age >= 18) {
        if (hasDrivingLicense) {
            cout << "Eligible" << endl;
        } else {
            cout << "Driving license required" << endl;
        }
    } else  {
        cout << "Not old enough" << endl;
    }

    return 0;
}