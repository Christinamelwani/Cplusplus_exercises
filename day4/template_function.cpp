#include <iostream>

template <typename T>
T findMax(T arr[], int size) {
    T maximumValue = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maximumValue) {
            maximumValue = arr[i];
        }
    }

    return maximumValue;
}

int main() {
    int integerArray[5] = {1, 2, 10, 24, 3};
    char characterArray[5] = {'c', 'a', 'z', 'y', 'x'};
    double doubleArray[5] = {1.1, 2.2, 10.5, 24.3, 3.7};

    std::cout << "Maximum integer: " << findMax(integerArray, 5) << std::endl;
    std::cout << "Maximum character: " << findMax(characterArray, 5) << std::endl;
    std::cout << "Maximum double: " << findMax(doubleArray, 5) << std::endl;

    return 0;
}
