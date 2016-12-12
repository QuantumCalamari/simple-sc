#define interpreter_h
#pragma once

namespace itp {
	class interpreter {
	public:
		static void read_file(std::string filename);
		void search_circuit(std::string filename);
	};
}