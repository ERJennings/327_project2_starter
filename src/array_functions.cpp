/*
 * functionstocomplete.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: keith
 */

//============================================================================
//	TODO add necessary includes here
//============================================================================

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <time.h>
#include "constants.h"
#include "utilities.h"
#include "array_functions.h"

using namespace std;
using namespace constants;

//============================================================================
//	stuff you will need
//============================================================================
//TODO define a structure to track words and number of times they occur

//TODO add a global array of entry structs (global to this file)

//TODO add variable to keep track of next available slot in array

//TODO define all functions in header file

//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!

struct entry
{
	string word;
	int number_occurences;
};

void clearArray() {

}

int getArraySize(){
	return 0;
}

std::string getArrayWordAt(int i) {
	return "a";
}

int getArrayWord_NumbOccur_At(int i) {
	return 0;
}

bool processFile(std::fstream &myfstream) {
	return true;
}

void processLine(std::string &myString) {

}

void processToken(std::string &token) {

}

bool openFile(std::fstream& myfile, const std::string& myFileName,
		std::ios_base::openmode mode) {
	return true;
}

void closeFile(std::fstream& myfile) {

}

int writeArraytoFile(const std::string &outputfilename) {
	return 0;
}

void sortArray(constants::sortOrder so) {

}

