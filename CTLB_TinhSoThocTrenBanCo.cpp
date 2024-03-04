#include  <cmath>
#include <iostream>
using namespace std;
int main() {
	int so0; so thoc=0;
	cout << "nhap so o:"; cin >> so0;
	for (int i = 0; i < so0; i++)
	{
		cout << "oso" << i
			<< "co so thuoc la" << pow(2, i) << endl;
		sothoc += pow(2, i);
		cout << "tong so thoc chua trong" << so0 << "la" << sothoc << "hat\n"
	}
	return 0;
	


}
