#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int main() {
    ifstream fin("input.in");
    int levels, x, y;
    set<int> pass;
    fin >> levels >> x;
    
    int curr;
    for (int k = 0; k < x; k++) {
        fin >> curr;
        pass.insert(curr);
    }

    fin >> y;
    for (int k = 0; k < y; k++) {
        fin >> curr;
        pass.insert(curr);
    }
    
    if ((int)pass.size() == levels) {
        cout << "I become the guy.\n";
    }
    else {
        cout <<  "Oh, my keyboard!\n";
    }
    return 0;
}
