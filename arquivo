/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
