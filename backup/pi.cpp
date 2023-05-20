#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main() {
    srand(time(0)); // generates random seed based on the current time

    std::cout << "How many points to generate?\n";
    double loop;
    std::cin >> loop;
    std::cout << loop << "\n";

    double pi_count = 0;
    double x;
    double y;
    for (int k = 0; k < loop; k++) {
        x = static_cast<double>(rand()) / RAND_MAX;
        y = static_cast<double>(rand()) / RAND_MAX;
        if (sqrt(x*x + y*y) <= 1) {
            pi_count++;
        }
    }
    
    std::cout << "Estimated PI value: " << 4.0 * pi_count / loop << "\n";
}
