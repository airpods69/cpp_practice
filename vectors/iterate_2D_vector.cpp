#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> mat1;

    int rows, cols, elem;
    cin >> rows;
    cin >> cols;

//    for (auto elements : mat1) {
//        for (auto i : elements)
//            cin >> i;
//    }

    for (int i = 0 ; i < rows ; i++) {
        vector<int> cols_elem;

        for (int j = 0 ; j < cols ; j++) {
            cin >> elem;
            cols_elem.push_back(elem);
        }

        mat1.push_back(cols_elem);
    }
}
