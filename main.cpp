#include<stdint.h>
#include<vector>
#include<list>
#include<iostream>

using namespace std;

int main() {
	//要素の追加
	std::list<const char*>list{
		"Tokyo","Kanda","Kakihabara","Okachimachi","Ueno","Uguisudani","Nippori","Tabata","Komagome",
		"Sugamo","Otuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo","Shinjyuku","Yoyogi","Harajuku","Shibuya",
		"Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi","Hamamatucho","Sinmbashi","Yurakucho"
	};


	printf("1970年\n");
	for (std::list<const char*>::iterator itr = list.begin(); itr != list.end(); ++itr) {

		std::cout << *itr << "\n";

	}

	printf("\n2019年\n");
	for (std::list<const char*>::iterator itr = list.begin(); itr != list.end(); ++itr) {

		//Nisi-nipporiを追加
		if (*itr == "Tabata") {
			itr = list.insert(itr, "Nishi-nippor");
			std::cout << *itr << "\n";
			++itr;
		}
		std::cout << *itr << "\n";
	}


	printf("\n2020年\n");
	for (std::list<const char*>::iterator itr = list.begin(); itr != list.end(); ++itr) {

		//Takanawa Gateweyを追加
		if (*itr == "Tamachi") {
			itr = list.insert(itr, "Takanawa Gatewey");
			std::cout << *itr << "\n";
			++itr;
		}
		std::cout << *itr << "\n";

	}
	return 0;
}
