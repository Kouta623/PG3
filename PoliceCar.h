#pragma once
#include "Car.h"

class PoliceCar:public Car{

public:
	PoliceCar();
	~PoliceCar();
	void driving() override;

private:
	

};
