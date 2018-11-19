#include <iostream>
#include <cstring>
using namespace std;

int g[25][25]; // The graph
int visit[25][25]; // Table indicating whether the edge is visited or not
int max_src_len; // Max length from a given source
int n; // Number of nodes

bool all_visited(int j){
    // Check if all edges connected to a given node j is visited.
    for(int i = 0; i < n; ++i)
        if(g[i][j] && !visit[i][j])
            return false;
    return true;
}

void find_max_from_src(int j, int len){
    if(all_visited(j)) {
        if(len > max_src_len) max_src_len = len; // Update maximum length from a source
        return;
    }
    for(int i = 0; i < n; ++i){
        if(g[i][j] && !visit[i][j]){ // Find unvisited edges, backtrack
            visit[i][j] = visit[j][i] = 1;
            find_max_from_src(i, len + 1);
            visit[i][j] = visit[j][i] = 0;
        }
    }
    return;
}

int main() {
    int m, i, j;
    int max_total_len;
    while(cin >> n >> m && m && n){
        memset(g, 0, sizeof(g));
        memset(visit, 0, sizeof(visit));
        max_total_len = 0;
        while(m--){
            cin >> i >> j;
            g[i][j] = g[j][i] = 1;
        }
        for(int i = 0; i < n; ++i) {
            max_src_len = 0;
            find_max_from_src(i, 0);
            if(max_src_len > max_total_len) max_total_len = max_src_len;
        }
        cout << max_total_len << '\n';
    }
    return 0;
}