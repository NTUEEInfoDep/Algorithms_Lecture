#include <iostream>
#include <queue>

using namespace std;

int main(){
    int n;
    int t = 0;
    while(cin >> n && n){
        queue<int>deck;
        for(int i = 1; i <= n; ++i) deck.push(i);
        cout << "Discarded cards:";
        int i = 0;
        while(deck.size() != 1){
            if(i++) cout << ",";
            cout << " ";
            cout << deck.front(); deck.pop();
            deck.push(deck.front()); deck.pop();
        }
        cout << '\n';
        cout << "Remaining card: " << deck.front() << '\n';
    }
    return 0;
}