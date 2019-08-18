#include <iostream>
#include <vector>
using namespace std;
enum BASE {DEC=10, DUO=12, HEX=16};

int eachPosSum(int num, enum BASE base) {
	int sum = 0;
	while (num > 0) {
		sum += (num % base);
		num /= base;
	}
	return sum;
}

int main(void) {
	for (int num = 2992; num <= 9999; num++) {
		int decSum = eachPosSum(num, DEC);
		int duoSum = eachPosSum(num, DUO);
		int hexSum = eachPosSum(num, HEX);
		if (decSum == duoSum)
			if (duoSum == hexSum)
				cout << num << '\n';
	}
	return 0;
}
