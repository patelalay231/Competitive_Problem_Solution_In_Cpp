
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<int> arr = {1,2,3,4,5,6};
	bool ans=1;
	for(int i=1;i<arr.size();i++){
		if(arr[i-1]>arr[i]){
			ans = 0;
			break;
		}
	}
	cout << (ans ? "Sorted Array" : "Unsorted Array");

	return 0;
}