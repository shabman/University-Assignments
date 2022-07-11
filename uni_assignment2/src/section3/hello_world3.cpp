/*
 * hello_world3.cpp
 *
 *  Created on: 11 Jul 2022
 *      Author: mustafamalik
 */


#include <iostream>

#define print(x) std::cout << x << '\n';

int main() {
	int input = std::cin.get();
	if (input < 0)
		print("Error: Input value must be non-negative!");
	for (int i = 0; i < input; i++) {
		print("Hello, World!");
	}
	int tmp = 0;
	while (tmp < input) {
		print("Hello, World!");
		tmp++;
	}
	tmp = 0;
	do {
		print("Hello, World!");
		tmp++;
	} while(tmp < input);
}

