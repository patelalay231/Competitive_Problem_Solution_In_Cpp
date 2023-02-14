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
    set<int> div;
    cin >> num;

    for(int i=1;i<=sqrt(num);i++){
        if(num%i==0){
            div.insert(i);
            div.insert(num/i);
        }
    }
    for(auto itr : div){
        cout << itr << " ";
    }
    return 0;
}

