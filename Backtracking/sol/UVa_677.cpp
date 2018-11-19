#include <iostream>
#include <vector>

using namespace std;

int nodes, n, dummy;
vector<vector<int> >G;
vector<int>visited;
vector<vector<int> >paths;

void find_path(int src, int len, vector<int>p){
    if(len == n){
        paths.push_back(p);
        return;
    }
    for(int i = 0; i < nodes; ++i){
        if(G[i][src] && !visited[i]){
            p.push_back(i); visited[i] = 1;
            find_path(i, len + 1, p);
            p.pop_back(); visited[i] = 0;
        }
    }
    return;
}
int main(){
    int i = 0;
    while(cin >> nodes >> n){
        if(i++) cout << '\n';
        G = vector<vector<int> >(nodes, vector<int>(nodes, 0));
        visited = vector<int>(nodes, 0);
        for(int i = 0; i < nodes; ++i)
            for(int j = 0; j < nodes; ++j)
                cin >> G[i][j];
        cin >> dummy; // get -9999
        paths.clear();
        visited[0] = 1;
        find_path(0, 0, vector<int>(1,0));
        if(paths.empty()) cout << "no walk of length " << n << "\n";
        else{
            for(auto p: paths){
                cout << '(';
                for(int i = 0; i < p.size(); ++i){
                    if(i) cout << ',';
                    cout << p[i] + 1;
                }
                cout << ")\n";
            }
        }
    }
    return 0;
}