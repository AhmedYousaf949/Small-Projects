
// static transpose of matrix

// #include<iostream>
// using namespace std;
// int main(){
//     int testti[3][3];
//     int test[3][3] = {{1, 2, 3},
//                         {3, 2, 4},
//                         {8, 9, 4}
//     };
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//              testti[j][i] = test[i][j];
//         }
//     }    
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             cout << testti[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

// Dynamic array transpose

// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     int column;
//     cout << "Enter size of the matrix: \n";
//     cin >> row >> column;
//     int ** matrix = new int * [row];
//     for(int i = 0; i < row; i++){
//         matrix[i] = new int[column];
//     }
//     int ** transposed = new int * [column];
//     for(int i = 0; i < column; i ++){
//         transposed[i]  = new int [row];
//     }
//     cout << " Enter elements in the matrix: \n";
//     for (int i = 0; i < row; i++){
//         for (int j = 0; j < column; j++){
//             cout << "[" << i+1 << "]" << "[" << j+1 << "]" << ": ";
//             cin >> matrix[i][j] ;
//         }
//         cout << endl;
//     }

//     for(int i = 0; i < row; i ++){
//         for (int j = 0; j < column; j++){
//             transposed[j][i] = matrix[i][j];
//         }
//     }
//     cout << "Matrix before transpose: \n";
//     for(int i = 0 ; i < row; i++){
//         for(int j = 0; j < column; j++){
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Transposed of the matrix: \n";
//     for (int i = 0; i < column; i++){
//         for (int j = 0; j < row; j++){
//             cout << transposed[i][j] << " ";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i < row; i++){
//         delete[] matrix[i];
//     }
//     delete[] matrix;
//     for(int i = 0; i < column; i++){
//         delete[] transposed[i];
//     }
//     delete[] transposed;
    
//     return 0 ;

// }

// Sum of digits5
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout << "Enter the digits: ";
//     cin >> num;
//     int result = (num % 10) + (num / 10);
//     cout << result;
//     return 0;
// }
// practice question 

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {12, 35, 1, 10, 34, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int largest = arr[0];
//     int secondLargest = -1;

//     for (int i = 1; i < size; i++) {
//         if (arr[i] < largest) {
//             secondLargest = largest;
//             largest = arr[i];
//         } else if (arr[i] < secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }

//     cout << "Second Largest: " << secondLargest;

//     return 0;
// }

// sifting elements
// #include<iostream>
// using namespace std;
// int main(){
//     int test[5] = {1, 2, 3, 4, 5};
//     int size = sizeof(test)/sizeof(test[0]);
//     cout << "Before Shifting: \n";
//     for(int i = 0; i < size; i++){
//         cout << test[i] << " ";
//     }
//     cout << endl;
//     int last = test[size -1];
//     for(int i = size - 1; i > 0; i--){
//         test[i] = test[i-1];
//     }
//     test[0] = last;
//     cout <<"After shifting: \n";
//     for(int i = 0; i < size; i++){
//         cout << test[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

//Revesing array

// #include<iostream>
// using namespace std;
// int main(){
//     int test[] = {56, 78, 54, 5, 9};
//     int size = sizeof(test)/sizeof(test[0]);
//     cout << "Orginal array: \n";
//     for(int  i = 0; i < size; i++){
//         cout << test[i] << ": ";
//     }
//     cout << endl;

//     cout << "Reversing an array: ";
//     for(int i = 0; i < size/2; i++){
//         int temp = test[i];
//         test[i] = test[size - 1 -i];
//         test[size - 1 -i] = temp;
//     }
//     cout << "After revesing: \n";
//     for(int  i = 0; i < size; i++){
//         cout << test[i] << ": ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// bool isprime(int num){
//     if(num < 2){
//         return false;
//     }
//     for(int i = 2; i * i <= num; i++){
//         if(num % i == 0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int test[5];
//     cout << "Enter 5 integer: ";
//     for(int i = 0; i < 5; i++){
//         cout << "Elements" << i+1 << ": ";
//         cin >> test[i];
//     }
//     cout << endl;
//     for(int i = 0; i < 5; i++){
//     if(isprime(test[i])){
//         cout << test[i] << "isprime" << endl;
//     }
//     else{
//         cout << test[i] << "notprime" << endl;
//     }
// }
//     cout << endl;
//     return 0;
// }

// calculate  maximum

// #include<iostream>
// using namespace std;
// int findmax(int mark[], int size){
//     int max = mark[0];
//     for(int i = 0; i < size; i++){
//         if(mark[i] > max){
//             max = mark[i];
//         }
//     }
//     return max;
// }
// int main(){
//     int mark[10];
//     for(int i = 0; i < 10; i++){
//         cout << "Student " << i+1 << ": ";
//         cin >> mark[i];
//     }
//     int highest = findmax(mark, 10);
//     cout << highest << endl;
//     return 0;
// }

// calculate average

// #include<iostream>
// using namespace std;
// double calculateaverage(int mark[], int size){
//     int sum = 0;
//     for(int i = 0; i < size; i++){
//         sum = sum + mark[i];
//         }
    
//     return sum/size;
// }
// int main(){
//     int mark[10];
//     for(int i = 0; i < 10; i++){
//         cout << "Student " << i+1 << ": ";
//         cin >> mark[i];
//     }
//     double average = calculateaverage(mark, 10);
//     cout << "Average " << average << endl;
//     return 0;
// }

// lowest number among students

// #include<iostream>
// using namespace std;
// int findmin(int mark[], int size){
//     int min = mark[0];
//     for(int i = 0; i < size; i++){
//         if(mark[i] < min){
//             min = mark[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int mark[10];
//     for(int i = 0; i < 10; i++){
//         cout << "Student " << i+1 << ": ";
//         cin >> mark[i];
//     }
//     int lowest = findmin(mark, 10);
//     cout << "Lowest " << lowest << endl;
//     return 0;
// }

// calculate above 50 

//  #include<iostream>
// using namespace std;
// int calabove50(int mark[], int size){
//     int count = 0;
//     for(int i = 0; i < size; i++){
//         if(mark[i] > 50){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int mark[10];
//     for(int i = 0; i < 10; i++){
//         cout << "Student " << i+1 << ": ";
//         cin >> mark[i];
//     }
//     int count = calabove50(mark, 10);
//     cout << "Count: " << count << endl;
//     return 0;
// }

// grading system

// #include <iostream>
// using namespace std;
// char Grade(int marks) {
//     if (marks >= 85) {
//         return 'A';
//     } else if (marks >= 70) {
//         return 'B';
//     } else if (marks >= 50) {
//         return 'C';
//     } else {
//         return 'F';
//     }
// }

// int main() {
//     int marks[10];
//     char grades[10];
//     cout << "Enter marks for 10 students:\n";
//     for (int i = 0; i < 10; i++) {
//         cout << "Roll No " << (i + 1) << ": ";
//         cin >> marks[i];
//         grades[i] = Grade(marks[i]);
//     }
//     cout << "\nStudent Report:\n";
//     for (int i = 0; i < 10; i++) {
//         cout << "Grade of Student with Roll No " << (i + 1) << ": " << grades[i] << endl;
//     }

//     return 0;
// }

// string manipulation

// #include <iostream>
// using namespace std;
// void display(char *);
// void display(string);
// int main()
// {
//     string str1;
//     char str[100];
//     cout << "Enter a string: ";
//     getline(cin, str1);
//     cout << "Enter another string: ";
//     cin.get(str, 100, '\n');
//     display(str1);
//     display(str);
//     return 0;
// }
// void display(char s[])
// {
//     cout << "Entered char array is: " << s << endl;
// }

// void display(string s)
// {
//     cout << "Entered string is: " << s << endl;
// }



