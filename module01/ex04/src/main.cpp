#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, const char* argv[]) {
	if (argc != 4 || !std::strlen(argv[2]) || !std::strlen(argv[3])) {
		std::cout << "Usage: ./replace inputFile stringToFind stringToReplaceFindWith" << std::endl;
		return 1;
	}
	const std::string fileInPath(argv[1]);
	const std::string find(argv[2]);
	const std::string replace(argv[3]);
	std::ifstream	  fileIn;
	std::ofstream	  fileOut;
	fileIn.open(fileInPath.c_str());
	fileOut.open((fileInPath + ".replace").c_str());

	if (!fileIn.is_open()) {
		std::cout << "Cannot open infile" << std::endl;
		return 1;
	}
	if (!fileOut.is_open()) {
		std::cout << "Cannot open outfile" << std::endl;
		fileIn.close();
		return 1;
	}
	std::stringstream ss;
	ss << fileIn.rdbuf(); //read the file
	std::string fileContents = ss.str();
	size_t		writtenUntilI = 0;
	size_t		foundI;

	while ((foundI = fileContents.find(find, writtenUntilI)) != std::string::npos) {
		fileOut << fileContents.substr(writtenUntilI, foundI - writtenUntilI);
		fileOut << replace;
		writtenUntilI += (foundI - writtenUntilI) + replace.length();
	}
	if (writtenUntilI < fileContents.length())
		fileOut << fileContents.substr(writtenUntilI, fileContents.length());
	fileIn.close();
	fileOut.close();
	return 0;
}
