#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr = {13,9,2,4,1};
	int minElement,posOfMin;
	bool swapping=0;

	for(int i=0;i<arr.size();i++){
		posOfMin = i;
		swapping=0; // to stop if array is already sorted

		for(int j=i+1;j<arr.size();j++){
			if(arr[j] < arr[posOfMin]){
				posOfMin = j;
				swapping=1;
			}
		}

		if(swapping==0)
			break;
		swap(arr[i],arr[posOfMin]);
		
	}

	for(auto it : arr)
		cout << it << " ";
	
	return 0;
}


/*

Time complexity Analysis :-
	i=0
		j=1 to n-1 
	i=1
		j=2 to n-1
	i=2
		j=3 to n-1
	so on

	t(n) = (n-2) + (n-2) + ..... +3+2+1
		 = O(n(n-1)/2)
		 = O(n^2)
*/