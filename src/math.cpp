#include "math.h"

unsigned long long factorial(unsigned int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int square(int x){
    
}
