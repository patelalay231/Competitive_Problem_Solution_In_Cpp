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

    int num,copyOfNum,newNum=0,rem;
    cin >> num;
    copyOfNum = num;
    while(copyOfNum){
        rem = copyOfNum%10;
        newNum += pow(rem,3);
        copyOfNum/=10;
    }
    if(newNum==num) cout << "Number is Armstrong number";
    else cout << "Number is not Armstrong number";
    return 0;
}

