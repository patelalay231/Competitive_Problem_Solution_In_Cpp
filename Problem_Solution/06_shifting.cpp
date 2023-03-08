
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<int> arr = {1,2,3,4,5,6};
	vector<int> newArr(arr.size());
	int k=3,length=arr.size(),index;
	for(int i=0;i<arr.size();i++){
		index = i-k;
		if(index<0)
			index = length+index;
		newArr[index] = arr[i];
	}
	for(auto it:newArr){
		cout << it << " ";
	}

	return 0;
}


/*
in - 0 1 2 3 4 5 
	 1 2 3 4 5 6
	 after shift
	 3 4 5 6 1 2 

*/