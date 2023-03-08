#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSort(vector<int> arr,int start,int end);
vector<int> merge(vector<int> arr1,vector<int> arr2);

int main(){
	vector<int> arr = {0,9,-1};
    cout << "Before sorting :- \n";
    for(auto it:arr){
        cout << it << " ";
    }
    arr = mergeSort(arr,0,arr.size()-1);
    cout << "\nAfter sorting :- \n";
    for(auto it:arr){
        cout << it << " ";
    }
	return 0;
}

vector<int> mergeSort(vector<int> arr,int start,int end){
    int mid = ((start+end)/2.0);
    vector<int> arr1,arr2;
    if(start==end){
        return {arr[start]};
    }
    arr1 = mergeSort(arr,start,mid);
    arr2 = mergeSort(arr,mid+1,end);

    return merge(arr1,arr2);
}

vector<int> merge(vector<int> arr1,vector<int> arr2){
    vector<int> sortedArr;
    int i=0,j=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]>arr2[j])
            sortedArr.push_back(arr2[j++]);
        else
            sortedArr.push_back(arr1[i++]);
    }
    
    if(i!=arr1.size()){
        for(int k=i;k<arr1.size();k++){
            sortedArr.push_back(arr1[k]);
        }
    }
    if(j!=arr2.size()){
        for(int k=j;k<arr2.size();k++){
            sortedArr.push_back(arr2[k]);
        }
    }

    return sortedArr;
}