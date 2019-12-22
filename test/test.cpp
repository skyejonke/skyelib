#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../skyelib.hpp"
#include <string>

using namespace std;
TEST_CASE("basic skyelib tests", "[skyelib]"){
	toolkit* tools = new toolkit();
	string testString = "I like <food>.";
	tools->replace(testString,"<food>","pie");
	REQUIRE(testString == "I like pie.");
}

