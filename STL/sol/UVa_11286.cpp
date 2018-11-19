#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        map<vector<int>, int>pop;
        while(n--){
            vector<int>f(5, 0);
            for(int i = 0; i < 5; ++i) cin >> f[i];
            sort(f.begin(), f.end());
            if(pop.count(f)) pop[f]++;
            else pop[f] = 1;
        }
        int _max = 0, tot = 0;
        for(auto f: pop) _max = max(_max, f.second);
        for(auto f: pop) 
            if(f.second == _max) tot += _max;
        cout << tot << '\n';
    }
    return 0;
}