#include <iostream>

using namespace std;

main()
{
	int i;
	string str = "0000 0000 0000 0000 0000 0000 0000 0000";
	
	for (i = 0; i < 39; i++)
	{
		cout << str[i];
	}
	cout << endl;
}