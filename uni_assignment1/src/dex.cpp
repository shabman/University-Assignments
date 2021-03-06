/*
 * dex.cpp
 *
 *  Created on: 11 Jul 2022
 *      Author: mustafamalik
 */


// Implementation file of dex.hpp

#include "include/dex.hpp"

#define print(x) std::cout << x << '\n'
#define input(y) std::cin >> y

#define HEX_IN ">>> Enter an 8 bit binary value to be converted to hexadecimal..."

int run() {
	bool keep_alive 	= true;
	bool retrying		= true;

	int exit_code 		= 0;
	int input			= 0;

	print("\tTo end the program, enter 3");

	do {
		if (retrying) {
			input = get_input(HEX_IN);
		}
		if (is_bin(input)) {
			retrying = false;
			unsigned int conv = static_cast<unsigned int>(input);
			print(to_decimal(conv));
			retrying = true;
		} else if (input == 3) {
			print("Program terminated");
			break;
		}
	} while(keep_alive);

	return exit_code;
}

int get_input(const char* message) {
	int in;
	print(message);
	input(in);
	return in;
}

int to_decimal(unsigned int& input) {
	int dec = 0;
	int i = 0;
	int rem;

	while (input != 0) {
	  rem = input % 10;
	  input /= 10;
	  dec += rem * pow(2, i);
	  ++i;
	}
	return dec;
}

bool is_bin(const unsigned int& input) {
	std::string istr = std::to_string(input);
	bool is_bin = true;
	if (istr.size() > MAX_INPUT_CHARS || istr.size() < MAX_INPUT_CHARS)
		return false;
	for (int i = 0; i < istr.size(); i++) {
		if (istr[i] > '1' || !is_positive(static_cast<int>(istr[i]))) {
			is_bin = false;
			break;
		}
	}
	return is_bin;
}

bool is_positive(const int& input) {
	return input > -1;
}
