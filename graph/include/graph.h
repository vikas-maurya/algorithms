#include<iostream>
#include<vector>
#include<string>

class graph {
public:
  graph(int nvertices);
  ~graph();
  void read_graph(int a, int b);
  void bfs();
  void dfs();

private:
  int nvertices;
std::vector<std::vector<int>> edges; 
  int nedges;
  bool directed;
  std::vector<int> degree;
};
