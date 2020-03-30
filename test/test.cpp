#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../skyelib.hpp"
#include <string>

using namespace std;
TEST_CASE("basic skyelib tests", "[skyelib]"){
        skyelib::toolkit* toold = new skyelib::toolkit();
	string testString = "I like <food>.";
	toold->replace(testString,"<food>","pie");
	REQUIRE(testString == "I like pie.");
}

