#include <iostream>
#include <string>
using namespace std;

int main(){
	int n=5;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}
		for(int j=0;j<2*i;j++){
			cout<<" ";
		}
		for(int j=0;j<n-i;j++){
			cout<<"*";
		}
        cout<<endl;
	}
	int intS=2*n-2;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		for(int j=0;j<intS;j++){
			cout<<" ";
		}
		for(int j=0;j<=i;j++){
			cout<<"*";
		}
		intS-=2;
        cout<<endl;
	}

}