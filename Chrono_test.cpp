#include <chrono>
#include <iostream>
using namespace std;


int main(){
    auto start = std::chrono::steady_clock::now();
    std::cout << "f(42) = " << '\n';
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
    std::cout << start.coun();
}
