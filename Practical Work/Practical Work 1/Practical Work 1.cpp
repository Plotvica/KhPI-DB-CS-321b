#include <stdio.h>
#include <iostream>
#include <Windows.h>

int main ()

{

 SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
// Task 1

	{
		int x = (7+6)%5/2; 
    		printf("1)x=%d; \n", x);
    }

// Task 2

	{
		int  x = -3 * 4 % -6 / 5;
    		printf ("2)x=%d; \n",x);
    }	

// Task 3

	{
		int  x = 2, y = 1, z = 3;
		 x *= 8 / 2 + y++ + ++z; // Оскільки ++ стоїть після у, то +1 лише після виводу в термінал
			printf ("3)x=%d y=%d z=%d;\n", x, y, z);
	}

// Task 4

	{
		int  m = 2, x = 2, y, z; 
		 x *= y = z = 4/m;
			printf ("4)x=%d y=%d z=%d m=%d;\n", x, y, z, m);
	}

// Task 5

	{
		int x = 2, y, z; 
		 x *= 3 + 2; 
		 x += y = z = 4;
		 x = y == z;
		 x = x == (y = z); // Оскільки х=14 (3+2)*2+4, то він не може дорівнювати y та z, які рівні 4
			printf ("4)x=%d\n", x);
	}

// Task test

	//{
	//	int x = 2, y, z; 
	//	 x == (y=z=4);
	//		printf ("t)x=%d\n", x);
	//}

	//{
	//	int x = 2, y, z;
	//	 x = y = z = 4;
	//		printf("t)x=%d\n", x);
	//}

	//{
	//	int x = 2, y, z;
	//	 x = x == (y = z = 4);
	//		printf("t)x=%d\n", x);
	//}

// Task 6

	{
		int z = 1, x = 2, y = 3;
         z = 3 * x++ - --y; 
			printf("6)x=%d y=%d z=%d;\n", x, y, z);
	}

return 0;

}