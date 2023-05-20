#include <iostream>
#include <vector>
#include <queue>

const int MAX_DATA_SIZE = 1000;
std::vector<int> graph[MAX_DATA_SIZE];
bool visited[MAX_DATA_SIZE];

void dfs(int x) {
    visited[x] = true;
    for (int y : graph[x]) {
        if (!visited[y]) {
            dfs(y);
        }
    }
}

int main() {
    int node_count;
    std::cin >> node_count;

    //Build Graph
    for (int k = 0; k < node_count; k++) {
        int xk, yk;
        std::cin >> xk >> yk;

        for (int i = 0; i < k; i++) {
            int xi, yi;
            std::cin >> xi >> yi;

            if (xk == xi || yk == yi) {
                graph[k].push_back(i);
                graph[i].push_back(k);
            }
        }
    }

    int components = 0;
    for (int k = 0; k < node_count; k++) {
        if (!visited[k]) {
            dfs(k);
            components++;
        }
    }

    std::cout << std::max(components-1, 0) << std::endl;
    return 0;
}
