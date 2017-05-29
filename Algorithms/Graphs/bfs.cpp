#include <bits/stdc++.h>
using namespace std;

/*
 * Graph Declaration for Nodes edges containing weights also.
 * class Graph
 *  {
 *      int V;
 *      list<AdjListNode> *adj;
 *  }
 *
 *  class AdjListNode
 *  {
 *      int v;
        int weight;
    public:
        AdjListNode(int v, int w) {this->v = v; weight = w;}
 *  }
 *  void Graph::addEdge(int u, int v, int w)
    {
        AdjListNode node(v, w);
        adj[u].push_back(node);
}
 */

class Graph
{
    int V;
    list<int> *adj;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void bfs(int s);
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

void Graph::bfs(int s)
{
    vector<bool> visited(V, false);
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while(!q.empty())
    {
        s = q.front();q.pop();
        cout<< s <<" ";

        for(auto i = adj[s].begin();i != adj[s].end();++i)
            if(!visited[*i])
            {
                visited[*i] = true;
                q.push(*i);
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
    g.bfs(1);
    cout << endl;
}
