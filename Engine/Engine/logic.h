#include "passing.h"
using namespace std;
#define GRAVITY
#ifndef GRAVITY
#endif NULL	
vector <int> BasicGravityIntegers{ 100, 200, 990, 456, 3500 };
TransParentObjects ne;
class MainWorld {
public:
	int AddWorldGravityInteger(int IntegerType) { // Add World Gravity Option, Completely User Choice.
		BasicGravityIntegers.push_back(IntegerType);
		return 0;
	}
	int AddWorldBaseTickSpeeds(int TickTypeWorld) { // TickTypeWorld Stands for the current Session world.
		ne.TickingLibrary.push_back(TickTypeWorld);
			return 0;
	}
	
};