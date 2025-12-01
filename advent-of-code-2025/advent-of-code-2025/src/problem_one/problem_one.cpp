#include "problem_one.hpp"
#include "../file_reader.hpp"
#include <vector>
#include <string>
#include <iostream>

ProblemOne::ProblemOne(){

}

void ProblemOne::solve() {
	std::vector<std::string> input = FileReader::readLines("src/problem_one/input.txt");
	int curr_dial = 50;
	int password_clicks = 0;

	for (const auto& rotation : input) {
		int distance = std::stoi(std::string(rotation.begin() + 1, rotation.end()));;
		if (rotation[0] == 'R') {
			
			curr_dial = (curr_dial + distance) % 100;

			if (curr_dial == 0) {
				password_clicks++;
			}

		}
		else {
			curr_dial = (curr_dial - (distance % 100) + 100) % 100;

			if (curr_dial == 0) {
				password_clicks++;
			}

		}
	}

	std::cout << password_clicks << std::endl;

}