#include <bits/stdc++.h>
using namespace std;

struct toaDo{
	int z, x, y;
};

int A, B, C;
char maze[35][35][35];
toaDo start, finish;

int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

void input(){
	cin >> A >> B >> C;
	for(int i = 1; i <= A; i++){
		for(int j = 1; j <= B; j++){
			for(int k = 1; k <= C; k++){
				cin >> maze[i][j][k];
				if(maze[i][j][k] == 'S'){
					start.x = j;
					start.y = k;
					start.z = i;
				}
				if(maze[i][j][k] == 'E'){
					finish.x = j;
					finish.y = k;
					finish.z = i;
					maze[i][j][k] = '.';
				}
			}
		}
	}
}

void bfs(int i, int j, int k){  //i la cao, j la rong, k la dai
	queue<pair<toaDo,int>> q;
	q.push({toaDo{i,j,k}, 0});
	maze[i][j][k] = '#';
	while(!q.empty()){
		toaDo td = q.front().first;  
		int step = q.front().second;
		q.pop();
		if(td.x == finish.x && td.y == finish.y && td.z == finish.z){
			cout << step << endl;
			return;
		}
		for(int idx = 0; idx < 6; idx++){
			int i1 = td.z + dz[idx];
			int j1 = td.x + dx[idx];
			int k1 = td.y + dy[idx];
			if(i1 >= 1 && i1 <= A && j1 >= 1 && j1 <= B && k1 >= 1 && k1 <= C && maze[i1][j1][k1] == '.'){
				maze[i1][j1][k1] = '#';
				q.push({toaDo{i1,j1,k1}, step + 1});
			}
		}
	}
	cout << "-1\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		input();
		bfs(start.z, start.x, start.y);
	}
	return 0;
}

