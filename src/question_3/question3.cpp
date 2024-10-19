#include "question3.h"

bool test_config()
{
    return true;
}

const double SUGAR_PER_48_COOKIES = 1.5;
const double BUTTER_PER_48_COOKIES = 1.0;
const double FLOUR_PER_48_COOKIES = 2.75;

std::vector<double> get_cookie_ingredients(int cookies) {
    double scale = static_cast<double>(cookies) / 48.0;

    double sugar = SUGAR_PER_48_COOKIES * scale;
    double butter = BUTTER_PER_48_COOKIES * scale;
    double flour = FLOUR_PER_48_COOKIES * scale;

    return {sugar, butter, flour};
}