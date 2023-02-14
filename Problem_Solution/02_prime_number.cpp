#include<bits/stdc++.h>
using namespace std;

/*

For a given 3 digit number, find whether it is armstrong number or not.
 An Armstrong number of three digits is an integer such that the sum of the cubes 
 of its digits is equal to the number itself.
  Return "Yes" if it is a armstrong number else return "No".
NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371


*/

int main(){

    int num;
    bool ans=true;
    cin >> num;
    
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            ans = false;
            break;
        }
    }
    ans ? cout << "Number is a prime number" : cout << "Number is not a prime number";
    return 0;
}

