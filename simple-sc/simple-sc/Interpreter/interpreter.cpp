#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <fstream>
#include <string>
#include "interpreter.h"


namespace itp {
	void interpreter::read_file(std::string filename) {

		std::string line;
		std::ifstream file;
		
		file.open(filename);

		if (file.is_open())
		{
			while (getline(file, line))
			{
				std::cout << line << std::endl;
			}
			file.close();
		}
		else {
			std::cout << "No file open" << std::endl;
		}

	}

	void interpreter::search_circuit(std::string filename) {

	}
}