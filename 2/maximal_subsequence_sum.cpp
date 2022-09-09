#include <iostream>
#include <vector>

using namespace std;

int Solutions1(const vector<int> &a) {
    // 1如果a为空的  以及a为全负的还未考虑这些情况
    // 2正常情况
    auto left_index = 0;
    auto right_index = 0;
    int max_value = a[0];
    int tem_max_value = a[0];
    for (auto i = 0; i != a.size(); ++i){
        tem_max_value = max_value+a[right_index];
        if (tem_max_value < max_value)

    }

}


int main() {
    vector<int> a = {-2, 11, -4, 13, -5, -2};
    return 0;
}