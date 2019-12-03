#include <iostream>

using namespace std;

void calculate(int a, int b)
{
	int count = 0;

	cout << "For " << a << " and " << b << endl;

	while (a != b) {
		count++;
		if (a > b)
			a -= b;
		else
			b -= a;
	}

	cout << "The answer is " << a << " and it took " <<
		count << " steps to calculate" << endl;
}

void usage(char *name)
{
	cout << "Usage: " << name <<
		" [positive number 1] [positive number 2]" << endl;
}

/*
 * argc holds the number of command-line arguments,
 * which are stacked in argv[] like this:
 * #0 Name of the program
 * #1 Argument 1
 * #2 Argument 2
 * ...
 */
int main(int argc, char *argv[])
{
	long int a, b;

	 /* User should pass exactly 2 arguments. */
	if (argc != 3) {
		usage(argv[0]);
		return -1;
	}

	a = strtol(argv[1], NULL, 0);
	b = strtol(argv[2], NULL, 0);

	/* We don't accept negative numbers. */
	if (a < 0 ||  b < 0) {
		usage(argv[0]);
		return -1;
	}

	calculate(a, b);

	return 0;
}
