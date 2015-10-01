#ifndef UTILS_H
#define UTILS_H

class Utils {
public:

	//unsigned int split
	//split a string <txt> everywehre a certain character <ch> is found
	//store the resulting substrings in a vector <strs>
	//returns the size of the vector
	static unsigned int split(const std::string &txt, std::vector<std::string> &strs, char ch) {
		int pos = txt.find(ch);
		int initialPos = 0;
		strs.clear();
		while (pos != std::string::npos) {
			strs.push_back(txt.substr(initialPos, pos - initialPos + 1));
			initialPos = pos + 1;

			pos = txt.find(ch, initialPos);
		}
		//Add the last one
		strs.push_back(txt.substr(initialPos, std::min<int>(pos, txt.size() - (initialPos + 1))));

		return strs.size();
	}
};

#endif
