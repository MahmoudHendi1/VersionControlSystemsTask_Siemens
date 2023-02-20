#include <iostream>
#include "vector"

long long getSum(const std::vector<int>& vec){
    long long sum = 0;
    for(auto element : vec){
        sum += element;
    }
    return sum;
}
int main() {
    std::vector<int> vec{1,2,3,4,5,6,7,8,9,10};
    std::cout << "Sum: " << getSum(vec) << std::endl;
    return 0;
}
