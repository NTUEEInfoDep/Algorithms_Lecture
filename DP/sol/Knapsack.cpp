#include <iostream>
#include <vector>

using namespace std;

void get_input(vector<int>&w, vector<int>&v){
    int n, p, q;
    cout << "Enter number of goods: "; cin >> n;
    cout << "Enter weight and values: \n";
    for(int i = 0; i < n; ++i){
        cout << "Item " << i + 1 << ": "; cin >> p >> q;
        w.push_back(p);
        v.push_back(q);
    }
    return;
}

int knapsack(const vector<int>&w, const vector<int>&v, int W){
    int len = 0;
    int n = w.size();
    vector<int>c(W + 1, 0);
    for(int i = 0; i < n; ++i)
        for(int j = W; j >= w[i]; --j)
            c[j] = max(c[j], c[j - w[i]] + v[i]);
    return c[W];
}

int main(){
    int W;
    cout << "Enter maximum weights: "; cin >> W;
    vector<int>weights, values;
    get_input(weights, values);
    cout << "Maximum value of goods: " << knapsack(weights, values, W) << '\n';
    return 0;
}