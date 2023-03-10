#include <iostream>
#include "vector"

long long getSum(const std::vector<int> &vec) {
    long long sum = 0;
    for (auto element: vec) {
        sum += element;
    }
    return sum;
}

double getAverage(const std::vector<int> &vec) {
    if (vec.empty())return 0;
    long long sum = getSum(vec);
    return (double) sum / vec.size();
}

int getMin(const std::vector<int> &vec) {
    int min = INT32_MAX;
    for (auto element: vec) {
        if (element < min) {
            min = element;
        }
    }
    return min;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Sum: " << getSum(vec) << std::endl;
    std::cout << "Average: " << getAverage(vec) << std::endl;
    std::cout << "Minimum: " << getMin(vec) << std::endl;
    return 0;
}
