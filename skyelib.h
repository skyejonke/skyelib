#ifndef skyelib_h
#define skyelib_h
#include <string>
#include <vector>
#include <sstream>
#include <random>
class toolkit{
	public:
		std::vector<std::string> splitString(std::string inpt);
		int getRand(int start, int end);
};
#endif
