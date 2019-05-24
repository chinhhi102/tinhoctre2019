#include<bits/stdc++.h>
using namespace std;
#define int long long
int dx[]={0,0,1,1};
int dy[]={0,1,1,0};
#undef int
int main(){
	#define int long long
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m,d=0;
	cin>>n>>m;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n-1;i++)
		for(int j=0;j<m-1;j++){
			bool no=true;
			for(int k=0;k<4;k++)
				if(s[i+dx[k]][j+dy[k]]!='.'){
					no=false;
					break;
				}
			if(no)
				d++;
		}
	cout<<d<<endl;
}
/*
6 6
......
.*....
......
......
......
......
*/
