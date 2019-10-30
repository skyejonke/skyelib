#include "skyelib.hpp"
std::vector<std::string> toolkit::splitString(std::string inpt){
	std::string buf;
	std::stringstream ss(inpt);
	std::vector<std::string> opt;
	while (ss >> buf){
		opt.push_back(buf);
	}

	return opt;
}

int toolkit::getRand(int start, int end){
	std::random_device rd;
	std::mt19937 eng(rd());
	std::uniform_int_distribution<> distr(start,end);
	return distr(eng);
}

