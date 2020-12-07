#include "Engine.h"
#include <vector>
#include "logic.h"
using namespace std;

class TransParentObjects { // Contains Transparent Objects, Solid Can not pass through what doesn't exist.
	vector <string> ListOfNonExistantObjects{
		"TRP_InvisibleWall",
		"TRP_InvisiblePlatform",
		"TRP_InvisibleStick"
	};
	vector <int> TickingLibrary{ 1, 3, 5, 7, 13, 20 }; // Adds a User Ticking Library With some pre-defined Tick Speed.
};

class 