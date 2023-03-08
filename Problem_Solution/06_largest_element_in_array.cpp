
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int count=0,temp,N;
	vector<int> arr = {10,1,2,121,2};
	int max=-1;
	int secondMax=-1;
	for(int i=0;i<arr.size();i++){
		if(arr[i]>max){
			secondMax=max;
			max=arr[i];
		}
	}
	cout << "max element :- " << max << endl;
	cout << "second max element :- " << secondMax << endl;

	return 0;
}