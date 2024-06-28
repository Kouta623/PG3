#pragma once
class Car
{
public:
	Car();
	virtual ~Car();
	virtual void driving() = 0;
protected:
	const char* name;
};

