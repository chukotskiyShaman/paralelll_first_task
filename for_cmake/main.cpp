#include <vector>
#include <cmath>
#include <iostream>

#ifdef USE_FLOAT
    #define TYPE float
#else
    #define TYPE double
#endif

void generateAndSum(){
    int size = 10000000;
    std::vector<TYPE> array;

    for(int i = 0; i < size; i++){
        array.push_back(std::sin(i*2 * M_PI/size));
    }

    TYPE sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }

    std::cout << "Array Sum: " << sum << std::endl;
}

int main(){
    generateAndSum();
    return 0;
}