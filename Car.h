#pragma once
class Car
{
public:
	Car();
	virtual ~Car();
	virtual void driving();
protected:
	const char* name;
};

