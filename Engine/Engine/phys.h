#include <iostream>
#include <Windows.h>
#include <vector>


using namespace std;



class Ball {
public:
	vector <int> BallStats{ // Contains the Ball Object Statistics.
		10, // DEFAULT MASS
		1 // RECOGNIZED TICK
	};
	void flang(int Tick, int Mass) { // flang defines the ball drop, For choosing how far, do CustomRange(myRange);
		std::cout << "Ball has been dropped.\n";
		Sleep(Tick + 1000 * Mass + 1000);
		std::cout << "Physobject.PhysSuccessMessage:\n\tObject Ball has Dropped with return code 0.\n\n";
	}
	int CustomRange(int FallInFeet, int Tick, int WaitBefore) { // CUSTOM RANGE. USAGE: CustomRange(FallInFeet, WorldTick, DropWaitTime)
		int FinalFallTime = FallInFeet - Tick;
		if (WaitBefore == 0) {
			std::cout << "Dropped Ball from " << FallInFeet << " Feet.\n";
			Sleep(FinalFallTime + 1000);
			std::cout << "Physobject.PhysSuccessMessage:\n\tObject Ball has Dropped with return code 0.\n\n";
			return 0;
		}
		else {
			std::cout << "Before dropping, Waiting " << WaitBefore << " Milliseconds Before drop time.\n";
			Sleep(WaitBefore);
			std::cout << "Dropped Ball from " << FallInFeet << " Feet.\n";
			Sleep(FinalFallTime + 1000);
			std::cout << "Physobject.PhysSuccessMessage:\n\tObject Ball has Dropped with return code 0.\n\n";
			return 0;
		}
	}
	int GetMassRegOrientation() { // Gathers the Ball Status Array and prints the Mass Part.
		cout << BallStats[0] << endl;
	}
	int NewInstance(string instanceType, int ThisisWhatToAdd) { // Add Custom Components using the Number, WhatToAdd
		if (instanceType == "") {
			cout << "ValueError: Type Class Instance Can not be undefined.\n";
			return 0;
		}
		if (instanceType == "ballstat") {
			BallStats.push_back(ThisisWhatToAdd);
		}
	}
	int PrintCurrentStorageIdentifierLENGTH() { // Print Current Ball Status.
		cout << BallStats.size();
		return 0;
	}
	int CurrentChildrenStored() { // Prints Current Cache Children Of The Current Physics Simulation Session. (CPSS)
		for (int i = 0; i < BallStats.size(); i++)
		std::cout << "\n" <<  BallStats.at(i) << '\n';
		return 0;

	}
	int help() {
		cout << "The text physics Engine Is made for testing different mass, and rotations without using any graphics.\n";
		cout << "To start using, Read the manual.html file.";
		Sleep(3000);
		return 0;
	}
	int ReCompile() {
		system("gcc Engine.cpp");
		return 0;
	}
};
