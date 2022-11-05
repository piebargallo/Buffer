#include <iostream>
#include <algorithm>
#include <memory>
#include <string.h>
using namespace std;

void sorting(char b[], int n) // Def setter
{
	int i;
	pair<char*, ptrdiff_t> p = get_temporary_buffer<char>(n);

	// copy the contents in temporary buffer with pair
	uninitialized_copy(b, b + p.second, p.first);

	// sort char array
	sort(p.first, p.first + p.second);

	cout << "sorted characters are :" << endl;
	for (i = 0; i < p.second; i++) {
		cout << p.first[i] << " ";
	}

	// to release the temporary buffer
	return_temporary_buffer(p.first);
}

// Driver code
int main()
{
	char str[] = { 'b', 'g', 'y', 'v', 'p' };
	int c;
	c = strlen(str);

	sorting(str, c);
	return 0;
} // End driver
