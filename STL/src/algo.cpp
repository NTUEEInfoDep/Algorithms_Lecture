#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s = "aabbc";
    cout << "All permutations of string " << s << '\n';
    do{
        cout << s << '\n';
    } while(next_permutation(s.begin(), s.end()));

    return 0;
}