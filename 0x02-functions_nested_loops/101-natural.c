#include<iostream>
using namespace std;

int main() {

	int sum = 0;

	  	for (int i = 3; i < 1024; i++) {

			if (i%3==0 or i%5==0)

				sum += i;
		}

		cout << sum;

		return 0;
 }
