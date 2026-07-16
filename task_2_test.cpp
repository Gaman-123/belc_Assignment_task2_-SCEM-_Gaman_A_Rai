#include <iostream>
#include <cassert>
#include "task_2.cpp"

using namespace std;

int main() {

    assert(getCrease(1, 1) == "Valley");

    assert(getCrease(2, 1) == "Valley");
    assert(getCrease(2, 2) == "Valley");
    assert(getCrease(2, 3) == "Mountain");

    assert(getCrease(4, 11) == "Mountain");

    // Assignment test cases
    assert(getCrease(1, 1)   == "Valley");
    assert(getCrease(3, 6)   == "Mountain");
    assert(getCrease(5, 16)  == "Valley");
    assert(getCrease(8, 255) == "Mountain");

    cout << "All test cases passed!" << endl;

    return 0;
}