#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

void dijkstra(int start, vector<pair<int, int> > &graph, vector<int> &dist) {
    priority_queue<pair<int, int> >; vector<pair<int, int> greater> >; pq;
    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int currDist = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (currDist > dist[u]) continue;

        for (auto &edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    int V = 7; // jumlah simpul (1 sampai 6, indeks 0 tidak digunakan)
    vector<vector<pair<int, int>>> graph(V);

    // Menambahkan edge sesuai gambar
    graph[1].push_back({2, 7});
    graph[1].push_back({3, 9});
    graph[1].push_back({6, 14});
    graph[2].push_back({3, 10});
    graph[2].push_back({4, 15});
    graph[3].push_back({4, 11});
    graph[3].push_back({6, 2});
    graph[4].push_back({5, 6});
    graph[5].push_back({6, 9});

    // Menambahkan edge dua arah (graf tidak terarah)
    graph[2].push_back({1, 7});
    graph[3].push_back({1, 9});
    graph[6].push_back({1, 14});
    graph[3].push_back({2, 10});
    graph[4].push_back({2, 15});
    graph[4].push_back({3, 11});
    graph[6].push_back({3, 2});
    graph[5].push_back({4, 6});
    graph[6].push_back({5, 9});

    vector<int> dist(V, INF);
    dijkstra(1, graph, dist);

    cout << "Jarak terpendek dari node 1 ke node 5 adalah " << dist[5] << endl;

    return 0;
}
