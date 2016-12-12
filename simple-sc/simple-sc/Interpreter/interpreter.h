#define interpreter_h
#pragma once

namespace itp {
	class interpreter {
	public:
		static void read_file(std::string filename);
	private:
		static void search_circuit(std::string filename);
		static void search_instruction(std::string filename);
	};
}