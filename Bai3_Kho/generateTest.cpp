#include<bits/stdc++.h>
using namespace std;
#define int long long
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
	for(int cas=10;cas<20;cas++){
		vector<string> res;
		freopen(("key"+toString(cas)+".in").c_str(),"w",stdout);
		int to=rand()%7+2;
		int mo=cas?cas*10:5;
		cout<<to<<endl;
		while(to--){
			int d=0,sum=0;
			int no=rand()%(100)+(cas+1)%10*100;
			cout<<no<<endl;
			for(int i=0;i<no;i++){
				int x=rand()%(mo*50)+1;
				if(d==4&&rand()%2&&sum+x<1000)
					sum+=x;
				d=(d+1)%5;
				cout<<x<<' ';
			}
			cout<<endl;
			int ko=rand()%(cas?cas*50:5)+1;
			cout<<(rand()%2?sum:ko)<<endl;
		}
		
		freopen(("key"+toString(cas)+".in").c_str(),"r",stdin);
		int T;
		cin>>T;
		while(T--){
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
				for(int j=0;j<=S;j++){
					L[i][j]=L[i-1][j];
					if(j>=a[i]&&L[i-1][j-a[i]])
						L[i][j]=1;
				}
			}
			res.push_back((L[n-1][S]?"YES":"NO"));
		}
		freopen(("key"+toString(cas)+".out").c_str(),"w",stdout);
		for(int i=0;i<res.size();i++){
			cout<<res[i]<<endl;
		}
	}
}
/*
5
1 2 3 4 5
16
*/
