#include<iostream>
#include<cmath>
#include <fstream>
using namespace std;
bool is_prime(int num) {
	int numa = sqrt(num);
	if (num == 0) {
		return false;
	}
	if (num == 1){
		return false;
	}
	if (num == 2) { 
		return true;
	}
	if (num % 2 == 0) { 
		return false; 
	}
	
	if (numa % 2 == 0) {
		numa -= 1;
	}
		while (numa != 1) {
			if (num % numa == 0 && numa > 0)
			{
				return false;

			}
			numa -= 2;
			
		}

		return true;
	
}
void main() {
	ofstream myfile;
	myfile.open("prime_t.txt");
	for (long long int i = 0; i < 10000000000000000000; i++) {

		if (is_prime(i)) {
			myfile << i << endl;
			cout << i << endl;
		}
	}
	

	system("pause");
}