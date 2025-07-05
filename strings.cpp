#include <iostream>
using namespace std;

int main()
{

    // string str;
    // cout << "Enter a string: ";
    // cin >> str;


    // Reverse the string
    // for(int i=0; i<str.length()/2; i++) {
    //     char temp = str[i];
    //     str[i] = str[str.length() - 1 - i];
    //     str[str.length() - 1 - i] = temp;
    // }
    // cout << "Reversed string: " << str << endl;


    // Check if the string is a palindrome
    // bool isPalindrome = true;
    // for(int i=0; i<str.length()/2; i++) {
    //     if(str[i] != str[str.length() - 1 - i]) {
    //         isPalindrome = false;
    //         break;
    //     }
    // }
    // if(isPalindrome) {
    //     cout << "The string is a palindrome." << endl;
    // } else {
    //     cout << "The string is not a palindrome." << endl;
    // }



    // Remove the Duplicate Characters
    // string str = "Hello";
    // string emptyStr = "";

    // for(int i=0; i<str.length(); i++) {
    //     for(int j=i+1; i<str.length(); j++) {

    //         if(str[i] == str[j]) {
    //             str[j] = NULL;
    //         }
    //     }
    // }
    // for(int i=0; i<str.length(); i++) {
    //     if(str[i]!=NULL) {
    //         emptyStr[i] = str[i];
    //     }
    // }
    // cout << str;
    // cout << emptyStr;

    //Remove the Duplicate Characters
    string str = "Hello";
    string noDuplicates = "";
    for(int i=0; i<str.length(); i++) {
        if(noDuplicates.find(str[i]) == -1) {
            noDuplicates += str[i];
        }
    }
    cout << "String without duplicates: " << noDuplicates << endl;

    return 0;
}