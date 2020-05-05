#include "graph.h"

int main() {
  graph G(9);
  G.read_graph(0, 3);
  G.read_graph(0, 2);
  G.read_graph(0, 1);
  G.read_graph(1, 4);
  G.read_graph(2, 7);
  G.read_graph(2, 8);
  G.read_graph(3, 6);
  G.read_graph(4, 5);

  G.bfs();
  std::cout<<std::endl;
  G.dfs();
}
