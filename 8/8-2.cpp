//
// Created by dell on 2022/7/15.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A = {2,1,6,8,4,3};
    vector<int> B(A.size(), 0);
    vector<int> C(*max_element(A.begin(), A.end()) + 1, 0);
    for (const auto &a: A) {
        C[a] += 1;
    }
    for (auto it = C.begin() + 1; it != C.end(); ++it) {
        *it += *(it - 1);
    }
    // 此处用r_iterator更好, 可以逆向扫描, 不逆向不稳定
//    for (auto it = A.cbegin(); it != A.cend(); ++it) {
//        B[C[*it] - 1] = *it;
//        C[*it] -= 1;
//    }
    vector<int>D(*max_element(A.begin(), A.end()) + 1, 0);
    for (decltype(C.size()) i = 0; i < C.size()-1; ++i) {
        D[i+1] = C[i];
    }

    for (decltype(A.size()) i = 0; i < A.size(); ++i){
        while (C[A[i]] == )
    }


//    auto value = A[0];
//    for (decltype(A.size()) count = 0; count < A.size(); ++count){
//        auto index = C[value] - 1;
//        C[value] -= 1;
//        auto tem_val = value;
//        value = A[index];
//        A[index] = tem_val;
//    }


    return 0;
}

