#include <iostream>
#include <fstream>

int main()
{
	std::ofstream passes("donkey.txt");
	for(long i = 10000000; i != 100000000; i++)
	{
		passes << i << std::endl;
	}
}
