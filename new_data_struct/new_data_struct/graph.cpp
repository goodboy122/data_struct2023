#include <iostream>
#include "graph.h"
Graph::Graph(int node_count) {
	int temp;
	this->node = node_count;
	graph = new int*[node];
	for (int i = 0; i < node; i++) {
		graph[i] = new int[node];
	}
	for (int i = 0; i < node; i++) {
		for (int j = 0; j < node; j++) {
			graph[i][j] = 0;
		}
	}
}
void Graph::connect_node(int start, int end) {
	if (start == end) {
		cout << "start and end point is same!!" << endl;
	}
	else {
		graph[start - 1][end - 1] = 1;
		graph[end - 1][start - 1] = 1;

	}
}

//int Graph::find_path(int start_node, int end_node) {
//}