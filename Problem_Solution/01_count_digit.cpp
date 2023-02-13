/* 
Problem Statement: 
Given an integer N , write program to count number of digits in N which divides evenly and give remider as 0.

Example 1:
Input: N = 12345
Output: 5
Explanation: N has 5 digits

Example 2:
Input: N = 8394
Output: 4
Explanation: N has 4 digits

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int count=0,temp,N;
	cin >> N;
	int copyN=N;
        while(N!=0){
        	temp = N%10;
        	if(temp == 0 && copyN%temp==0)
        	    count++;
        	N/=10;
        }

	cout << count;

	return 0;
}