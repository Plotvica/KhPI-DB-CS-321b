#include <iostream>

int main()
{
	int ft = 2, sec = 3, extr;
	// 4.1
	extr = ft;
	ft = sec;
	sec = extr;
	// 4.2 
		//sec = ft; 
		//ft = 2;
	ft = ft + sec;
	sec = ft - sec;
	ft = ft - sec;

}


