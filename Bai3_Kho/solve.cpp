#include<bits/stdc++.h>
using namespace std;
#define int long long
#undef int
int main(){
	#define int long long
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int S;
	cin>>S;
	bool L[n+1][S+1];
	memset(L,0,sizeof L);
	L[0][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=a[i];j<=S;j++){
			L[i][j]=L[i-1][j];
			if(L[i-1][j-a[i]])
				L[i][j]=1;
		}
	}
	cout<<(L[n-1][S]?"YES":"NO");
}
/*
5
1 2 3 4 5
16
*/
