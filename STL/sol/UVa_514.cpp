#include <iostream>
#include <stack>
#include <queue>

using namespace std;

bool can_reorder(queue<int>after){
    stack<int>s;
    int n = after.size();
    for(int i = 1; i <= n; ++i){
        s.push(i); // Train segment goes in stack one by one.
        while(!s.empty() && s.top() == after.front()){
            after.pop(); s.pop();
        }
    }
    return s.empty();
}

int main(){
    int n;
    while(cin >> n && n){
        while(1){
            queue<int>after; // Model the train as a queue.
            int t;
            cin >> t; after.push(t);
            if(!t) break;
            for(int i = 1; i < n; ++i) {
                cin >> t;
                after.push(t);
            }
            cout << ((can_reorder(after)) ? "Yes\n" : "No\n");
        }
        cout << '\n';
    }
    return 0;
}