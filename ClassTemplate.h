#pragma once
template<typename T1, typename T2>
class ClassTemplate
{
public:
	T1 num1;
	T2 num2;


	ClassTemplate(T1 num1,T2 num2):num1(num1),num2(num2){}

	T1 Size() {
		if (num1<num2)
		{
			return num1;
		}
		else {
			return num2;
		}
	}

};

