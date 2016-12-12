#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <fstream>
#include <string>
#include "interpreter.h"


namespace itp {
	void interpreter::read_file(std::string filename) {

		std::string line;
		std::ifstream file;

		bool circ = false;
		bool inst = false;
		
		file.open(filename);

		if (file.is_open())
		{
			while (getline(file, line))
			{
				//search for circuit
				if (!line.find("crct_end") || !circ) {
					circ = false;
				}

				if (!line.find("crct_begin") || circ) {
					circ = true;
					itp::interpreter::search_circuit(line);
				}
				//search for instructions
				if (!line.find("inst_end") || !inst) {
					inst = false;
				}

				if (!line.find("inst_begin") || inst) {
					inst = true;
					itp::interpreter::search_instruction(line);
				}
			}
			file.close();
		}
		else {
			std::cout << "No file open" << std::endl;
		}

	}

	void interpreter::search_circuit(std::string line) {
		std::cout << "circuit - " << line << std::endl;
	}

	void interpreter::search_instruction(std::string line) {
		std::cout << "instruction - " << line << std::endl;
	}
}