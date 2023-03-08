/*
Longest Subarray with given Sum K

Problem Statement: Given an array and a sum k, 
we need to print the length of the longest subarray that sums to k.
*/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(stack <T> v) {cerr << "[ "; while(!v.empty()) {T x=v.top();v.pop();_print(x); cerr << " ";} cerr << "]";}
ll power(ll x, ll y) { ll res = 1; while (y) { if (y&1){ res = (res * x); } y = y >> 1; x = (x * x); } return res; }
ll powermod(ll x, ll y, ll m) { int res = 1; x %= MOD; if (x == 0) return 0; while (y > 0) { if (y & 1){ res = (res*x) % MOD;} y = y>>1; x = (x*x) % MOD; } return res; }

int main(){
	#ifndef ONLINE_JUDGE
        freopen("Error.txt","w",stderr);
    #endif

    double x = 4.0/2.0;
    cout << setprecision(3) << fixed;
    cout << x;
    // vector<int> arr = {7,1,6,0};
    // int target = 7;
    // int len = arr.size();
    // int totalSum = 0;
    // int count = 0;
    // map<int,int> prefixSum;

    // prefixSum.insert({0,1});

    // for(int i = 0; i < len; i++){
    // 	totalSum += arr[i];
    // 	int temp = totalSum - target;
    // 	if(prefixSum.find(temp) != prefixSum.end()){
    // 		count += prefixSum[temp];
    // 	}
    // 	prefixSum[totalSum]++;
    // }
    // cout << "No of subarrays whose sum is " << target << " :- ";
    // cout << count << endl;
	return 0;
}