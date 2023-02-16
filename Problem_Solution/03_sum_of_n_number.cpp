#include<bits/stdc++.h>
using namespace std;


int sumOfN(int num){
    if(num == 0) return 0;
    if(num == 1) return 1;

    return num + sumOfN(num-1);
}

int main(){

    int num;
    cin >> num;

    cout << sumOfN(num);

    return 0;
}
    
