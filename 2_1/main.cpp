#include <stdio.h>
#include <list>

using namespace std;

int main() {

	list<const char*> yamanoteLine =

	{"Ueno","Okachimachi","Akibahara","Kanda","Tokyo","Yurakucho","Shimbashi",
	"Hamamatsucho","Tamachi","Shinagawa","Osaki","Gotanda","Meguro",
	"Ebisu" ,"Shibuya","Harajuku","Yoyogi","Shinjuku","ShinOkubo","Takadanobaba"
	,"Mejiro","Ikebukuro","Otuka","Sugamo","Komagome","Tabata","Nippori","Uguisudani"};

	printf("-----1970-----\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	printf("-----2019-----\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++)
	{
		if (*itr == "Nippori")
		{
			itr = yamanoteLine.insert(itr, "Nishinippori");
			printf("%s\n", *itr);
			itr++;
		}
		printf("%s\n", *itr);
	}
	
	printf("-----2022-----\n");
	for (auto itr = yamanoteLine.begin(); itr != yamanoteLine.end(); itr++)
	{
		if (*itr == "Shinagawa")
		{
			itr = yamanoteLine.insert(itr, "Takanawagateway");
			printf("%s\n", *itr);
			itr++;
		}
		printf("%s\n", *itr);
	}

	return 0;
}