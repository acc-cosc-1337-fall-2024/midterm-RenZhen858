#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_cookie_ingredients")
{
	REQUIRE("1.5, 1, 2.75" == get_cookie_ingredients(48));
	REQUIRE("3, 2, 5.5" == get_cookie_ingredients(96));
	REQUIRE("0.75, 0.5, 1.375" == get_cookie_ingredients(24));
}