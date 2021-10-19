#include<iostream>

//Ar3f B0rhani

using namespace std;

double fact(int n);
double fact1(int n, int s);
double select(int n, int k);

int main() {
	int k = 0, n = 0;
	cin >> k >> n;


	cout << select(n, k);
}

double fact(int n) {
	if (n == 0)
		return 1;
	else
		return n * fact(n - 1);
}

double fact1(int n, int s) {
	if (n <= s)
		return 1;
	else
		return n * fact1(n - 1, s);
}

double select(int n, int k) {
	const int s = (n - k);
	return fact1(n, s) / fact(k);
}
