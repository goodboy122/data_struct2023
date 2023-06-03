#include <iostream>
#include <string>
using namespace std;
class Graph {
private:
	int node;
	int** graph;
public:
	Graph(int node_count);
	void connect_node(int start, int end);
	int find_path(int start_node, int end_node);
};