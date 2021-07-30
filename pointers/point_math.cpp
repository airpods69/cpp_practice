#include <iostream>
const int MAX = 3;

int main() {
    int var[MAX] = {10,100,200}, *ptr;

    ptr = var;

    for (int i=0; i < MAX ; i++ , ptr++) { 
        //incremeants i and the pointer
        std::cout << *ptr << "\n";
    }

    return 0;
}