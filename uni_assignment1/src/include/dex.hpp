/*
 * dex.hpp
 *
 *  Created on: 11 Jul 2022
 *      Author: mustafamalik
 */

#ifndef SRC_INCLUDE_DEX_HPP_
#define SRC_INCLUDE_DEX_HPP_

#define MAX_INPUT_CHARS 8 // maximum size of input allowed (8 bit input chunks)

#include <iostream>
#include <string>
#include <array>
#include <cmath>

/**
 * This will run on loop until the user exits the program
 * Returns integer, the status code of the program
 */
int run();
/**
 * Fetch an unsigned integer value from the user
 * Input must be binary and maximum of 8 bits (1 byte)
 * Must call an internal check to see if the value is binary and positive
 * Argument 1: the message to be displayed to the user as a prompt
 * Returns the input received
 */
int get_input(const char*);
/**
 * Converts the 8 bit binary value to a hexadecimal value
 * Returns the converted value
 */
int to_decimal(unsigned int&);
/**
 * Checks if the value is an 8 bit binary value
 * Returns true if it's binary, false if not
 */
bool is_bin(const unsigned int&);
/**
 * Checks if the value is a positive integer
 * Returns true if positive, false if negative
 */
bool is_positive(const int&);

#endif /* SRC_INCLUDE_DEX_HPP_ */
