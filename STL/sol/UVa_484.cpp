#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    vector<int>num;
    map<int, int>freq;
    int n;

    while(cin >> n){
        if(!freq.count(n)){
            freq[n] = 1;
            num.push_back(n);
        }
        else freq[n]++;
    }
    
    for(auto n : num) cout << n << ' ' << freq[n] << '\n';
    return 0;
}