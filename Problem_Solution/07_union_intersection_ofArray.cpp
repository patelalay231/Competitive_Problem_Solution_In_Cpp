#include <bits/stdc++.h>
using namespace std;

void unionArr(int arr1[],int arr2[],int n,int m){

	vector<int> unionOfarr;
	for(int i=0;i<n;i++){
		unionOfarr.push_back(arr1[i]);
	}
	for(int i=0;i<m;i++){
		unionOfarr.push_back(arr2[i]);
	}
	cout << "Union of arrays :- \n";
	for(auto it:unionOfarr){
		cout << it << " ";
	}
}

void intersectionArr(int arr1[],int arr2[],int n,int m){

	vector<int> intersectionOfArr,vistied(m,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr1[i]==arr2[j] && vistied[j]==0){
				intersectionOfArr.push_back(arr1[i]);
				vistied[j]=1;
				break;
			}
		}
	}
	cout << "\nIntersection of arrays :- \n";
	for(auto it:intersectionOfArr){
		cout << it << " ";
	}
}


int main()
{
	int arr1[] = {1,2,3,4,5,4,4,4,4};  
	int arr2[] = {2,3,4,7,4};
	int n = sizeof(arr1)/sizeof(int);
	int m = sizeof(arr2)/sizeof(int);
	unionArr(arr1,arr2,n,m);
	intersectionArr(arr1,arr2,n,m);
	return 0;
}


