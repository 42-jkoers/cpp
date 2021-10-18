#include "numbers.hpp"
#include <sstream>
#include <string>

bool parse_char(char& output, std::string str) {
	if (std::isprint(str[0]) && !std::isdigit(str[0]) && str.length() == 1) {
		output = str[0];
		return true;
	}
	return false;
}

bool parse_int(int& output, std::string str) {
	char			  c;
	std::stringstream ss(str);
	ss >> output;
	return !(ss.fail() || ss.get(c));
}

bool parse_float(float& output, std::string str) {
	if (!(str == "inff" || str == "-inff" || str == "+inff" || str == "nanf")) {
		size_t i = 0;
		while (i < str.size() && std::isdigit(str[i]))
			i++;
		if (str[i] != '.')
			return false;
		i++;
		while (i < str.size() && std::isdigit(str[i]))
			i++;
		if (i + 1 != str.size() || str[i] != 'f')
			return false;
	}
	try {
		output = std::stof(str);
	} catch (const std::exception& e) {
		return false;
	}
	return true;
}

bool parse_double(double& output, std::string str) {
	if (!(str == "inf" || str == "-inf" || str == "+inf" || str == "nan")) {
		size_t i = 0;
		while (i < str.size() && std::isdigit(str[i]))
			i++;
		if (str[i] != '.')
			return false;
		i++;
		while (i < str.size() && std::isdigit(str[i]))
			i++;
		if (i != str.size())
			return false;
	}
	try {
		output = std::stod(str);
	} catch (const std::exception& e) {
		return false;
	}
	return true;
}

int main(int argc, char** argv) {
	if (argc != 2)
		return 1;
	const std::string input(argv[1]);
	T				  t;

	char			  as_char;
	int				  as_int;
	float			  as_float;
	double			  as_double;

	if (parse_char(as_char, input))
		t.printer(as_char);
	else if (parse_int(as_int, input))
		t.printer(as_int);
	else if (parse_float(as_float, input))
		t.printer(as_float);
	else if (parse_double(as_double, input))
		t.printer(as_double);
	else {
		std::cout << "(pseudo) literal not recognized" << std::endl;
		return 1;
	}
	return 0;
}
