#include<bits/stdc++.h>
using namespace std;

//Euclidean Algo to find GCD
int GCD(int a,int b){
    if(a>0 && b>0){
        if(a>b)
            return GCD(a%b,b);
        else
            return GCD(a,b%a);
    }
    if(a==0) return b;
    return a;
}

int main(){

    int number1,number2;
    cin >> number1 >> number2;

    /* brute fore to find GCD

    int itr=min(number1,number2);

    while(itr){
        if(number1%itr==0 && number2%itr==0){
            cout << "Greatest common divisor is : " << itr << endl;
            break;
        }
        itr = ceil(itr/2.0);
        
    }

    */
    int gcd = GCD(number1,number2);
    cout << "Greatest common divisor is : " << gcd << endl;

    // a*b = lcm(a*b) * gcd(a*b)

    cout << "least common multiple is : " << (number1*number2)/gcd << endl;


    return 0;
}

