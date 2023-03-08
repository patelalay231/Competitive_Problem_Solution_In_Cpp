#include <bits/stdc++.h>
using namespace std;



int main()
{
	vector<int> nums = {3,0,1};

	int length = nums.size();
    int res=length;
    for(int i=0;i<length;i++){
        res = res ^ nums[i]^i;
    }
    cout << res;
	return 0;
}

/*




*/