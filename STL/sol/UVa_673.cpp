#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool is_valid(const string& exp){
    if(exp.empty()) return true;
    stack<char>s;

    for(int i = 0; i < exp.size(); ++i){
        if(exp[i] == '(' || exp[i] == '[') s.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == ']'){
            if(s.empty()) return false;
            if((s.top() == '(' && exp[i] == ')')||(s.top() == '[' && exp[i] == ']')) s.pop();
            else return false;
        }
    }
    if(!s.empty()) return false;
    return true;
}

int main() {
    int n;
    string exp;
    cin >> n; cin.get();
    while(n--){
        getline(cin, exp);
        cout << exp << '\n';
        cout << (is_valid(exp) ? "Yes\n" : "No\n");
    }
    return 0;
}
