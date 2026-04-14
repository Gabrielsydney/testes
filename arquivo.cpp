#include <iostream>

using namespace std;

int fat(int n) {

	return (n == 0) ? 1 : (n * fat(n - 1));

}

int fat2(int n) {
	int product = 1;
	while (n > 0) {
		product *= n;
		n--;
	}
	return product;
}

int showFat() {
	cout << fat(5) << endl;
	return 0;
}

int main()
{
	showFat();
	return 0;
}
