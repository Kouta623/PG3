#pragma once
#include "Car.h"
class RaceCar :public Car {

public:
	RaceCar();
	~RaceCar();
	void driving() override;

private:


};