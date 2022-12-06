#include<list>
#include <iostream>

using namespace std;

int main()
{
	list<const char*>stations = { "Tokyo","Kanda","Akihabara","Okachimachi","Ueno",
		"Uguisudani","Nippori","Tabata","Komagome","Sugamo","Otsuka","Ikebukuro",
		"Mejiro","Takadanobaba","Shinokubo","Shinjuku","Yoyogi","Harajuku",
		"Shibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa","Tamachi",
		"Hamamatsucho","Shimbashi","Yurakucho" };

	cout << "---1970---" << endl;
	for (const char* station : stations) {
		cout << station << endl;
	}

	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (strcmp(*itr, "Nippori") == 0) {
			itr = stations.insert(itr, "Nishinippori");
			++itr;
		}
	}

	cout << "---2019---" << endl;
	for (const char* station : stations) {
		cout << station << endl;
	}

	for (list<const char*>::iterator itr = stations.begin(); itr != stations.end(); ++itr) {
		if (strcmp(*itr, "Tamachi") == 0) {
			itr = stations.insert(itr, "Takanawagateway");
			++itr;
		}
	}

	cout << "---2022---" << endl;
	for (const char* station : stations) {
		cout << station << endl;
	}


	return 0;
}