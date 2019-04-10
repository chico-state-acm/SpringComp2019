#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

struct edge {
    int from, to;
    int flow, cap;
    edge* rev;
};

int main() {
    int num_nodes, num_weeks;
    cin >> num_nodes >> num_weeks;

    vector<vector<int>> per_week_weights(num_nodes, vector<int>(num_nodes, 0));
    for (auto& from : per_week_weights) {
        for (int& to : from) {
            cin >> to;
        }
    }

    // give nodes infinite "storage" (ability to keep data until next week)
    for (int i = 0; i < num_nodes; ++i) {
        per_week_weights[i][i] = INT_MAX;
    }

    // adjacency list representation of nodes over time
    int time_nodes = num_nodes * (num_weeks + 1);
    vector<vector<edge*>> residual(time_nodes);

    for (int week = 0; week < num_weeks; ++week) {
        for (int from = num_nodes * week; from < num_nodes * (week + 1); ++from) {
            for (int to = num_nodes * (week + 1); to < num_nodes * (week + 2); ++to) {
                int cap = per_week_weights[from % num_nodes][to % num_nodes];
                edge* fwd = new edge { from, to, 0, cap, nullptr };
                edge* back = new edge { to, from, cap, cap, fwd };
                fwd->rev = back;
                residual[from].push_back(fwd);
                residual[to].push_back(back);
            }
        }
    }

    // Edmonds-Karp : O(VE^2)
    int source = num_nodes - 1;  // last node, first week
    int sink = num_weeks * num_nodes;  // first node, end of last week
    int total_flow = 0;
    while (true) {
        // BFS to find shortest augmenting path
        queue<int> q;
        q.push(source);

        vector<edge*> parents(time_nodes, nullptr);
        while (!q.empty()) {
            int cur = q.front();
            q.pop();

            for (edge* e : residual[cur]) {
                int to = e->to;
                if (to != source && !parents[to] && e->cap > e->flow) {
                    parents[to] = e;
                    q.push(to);
                }
            }
        }

        // break if no augmenting path
        if (!parents[sink]) {
            break;
        }

        // perform augmentation
        int flow = INT_MAX;
        for (edge* e = parents[sink]; e; e = parents[e->from]) {
            flow = min(flow, e->cap - e->flow);
        }
        for (edge* e = parents[sink]; e; e = parents[e->from]) {
            e->flow += flow;
            e->rev->flow -= flow;
        }
        total_flow += flow;
    }

    cout << total_flow << endl;
}
