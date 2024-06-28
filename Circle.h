#pragma once
#include "IShap.h"

class Circle:public IShap {

public:
	Circle();
	~Circle();
	void Size() override;
	void Draw() override;

private:
	float R;
	float result;

};
