#include <iostream>
#include <fstream>

int main() {
    double k, money, want, need, diff;
    std::cin >> k >> money >> want;

    need = k*(1.0 + want)*want/2.0;
    diff = need - money;

    if (money < need) {
        std::cout << diff << std::endl;
    }
    else {
        std::cout << 0 << std::endl;
    }
    return 0;
}
