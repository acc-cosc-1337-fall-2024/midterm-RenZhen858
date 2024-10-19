#include "question1.h"
#include <sstream>

bool test_config()
{
    return true;
}

std::string get_fib_sequence(int n) {
    if (n <= 0) return "";
    if (n == 1) return "0";

    std::ostringstream oss;
    int a = 0, b = 1;

    oss << a << " " << b;

    for (int i = 2; i <= n; ++i) {
        int next = a + b;
        oss << " " << next;
        a = b;
        b = next;
    }

    return oss.str();
}
