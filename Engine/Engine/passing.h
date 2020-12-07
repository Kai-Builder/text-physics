#include "Engine.h"
#include <vector>
using namespace std;

class TransParentObjects { // Contains Transparent Objects, Solid Can not pass through what doesn't exist.
public:
	vector <string> ListOfNonExistantObjects{
		"TRP_InvisibleWall",
		"TRP_InvisiblePlatform",
		"TRP_InvisibleStick"
	};
	vector <int> TickingLibrary{ 1, 3, 5, 7, 13, 20 }; // Adds a User Ticking Library With some pre-defined Tick Speed.
};

class Spectator {
public:
	vector <int> HumanvjectStats{ 100, /*Health*/13, 3 };
	int PrintSpectatorStatistics() {
		for (int i = 0; i < HumanvjectStats.size(); i++)
			std::cout << "\n" << HumanvjectStats.at(i) << '\n';
	}
};