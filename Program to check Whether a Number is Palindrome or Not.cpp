#include <iostream>
 
using namespace std;
  
int main(){
    int inputNumber, reverseNumber = 0, rightDigit, temp;
    cout << "Enter a number\n";
    cin >> inputNumber;
     
    temp = inputNumber;
    // reverse inputNumber and store it in reverseNumber
    while(temp != 0){
        rightDigit = temp % 10;
        reverseNumber = (reverseNumber * 10) + rightDigit;
        temp = temp/10;
    }
    // If input Number and reverse Number are same 
 // then palindrome othrwise not
    if(reverseNumber == inputNumber){
        cout << inputNumber << " is Palindrome Number";
    } else {
        cout << inputNumber << " is not a Palindrome Number";
    }
      
    return 0;
}
