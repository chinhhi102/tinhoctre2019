#include<bits/stdc++.h>
using namespace std;
#define int long long
bool cmd(pair<int,int> a, pair<int,int> b){
	if(a.second==b.second)
		return a.first>b.first;
	return a.second>b.second;
}
#undef int
int main(){
	#define int long long
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	pair<int,int> lixi[n];
	for(int i=0;i<n;i++)
		cin>>lixi[i].first>>lixi[i].second;
	sort(lixi,lixi+n,cmd);
	int k=1,sum=0;
	for(int i=0;i<n&&k;i++){
		k--;
		sum+=lixi[i].first;
		k+=lixi[i].second;
	}
	cout<<sum;
}
/*
5
0 0
2 0
2 0
3 0
5 1
*/
