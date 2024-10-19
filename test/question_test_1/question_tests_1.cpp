#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("get_fib_sequence")
{
	REQUIRE("0 1 1 2 3 5" == get_fib_sequence(5));
	REQUIRE("0 1 1 2 3 5 8" == get_fib_sequence(7));
	REQUIRE("0 1 1 2 3 5 8 13 21 34 55" == get_fib_sequence(10));
	REQUIRE("0 1 1 2 3 5 8 13 21 34 55 89 144" == get_fib_sequence(12));
}