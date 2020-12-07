#include "logic.h"

class Earth {
	bool isWorld = true;
	int GetEarthVariables() {
		MainWorld a;
		for (int i = 0; i < BasicGravityIntegers.size(); i++)
			std::cout << "\n" << BasicGravityIntegers.at(i) << '\n';
		for (int i = 0; i < BallStats.size(); i++)
			std::cout << "\n" << BallStats.at(i) << '\n';
	}
};