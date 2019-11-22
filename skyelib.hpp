#ifndef skyelib_h
#define skyelib_h
#include <string>
#include <vector>
#include <sstream>
#include <random>
namespace skyelib{
	void replace(std::string& str,
			const std::string& oldStr,
			const std::string& newStr);
}
class toolkit{
	public:
		std::vector<std::string> splitString(const std::string inpt);
		int getRand(const int start, const int end);
		void replace(std::string& str,
			const std::string& oldStr,
			const std::string& newStr);
	private:
		bool randInitialized = false;
		typedef std::mt19937 MyRNG;  // the Mersenne Twister with a popular choice of parameters
		uint32_t seed_val;           // populate somehow
		MyRNG rng;

};

#endif
