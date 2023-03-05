#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr = {13,9,2,4,1,10,213,2,14,13,2,0,-1};
    int insertedElement;
    int j;
    for(int i=1;i<arr.size();i++){
        insertedElement = arr[i];
        j=i-1;
        while(j>=0 && insertedElement<arr[j]){
            swap(arr[j+1],arr[j]);
            j--;
        }

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


*/

