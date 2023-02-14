#include<bits/stdc++.h>
using namespace std;

int main(){
        long long int number,reverseNumber=0,lastDigit;
        cin >> number;
        int copyOfNumber=number;
     
        if(number<0)
            cout << "not a Palindrome";
            return 0;

        while(number){
            lastDigit = number%10;
            reverseNumber = reverseNumber*10+lastDigit;
            number/=10;
        }

        if(reverseNumber==copyOfNumber) 
            cout << "Palindrome";
        else
            cout << "Not a Palindrome"; 
    return 0;
}