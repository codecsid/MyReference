/* Platform - Codeforces
* Username - rootn
* ProblemName or Id -
*/

#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
typedef long long ll;
typedef vector<int> vi;



class Graph
{
   int V;
  list<AdjListNode> *adj;
}

class AdjListNode
{
  int v;
    int weight;
public:
    AdjListNode(int v, int w) {this->v = v; weight = w;}
}
void Graph::addEdge(int u, int v, int w)
{
    AdjListNode node(v, w);
    adj[u].push_back(node);
}
};

int main(void)
{

}
