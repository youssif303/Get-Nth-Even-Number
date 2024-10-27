#include<iostream>
#include<string>
using namespace std;

int nthEven(int n) {
	int result = -2;
	for (int i = 0; i<n; i++)
	{
		result += 2;
	}
		return result;
}

int main()
{
	cout << nthEven(5);
	return 0;
}