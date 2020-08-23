//C++ Program to check if two strings are anagram
#include <iostream>
#include <cstring>
using namespace std;
 
int isAnagram(char *first, char *second);
 
int main(){
    char first[100], second[100];
    cout << "Enter first String\n";
    cin.getline(first, 100);
     
    cout << "Enter second String\n";
    cin.getline(second, 100);
  
    if(isAnagram(first, second)){
        cout << "Both strings are Anagram";
    } else {
        cout << "Both strings are not Anagram";
    }
     
    return 0;
}
  
/*
 * Function to check whether two strings are anagram or not
 * returns 1 if anagram otherwise 0
 */
int isAnagram(char *first, char *second){
    int firstCounter[256] = {0}, secondCounter[256] = {0};
    int i;
    // The length of two strings must be equal
    if(strlen(first) != strlen(second)){
        return 0;
    }
     
    // Count frequency of characters of first String 
    for(i = 0; first[i] != '\0'; i++){
        firstCounter[first[i]]++;
    }
     
    // count frequency of characters of second String
    for(i = 0; second[i] != '\0'; i++){
        secondCounter[second[i]]++;
    }
    // Character count of both strings must be equal, 
    // If not equal return 0, otherwise 1 */
    for(i = 0; i < 256; i++){
        if(firstCounter[i] != secondCounter[i])
            return 0;
    }
     
    return 1;
}
