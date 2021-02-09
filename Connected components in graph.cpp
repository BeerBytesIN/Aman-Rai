#include<bits/stdc++.h>
using namespace std;
vector<int>v1[15];
vector<bool>vis(15,false);
void dfs(int i)
{
	vis[i]=true;
	int j;
	for(j=0;j<v1[i].size();j++)
	{
		if(vis[v1[i][j]]==false)
		dfs(v1[i][j]);
	}
}
int main()
{
	int n,e;
	cin>>n>>e;
	int i;
	for(i=1;i<=e;i++)
	{
		int x,y;
		cin>>x>>y;
		v1[x].push_back(y);
		v1[y].push_back(x);
	}
	int cnt=0;
	for(i=1;i<=n;i++)
	{
		if(vis[i]==false)
		{
			cnt++;
			dfs(i);
		}
	}
	cout<<cnt;

}