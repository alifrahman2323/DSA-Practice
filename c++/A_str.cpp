#include <bits/stdc++.h>
using namespace std;

struct Node {
    int v, g, f;
    bool operator<(const Node &other) const {
        return f > other.f; // min-heap
    }
};

int heuristic(int u, int goal) {
    return abs(goal - u); // simple heuristic (example)
}

int aStar(int start, int goal, vector<vector<pair<int,int>>> &graph) {
    priority_queue<Node> pq;
    vector<int> dist(graph.size(), INT_MAX);

    pq.push({start, 0, heuristic(start, goal)});
    dist[start] = 0;

    while(!pq.empty()) {
        Node current = pq.top();
        pq.pop();

        int u = current.v;

        if(u == goal)
            return current.g;

        for(auto edge : graph[u]) {
            int v = edge.first;
            int cost = edge.second;

            int new_g = current.g + cost;

            if(new_g < dist[v]) {
                dist[v] = new_g;
                int f = new_g + heuristic(v, goal);
                pq.push({v, new_g, f});
            }
        }
    }

    return -1; // no path
}

int main() {
    int n = 5;
    vector<vector<pair<int,int>>> graph(n);

    // Example graph (u -> v, cost)
    graph[0].push_back({1, 2});
    graph[0].push_back({2, 4});
    graph[1].push_back({3, 7});
    graph[2].push_back({3, 1});
    graph[3].push_back({4, 3});

    int start = 0, goal = 4;

    int result = aStar(start, goal, graph);

    cout << "Shortest Path Cost: " << result << endl;

    return 0;
}