#include <iostream>
#include <string>
#include "Interpreter\interpreter.h"

int main() {

	std::string filename;

	//read data
	std::cout << "Input file name: ";
	std::cin >> filename;

	itp::interpreter::read_file("test.txt");

	//parse data
		
	//complete calculation

	//display output

	system("PAUSE");
	return 0;

}