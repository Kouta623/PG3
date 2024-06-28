#pragma once
#include "IShap.h"
class Rectanglr :public IShap {

public:
	Rectanglr();
	~Rectanglr();
	void Size() override;
	void Draw() override;

private:
	float Rect;
	float result;
};