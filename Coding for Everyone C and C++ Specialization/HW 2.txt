#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#include <cstdlib>
#include <ctime>
#include <cmath>

const double INF = std::numeric_limits<double>::infinity();

class Edge {
public:
    int src, dest;
    double weight;

    Edge(int s, int d, double w) : src(s), dest(d), weight(w) {}
};

class Graph {
private:
    int numVertices;
    std::vector<std::vector<Edge>> adjList;

public:
    Graph(int vertices) : numVertices(vertices) {
        adjList.resize(vertices);
    }

    void addEdge(int src, int dest, double weight) {
        adjList[src].emplace_back(src, dest, weight);
        adjList[dest].emplace_back(dest, src, weight); // Undirected graph
    }

    std::vector<double> dijkstra(int start) {
        std::vector<double> dist(numVertices, INF);
        dist[start] = 0;

        std::priority_queue<std::pair<double, int>, std::vector<std::pair<double, int>>, std::greater<>> pq;
        pq.push({0, start});

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (const auto &edge : adjList[u]) {
                int v = edge.dest;
                double weight = edge.weight;

                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist;
    }

    static Graph generateRandomGraph(int vertices, double density, double minDist, double maxDist) {
        Graph g(vertices);
        srand(time(nullptr));

        for (int i = 0; i < vertices; ++i) {
            for (int j = i + 1; j < vertices; ++j) {
                if ((rand() / double(RAND_MAX)) < density) {
                    double weight = minDist + (rand() / double(RAND_MAX)) * (maxDist - minDist);
                    g.addEdge(i, j, weight);
                }
            }
        }

        return g;
    }

    double averageShortestPath(int start) {
        std::vector<double> dist = dijkstra(start);
        double totalDist = 0;
        int count = 0;

        for (int i = 0; i < numVertices; ++i) {
            if (i != start && dist[i] != INF) {
                totalDist += dist[i];
                ++count;
            }
        }

        return (count > 0) ? totalDist / count : INF;
    }
};

int main() {
    int vertices = 50;
    double minDist = 1.0;
    double maxDist = 10.0;
    double densities[] = {0.2, 0.4};

    for (double density : densities) {
        Graph g = Graph::generateRandomGraph(vertices, density, minDist, maxDist);
        double totalAveragePathLength = 0;
        int startVertex = 0;

        for (int i = 1; i < vertices; ++i) {
            totalAveragePathLength += g.averageShortestPath(startVertex);
        }

        double averagePathLength = totalAveragePathLength / (vertices - 1);
        std::cout << "Density: " << density * 100 << "%, Average Shortest Path Length: " << averagePathLength << std::endl;
    }

    return 0;
}
