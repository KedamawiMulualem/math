
#include <iostream>
#include<cmath>
#include <vector>


using namespace std;
int main() {
	vector <int>prime;
	bool isprime=true;
	int num, sum = 0, numa, counter = 0;
	for (int numa = 4; numa < 100; numa++) {
		num =int(sqrt( numa));
		while (num != 1&&isprime) {
			if (numa % num == 0 && num > 0)
			{
				isprime = false;
				
			}
			else if (numa%num != 0) {
				isprime = true;
			}
			num--;
		}
		if (isprime) { prime.push_back(numa); }
		
		isprime = true;
	}
	system("pause");
	return 0;
}
