#include<iostream>

int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    
    long n;
    std::cin>> n;

    long long expected_sum = (n * (n + 1)) / 2;
    long long currentSum = 0;

    for(int i = 0; i < n - 1; ++i){
        int num;
        std::cin>> num;
        currentSum += num;
    }

    std::cout<< (expected_sum - currentSum) <<std::endl;
    
    return 0;
}