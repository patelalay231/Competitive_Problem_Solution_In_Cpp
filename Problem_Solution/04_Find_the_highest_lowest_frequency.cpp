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

	vector<int> max_elements;
	int max=-1;
	int min=2^31-1;
	vector<int> min_elements;
	for(auto it:mp){
		cout << it.first << "->" << it.second << endl;
		if(it.second<min) min=it.second;
		if(it.second>max) max=it.second;
	}
	for(auto it:mp){
		if(it.second==min){
			min_elements.push_back(it.first);
		}
		if(it.second==max){
			max_elements.push_back(it.first);
		}
	}

	cout << "Highest frequency is " << max << "\nElements which have this frequency is : ";
	for(auto it:max_elements){
		cout << it << " ";
	}
	cout << "\nLowest frequency is " << min << "\nElements which have this frequency is : ";
	for(auto it:min_elements){
		cout << it << " ";
	}
	return 0;
}