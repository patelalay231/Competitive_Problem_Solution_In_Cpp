#include <bits/stdc++.h>
using namespace std;
void fun(int *arr);
int main(){
    int x,z;
    int *y;
    x=5;
    y=&x;
    x=*y;
    cout << y << endl << &x;
}

