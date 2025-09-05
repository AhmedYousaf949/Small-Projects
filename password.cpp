#include<iostream>
using namespace std;
int main(){
    string password;
    string correctpassword = "ahmed123";
    int attempt = 4;
    while(attempt > 0){
        cout << "Enter Your Password: ";
        cin >> password;
        if(password == correctpassword){
            cout << "Successfully login: Enjoy";
            return 0;
        }
        else{
            attempt--;
            if(attempt > 0){
                cout << "Wrong Password! Attempt Left: " << attempt << endl;
            }
            else{
                cout << "Too many Failed Attempt! Fuck Off" << endl;
            }
        }
    }
    return 0;
}