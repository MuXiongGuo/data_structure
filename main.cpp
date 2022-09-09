#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ivec = {1,2};
    int a = 9;
    ivec.push_back(a);
    cout << ivec.data();
    auto oa = ivec.data();
    return 0;
}
