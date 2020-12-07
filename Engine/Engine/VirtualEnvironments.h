#include "logic.h"

class Earth {
public:
	Spectator nckass;
	bool isWorld = true;
	int GetEarthVariables() {
		MainWorld a;
		for (int i = 0; i < BasicGravityIntegers.size(); i++)
			std::cout << "\n" << BasicGravityIntegers.at(i) << '\n';
	}
	int GetSpectatorDataType() {
		for (int i = 0; i < nckass.HumanvjectStats.size(); i++)
			std::cout << "\n" << nckass.HumanvjectStats.at(i) << '\n';
	}
};