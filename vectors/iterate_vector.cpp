#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> g1;
    int m;

    for (int i = 1 ; i <= 5 ; i++) {
        cin >> m;
        g1.push_back(m);
    }

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end() ; ++i)
        cout << *i << " ";
}
