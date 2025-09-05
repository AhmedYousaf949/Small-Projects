// Length of the string 

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string test;
//     getline(cin, test);
//     int count = 0;
//     for (char c : test) {
//         count++;
//     }
//     cout << "String: " << test << endl;
//     cout << "Length: " << count << endl;

//     return 0;
// }

// capital or Small

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string test;
//     getline(cin, test);
//     int capital = 0;
//     int small = 0; 
//     for (char c : test ){
//         if(c >= 65 && c <= 90){
//             capital++;
//         }
//         else if (c >= 97 && c <= 122){
//             small++;
//         }
//     }
//     cout << "Capital: " << capital << endl;
//     cout << "Small: " << small << endl;
//     return 0;
// }

// string palindrome 

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int count = 0;
//     string test;
//     cout << "Enter the sentence: ";
//     getline(cin, test);
//     for(char c : test){
//         count++;
//     }
//     int start = 0, end = count - 1;
//     while(start < end){
//         if(test[start] != test[end]){
//             cout << "Not Palindrome: ";
//         }
//         start++;
//         end--;
//     }
//     cout << "palindrome: ";
//     return 0;
// }


// Function Even or odd

// #include<iostream>
// using namespace std;
// bool iseven(int num){
//     return (num % 2 == 0);
// }
// int main(){
//     int num;
//     cout << "Enter the numbers: ";
//     cin >> num;
//     if(!iseven(num)){
//         cout << "Odd Number:" << endl;
//     }
//     else {
//         cout << "Even Number: ";
//     }
//     return 0;
// }

// Remove duplicate from the Sentence

// #include<iostream>
// #include<string>
// using namespace std;
// string removeDuplicates(string input) {
//     string result = "";
//     for (int i = 0; i < input.length(); i++) {
//         bool isDuplicate = false;
//         for (int j = 0; j < result.length(); j++) {
//             if (input[i] == result[j]) {
//                 isDuplicate = true;
//                 break;
//             }
//         }
//         if (!isDuplicate) {
//             result += input[i];
//         }
//     }
//     return result;
// }
// int main() {
//     string sentence;
//     cout << "Enter the Sentence: ";
//     getline(cin, sentence);
//     cout << "After Removing Duplicates: " << removeDuplicates(sentence) << endl;
//     return 0;
// }

// String sentences Find and Replaces

// #include<iostream>
// #include<string>
// using namespace std;
// string findAndReplace(string sentence, string toFind, string toReplace) {
//     string result = "";
//     int i = 0;
//     int len = toFind.length();
//     while (i < sentence.length()) {
//         bool match = true;
//         for (int j = 0; j < len; j++) {
//             if (i + j >= sentence.length() || sentence[i + j] != toFind[j]) {
//                 match = false;
//                 break;
//             }
//         }
//         if (match) {
//             result += toReplace;  
//             i += len;             
//         } else {
//             result += sentence[i];  
//             i++;
//         }
//     }
//     return result;
// }
// int main() {
//     string sentence, toFind, toReplace;
//     cout << "Enter the sentence: ";
//     getline(cin, sentence);
//     cout << "Enter the word to find: ";
//     getline(cin, toFind);
//     cout << "Enter the word to replace it with: ";
//     getline(cin, toReplace);
//     string updated = findAndReplace(sentence, toFind, toReplace);
//     cout << "Updated Sentence: " << updated << endl;
//     return 0;
// }

// Longest word in a String 

// #include<iostream>
// #include<string>
// using namespace std;
// string findLongestWord(string sentence) {
//     string longest = "";
//     string current = "";
//     for (int i = 0; i < sentence.length(); i++) {
//         char c = sentence[i];
//         if (c != ' ') {
//             current += c; 
//         } else {
//             if (current.length() > longest.length()) {
//                 longest = current;
//             }
//             current = "";  
//         }
//     }
//     if (current.length() > longest.length()) {
//         longest = current;
//     }
//     return longest;
// }
// int main() {
//     string sentence;
//     cout << "Enter a sentence: ";
//     getline(cin, sentence);
//     string longestWord = findLongestWord(sentence);
//     cout << "Longest word: " << longestWord << endl;
//     return 0;
// }

// Capitalize First Letter of Each Word

// #include<iostream>
// #include<string>
// using namespace std;
// string capitalizeFirstLetters(string sentence) {
//     bool capitalizeNext = true;
//     for (int i = 0; i < sentence.length(); i++) {
//         if (sentence[i] == ' ') {
//             capitalizeNext = true;  
//         }
//         else if (capitalizeNext && sentence[i] >= 'a' && sentence[i] <= 'z') {
//             sentence[i] = sentence[i] - 'a' + 'A';  
//             capitalizeNext = false;
//         } else {
//             capitalizeNext = false;
//         }
//     }
//     return sentence;
// }
// int main() {
//     string input;
//     cout << "Enter a sentence: ";
//     getline(cin, input);
//     string capitalized = capitalizeFirstLetters(input);
//     cout << "Capitalized First Letters: " << capitalized << endl;

//     return 0;
// }

//  Replace All Spaces With Hyphens

// #include<iostream>
// #include<string>
// using namespace std;
// string replaceSpacesWithHyphens(string sentence) {
//     for (int i = 0; i < sentence.length(); i++) {
//         if (sentence[i] == ' ') {
//             sentence[i] = '-';
//         }
//     }
//     return sentence;
// }
// int main(){
//     string input;
//     cout << "Enter the sentence: ";
//     getline(cin, input);
//     string hyphenreplaced = replaceSpacesWithHyphens(input);
//     cout << "Replaced Space with Hyphen: " << hyphenreplaced << endl;
//     return 0;
// }

// Reverse a string 

#include<iostream>
using namespace std;
string reverseString(string str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
