#include <iostream>
#include <vector>
#include "sum.h"

int main() {
    std::vector<double> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    double result = sum(values);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}