#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int u, int v);
    void dfs(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}

void Graph::dfs(int start)
{
    bool visited[V];
    memset(visited, 0, sizeof(visited));
    stack<int> s;
    s.push(start);
    visited[start] = true;
    list<int>::iterator i;
    while(!s.empty())
    {
        start = s.top();s.pop();
        visited[start] = true;
        cout<< start << " ";
        for(i = adj[start].begin();i != adj[start].end();++i)
            if(!visited[*i])
            {
                visited[*i] = true;
                s.push(*i);
            }
    }
}

int main(void)
{
    int n; cin >> n;
    Graph g(n);
    for(int i= 0;i < n;++i)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    g.dfs(1);
    cout << endl;
}
