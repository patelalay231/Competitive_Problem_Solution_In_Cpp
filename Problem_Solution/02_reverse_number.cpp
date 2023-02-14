#include<bits/stdc++.h>
using namespace std;

int main(){
	int number,reverseNumber=0,lastDigit;
	cin >> number;
	int max = pow(2,31) - 1;
    int min = pow(-2,31);
	while(number){
		lastDigit = number%10;
		if((reverseNumber*10>max) || (reverseNumber*10<min)) return 0;
		reverseNumber = reverseNumber*10+lastDigit;
		number/=10;
	}


	cout << reverseNumber;
	return 0;
}