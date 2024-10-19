#include "question2.h"
#include<utility>

bool test_config()
{
    return true;
}

int find_gcd(int a, int b) {
    if (a < b) {
        std::swap(a, b);
    }

    int gcd = 1;

    for (int i = 1; i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; 
        }
    }

    return (gcd == 1) ? -1 : gcd;
}