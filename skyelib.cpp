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
	if (!randInitialized){
		rng.seed((unsigned) time(0));
		randInitialized=true;
	}
	if (start == end){
		return start;
	}
	else{
		std::uniform_int_distribution<uint32_t> distr(start,end);
		//std::uniform_int_distribution<> distr(start,end);
		return distr(rng);
	}
}

void toolkit::replace(std::string& str,
               const std::string& oldStr,
               const std::string& newStr){
       std::string::size_type pos = 0u;
       while((pos = str.find(oldStr, pos)) != std::string::npos){
		str.replace(pos, oldStr.length(), newStr);
		pos += newStr.length();
	}
}
void skyelib::replace(std::string& str,
               const std::string& oldStr,
               const std::string& newStr){
       std::string::size_type pos = 0u;
       while((pos = str.find(oldStr, pos)) != std::string::npos){
		str.replace(pos, oldStr.length(), newStr);
		pos += newStr.length();
	}
}
