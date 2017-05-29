#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int u, int v);
    void dfsinit();
    void dfsrec(bool* visited, int s);
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

void Graph::dfsrec(bool* visited, int s)
{
    visited[s] = true;
    cout << s << " ";
    list<int>::iterator i;
    for(i = adj[s].begin();i != adj[s].end();i++)
    {
        if(!visited[*i]) dfsrec(visited, *i);
    }
}
void Graph::dfsinit()
{
    bool *visited = new bool[V];
    memset(visited, 0, sizeof(*visited));
    dfsrec(visited, 1);
}

int main(void)
{
    int n; cin >> n;
    Graph g(n);
    for(int i = 0;i < n;++i)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    g.dfsinit();
    cout << endl;
}
