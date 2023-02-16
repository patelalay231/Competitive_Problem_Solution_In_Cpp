#include<bits/stdc++.h>
using namespace std;


int factorial(int num){
    if(num<=1){
        return num;
    }
    else{
        return factorial(num-1)+factorial(num-2);
    }
}

int main(){

    int num;
    cin >> num;
    for (int i = 0; i <=num; ++i)
    {
        cout << factorial(i) << " ";
    }
    return 0;
}
    
