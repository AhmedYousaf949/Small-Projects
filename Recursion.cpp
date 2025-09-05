// #include<iostream>
// using namespace std;
// int factorial(int num){
//     if(num == 0 || num == 1){
//         return 1;
//     }
//     return factorial(num - 1) * num ;
// }
// int main(){
//    int result = factorial(5);
//    cout << "Factorial of 5 :" << result << endl; 
//     return 0;
// }

// fibonacci series

// #include<iostream>
// using namespace std;
// int fibonacci(int num){
    
//     if(num == 0){
//         return 0;
//     }
//     if (num == 1){
//         return 1;
//     }
//     return fibonacci(num - 1) + fibonacci(num - 2);
// }
// int main(){
//     int term;
//     cout << "Enter the term: ";
//     cin >> term;
//     for(int i = 0; i < term; i++){
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;
// }

// sum of digits

#include<iostream>
using namespace std;
int mysumdigit(int num){
    if(num == 0){
        return 0;
    }

    return mysumdigit(num % 10) + mysumdigit(num / 10);
}
int main(){
int result ;
result = mysumdigit(5);
cout << result;
    return 0;
}