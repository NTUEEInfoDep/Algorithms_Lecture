#include <iostream>
#include <vector>

using namespace std;

void get_input(vector<int>&v){
    int n, t;
    cout << "Enter sequence length: "; cin >> n;
    cout << "Enter sequence: ";
    while(n--){
        cin >> t;
        v.push_back(t);
    }
    return;
}

int LIS(const vector<int>& v){
    int len = 0;
    return len;
}

int main(){
    vector<int>num;
    get_input(num);
    cout << "Length of LIS: " << LIS(num) << '\n';
    return 0;
}