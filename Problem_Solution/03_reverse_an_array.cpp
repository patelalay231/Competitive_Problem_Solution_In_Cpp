#include<bits/stdc++.h>
using namespace std;

int main(){
	int len;
	cin >> len;
	int arr[len],reverse_arr[len];

	for(int i=0;i<len;i++){
		cin >> arr[i];
	}

	for(int i=0;i<len;i++){
		reverse_arr[len-i-1] = arr[i];
	}
	cout << "Actual array" << endl;
	for(int i=0;i<len;i++){
		cout << arr[i] << " ";
		
	}
	cout << "\nReversed array" << endl;
	for(int i=0;i<len;i++){
		cout << reverse_arr[i] << " ";
	}
	return 0;
}