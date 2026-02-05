#include <iostream>
#include <cmath>

const double gravity{ 9.8 };

double getHeightFromUser(){
	std::cout << "Enter the height of the tower in meters: ";
	double height{};
	std::cin >> height;
	return height;
}

void calculateHeightOfBall(double height, double time) {
	double distanceFallen{ (gravity * pow(time, 2)) / 2 };
	double currentHeight{ height - distanceFallen };
	if (currentHeight > 0) {
		std::cout << "At " << time << " seconds, the ball is at height: "
			<< currentHeight << " meters" << '\n';
	}
	else
		std::cout << "At " << time << " seconds, the ball is on the ground." << '\n';
}

int main() {
	double towerHeight{ getHeightFromUser()};

	calculateHeightOfBall(towerHeight, 0);
	calculateHeightOfBall(towerHeight, 1);
	calculateHeightOfBall(towerHeight, 2);
	calculateHeightOfBall(towerHeight, 3);
	calculateHeightOfBall(towerHeight, 4);
	calculateHeightOfBall(towerHeight, 5);
	return 0;
}
