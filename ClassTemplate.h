#pragma once
template<typename T1, typename T2>
class ClassTemplate
{
public:
	T1 number1;
	T2 number2;


	ClassTemplate(T1 num1,T2 num2):number1(num1),number2(num2){}

	T1 Size() {
		if (number1<number2)
		{
			return number1;
		}
		else {
			return number2;
		}
	}

};

