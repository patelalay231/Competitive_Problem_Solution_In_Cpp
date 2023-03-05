#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr = {13,9,2,4,1,10,213,2,14,13,2,0,-1};
	bool swapping=false;
	for(int i=0;i<arr.size();i++){
		swapping=false;
		for(int j=0;j<arr.size()-1-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j+1],arr[j]);
				swapping=true;
			}
		}
		if(swapping==false)
			break;
	}

	for(auto it : arr)
		cout << it << " ";
	
	return 0;
}


/*

Time complexity Analysis :-
	i=0
		j=0 to n-1 
	i=1
		j=0 to n-2
	i=2
		j=0 to n-3
	so on

	t(n) = O(n^2)


13 9 2 4 1

	9 2 4 1 13
	2 4 1 9 13
	2 1 4 9 13
	1 2 4 9 13
*/

