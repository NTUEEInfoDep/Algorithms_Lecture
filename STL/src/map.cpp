#include <iostream>
#include <map>

using namespace std;

int main() {
    map<char, int> ascii;

    ascii['a'] = 61;
    ascii['b'] = 62;
    ascii['c'] = 63;

    cout << ascii.count('a') << '\n';
    cout << ascii.count('d') << '\n';
    
    return 0;
}