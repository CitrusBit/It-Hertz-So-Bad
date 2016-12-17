#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>

int main()
{
	using namespace std;
	int one{1};
	int hertz{50};
	while(one == 1)
	{
		cout << "How Many Hertz do you wish to beep at: ";
		int hertz;
		cin >> hertz;
		Beep(hertz,2000);
	}
	return 0;
} 