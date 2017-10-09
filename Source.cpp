#include<iostream>
#include <string>
using namespace std;
int to_int(string input) {
	int k = input.size();
	int input_,
		input_2=0;
	for (int i = 0; i < k; i++) {
		int mul;
		if (i >= 1) {
			mul = 10;
		}
		else
			mul = 1;
		input_ = int(input[i]) - 48;
		cout << input_ << endl;
		input_2 *= mul;
		//add the prefix to a variable
		input_2 += input_;



	}
	return input_2;

}
void main() {
	string kd;
	cin >> kd;
	cout << to_int(kd)+1 << endl;
	system("pause");
}