#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,newS;
	cin >> s;
	int len = s.length();
	for(int i=0;i<len;i++){
		if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){
			newS+=s[i];
		}
	}	

	len = newS.length();
		cout << newS << endl;
	for(int i=0;i<len/2;i++){
		if(tolower(newS[i])!=tolower(newS[len-i-1])){
			cout << "string is not a palindrome";
			return 0;
		}
	}
	cout << "string is a palindrome\n";
	return 0;
}