#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("find_gcd")
{
	REQUIRE(5 == find_gcd(15, 25));
	REQUIRE(16 == find_gcd(16, 32));
	REQUIRE(3 == find_gcd(159, 309));
}