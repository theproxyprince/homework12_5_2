#include <iostream>

int main() {
    int numbers[15] = {64, 51, 62, 59, 54, 61, 54, 53, 52, 51, 50, 63, 57, 58, 55};

    int min = numbers[0];
    for (int i = 1; i < 15; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    int repeatedNumber;
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (i == j) {
                continue;
            } else if (numbers[i] == numbers[j]) {
                repeatedNumber = numbers[i];
            }
        }
    }
    std::cout << "Min = " << min << std::endl;
    std::cout << "Repeated number = " << repeatedNumber << std::endl;
    
}