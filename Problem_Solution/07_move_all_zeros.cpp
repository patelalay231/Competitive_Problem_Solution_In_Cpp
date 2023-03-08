
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<int> nums = {0,1,0,3,12};
	int length = nums.size();
	int nonZero=0;
	int i=0;
	while(i!=length){
		if(nums[i])
			nums[nonZero++] = nums[i];
		i++;
	}
	for(int i=nonZero;i<length;i++){
		nums[i] = 0;
	}
	for(auto it:nums){
		cout << it << " ";
	}

	return 0;
}


