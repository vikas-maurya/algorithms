#include "graph.h"
#include <queue>
#include <stack> 

graph::graph(int nv) : nvertices(nv), edges(nv, std::vector<int>(0)), nedges(0), directed(false), degree(nv, 0) {}

graph::~graph() {}

void graph::read_graph(int a, int b) {
  edges[a].push_back(b);
  edges[b].push_back(a);
}

void graph::bfs() {
  std::queue<int> q;
  q.push(0);
  std::vector<bool> visited(nvertices, false);
  visited[0]=true;
  while(q.empty() == false) {
    int v = q.front();
    q.pop();
    std::cout<<v<<"->";
    for(int i=0;i<edges[v].size();i++) {
      if(!visited[edges[v][i]]) {
        visited[edges[v][i]]=true;
        q.push(edges[v][i]);
      }
    }
  }
  std::cout<<"end";
}

void graph::dfs() {
  std::stack<int> s;
  s.push(0);
  std::vector<bool> visited(nvertices, false);
  visited[0] = true;
  while(s.empty() == false) {
    int v = s.top();
    s.pop();
    std::cout<<v<<"->";
    for(int i=0;i<edges[v].size();i++) {
      if(!visited[edges[v][i]]) {
        visited[edges[v][i]] = true;
        s.push(edges[v][i]);
      }
    }
  }
  std::cout<<"end";
}
