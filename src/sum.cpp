#include "sum.h"
#include <numeric>

double sum(const std::vector<double>& values) {
    return std::accumulate(values.begin(), values.end(), 0.0);
}