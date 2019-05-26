#include<bits/stdc++.h>
using namespace std;
#define int long long
bool cmd(pair<int,int> a, pair<int,int> b){
	if(a.second==b.second)
		return a.first>b.first;
	return a.second>b.second;
}
string toString(int x){
	string res="";
	bool t=0;
	if(x<10)
		t=1;
	while(x){
		res+=char(x%10+'0');
		x/=10;
	}
	if(t)
		res+='0';
	return string(res.rbegin(),res.rend());
}
#undef int
int main(){
	#define int long long
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	srand(time(NULL));
	for(int cas=0;cas<20;cas++){
		/*Sinh test*/
		freopen(("key"+toString(cas)+".in").c_str(),"w",stdout);
		int mo=cas?cas*10:5;
		cout<<mo<<endl;
		int d=0;
		for(int i=0;i<mo;i++){
			int a=rand()%20+1;
			int b=rand()%4;
			b=(d==4?b:0);
			d=(d+1)%5;
			cout<<a<<' '<<b<<endl;
		}
		
		/* Giai bai */
		freopen(("key"+toString(cas)+".in").c_str(),"r",stdin);
		int n;
		cin>>n;
		pair<int,int> lixi[n];
		for(int i=0;i<n;i++)
			cin>>lixi[i].first>>lixi[i].second;
		freopen(("key"+toString(cas)+".out").c_str(),"w",stdout);
		sort(lixi,lixi+n,cmd);
		int k=1,sum=0;
		for(int i=0;i<n&&k;i++){
			k--;
			sum+=lixi[i].first;
			k+=lixi[i].second;
		}
		cout<<sum<<endl;                     
	}
}
/*
5
0 0
2 0
2 0
3 0
5 1
*/
