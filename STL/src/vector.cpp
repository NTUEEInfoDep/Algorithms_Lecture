#include<iostream>
#include<vector>


using namespace std;

int main(){
    vector<int>arr;

    for(int i = 0; i < 10; ++i)
        arr.push_back(i);
    
    cout << arr[10] << '\n';

    return 0;
}
