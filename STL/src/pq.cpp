#include <iostream>
#include <queue>

using namespace std;

// Custom comparator
class MyCompare{
public:
    bool operator()(int a, int b){
        return a < b; // MAX heap (for MIN heap: return a > b)
    }
};

int main() {
    priority_queue<int, vector<int>, MyCompare> pq;
    int num[5] = {23, 4, 1, 100, 7};
    for(int i = 0; i < 5; ++i)
        pq.push(num[i]);
    while(!pq.empty()){
        cout << pq.top() << ' ';
        pq.pop();
    }
    return 0;
}