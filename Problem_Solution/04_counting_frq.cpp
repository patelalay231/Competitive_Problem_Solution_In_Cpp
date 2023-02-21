#include<bits/stdc++.h>
using namespace std;

int main(){

	unordered_map<int,int> mp;
	int arr_len;

	cin >> arr_len;
	int arr[arr_len];
	for(int i=0;i<arr_len;i++){
		cin >>  arr[i];
		mp[arr[i]]++;
	}
	int t;
	cin >>t;
	for(int i=1;i<=t;i++){
		cout << mp[i] << " ";
	}

	return 0;
}