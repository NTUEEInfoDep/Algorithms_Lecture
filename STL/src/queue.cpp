#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int>s;
    for(int i = 0; i < 10; ++i)
        s.push(i);
    while(!s.empty()){
        cout << s.front() << ' ';
        s.pop();
    }
    cout << '\n';
    return 0;
}