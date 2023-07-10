#include <iostream>
#include <random>

using namespace std;

int main(){
    init::random_device rd;
    init::mt19937 gen(rd());
    
    init::uniform_int_distribution<> dis(0, 100);
    
    int matriz[5][6];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            matriz[i][j] = dis(gen);
        }
    }
    
    std::cout << "Matriz generada:\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 6; ++j) {
            std::cout << matriz[i][j] << "\t";
        }
        std::cout << "\n";
    }
    
    return 0;
}
