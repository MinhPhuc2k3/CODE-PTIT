#include <bits/stdc++.h>
using namespace std;

int n, m;
int g[502][502], visited[502][502];

typedef struct diem
{
	int x, y, point;
}diem;

struct cmp
{
	bool operator()(diem const &a, diem const &b)
	{
		return a.point>b.point;
	}
};

pair<int, int>  x[4] = {{1,0},{-1,0},{0,1},{0,-1}};

int BFS()
{
	diem u;
	priority_queue<diem,vector<diem>,cmp> q;
	u.x = 1;
	u.y = 1;
	u.point = g[1][1];
	q.push(u);
	while(!q.empty())
	{
		diem tmp = q.top();
		q.pop();
		for(int i=0; i<4; i++)
		{
			diem des;
			des.x = tmp.x + x[i].first;
			des.y = tmp.y + x[i].second;
			des.point = tmp.point + g[des.x][des.y];
			if(des.x == n && des.y == m)
				return des.point;
			if(des.x<=n&&des.x>0&&des.y<=m&&des.y>0&&!visited[des.x][des.y])
			q.push(des);
			visited[tmp.x][tmp.y] = 1;
		}
	}
	return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		memset(visited,0,sizeof(visited));
		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++) cin>>g[i][j];
		cout << BFS() << endl;
	}
}