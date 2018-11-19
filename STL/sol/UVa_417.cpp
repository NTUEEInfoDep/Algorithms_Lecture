#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <string>

using namespace std;

map<string, int>table;

void make_table(){
    priority_queue<string, vector<string>, greater<string> >pq1;
    priority_queue<string, vector<string>, greater<string> >pq2;
    for(int i = 0; i < 26; ++i) pq1.push(string(1, 'a' + i));
    int index = 1;
    for(int i = 0; i < 5; ++i) {
        while(!pq1.empty()){
            string top = pq1.top(); pq1.pop();
            table[top] = index++;
            int last = top[top.size() - 1] - 'a';
            for(int j = last + 1; j < 26; ++j){
                pq2.push(top + string(1, 'a' + j));
            }
        }
        while(!pq2.empty()){
            pq1.push(pq2.top());
            pq2.pop();
        }
    }
    return;
}

int main(){
    make_table();
    string s;
    while(getline(cin, s))
        cout << (table.count(s) ? table[s] : 0) << '\n';
    return 0;
}