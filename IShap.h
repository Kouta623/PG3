#pragma once
class IShap
{
public:
	IShap();
	virtual ~IShap();
	virtual void Size() = 0;
	virtual void Draw() = 0;
protected:
	const char* name;
};

