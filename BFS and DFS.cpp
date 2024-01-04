#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

//For the edges
void edge(vector<int> adj[], int u, int v) {
	adj[u].push_back(v);
}

//For BFS
void BFS(int s, vector<int>adj[], bool visit[]) {
	queue<int> Q;
	Q.push(s);
	visit[s] = true;
	while (!Q.empty()) {
		int R = Q.front();
		cout << R << " ";
		Q.pop();
		for (int i = 0; i < adj[R].size(); i++) {
			if (!visit[adj[R][i]]) {
				Q.push(adj[R][i]);
				visit[adj[R][i]] = true;
			}
		}
	}

}

//DFS
void DFS(int s, vector<int>adj[], bool visit[]) {
	stack<int>S1;
	S1.push(s);
	visit[s] = true;
	while (!S1.empty()) {
		int S = S1.top();
		cout << S << " ";
		S1.pop();
		for (int i = 0; i < adj[S].size(); i++) {
			if (!visit[adj[S][i]]) {
				S1.push(adj[S][i]);
				visit[adj[S][i]] = true;
			}
		}
	}
}
int main() {
	vector<int> adj[5];
	bool visit[5];

	for (int i = 0; i < 5; i++) {
		visit[i] = false;
	}
	edge(adj, 0, 2);
	edge(adj, 0, 1);
	edge(adj, 1, 3);
	edge(adj, 2, 0);
	edge(adj, 2, 3);
	edge(adj, 2, 4);

	BFS(0, adj, visit);
	cout << endl;
	for (int i = 0; i < 5; i++) {
		visit[i] = false;
	}
	DFS(0, adj, visit);
	return 0;
}
