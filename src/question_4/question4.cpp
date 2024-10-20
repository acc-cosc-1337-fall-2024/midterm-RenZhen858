#include"question4.h"

bool test_config()
{
    return true;
}

int get_earned_points(int sold) {
    if (sold >= 1 && sold <= 5) {
        return sold;
    } else if (sold >= 6 && sold <= 10) {
        return 5 * sold;
    } else if (sold >= 11 && sold <= 15) {
        return 10 * sold;
    } else if (sold >= 16) {
        return 15 * sold;
    }
    return 0;
}