#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

#include<assert.h>

#define ROW 4
#define COL 4

int FindTarget(int* str,int x)
{
	assert(str);
	
	if (ROW > 0 && COL>0)
	{
		int row = 0;
		int col = ROW - 1;
		while (row < ROW  && col >= 0)
		{
			if (x < str[row*COL + col])
			{
				col--;
			}
			else if (x > str[row*COL + col])
			{
				row++;
			}
			else
			{
				return 1;
			}
		}
	}
	
	return -1;
}


void Test()
{
	int arr[ROW][COL] = { { 1, 2, 8, 9 },
						  { 2, 4, 9, 12 },
						  { 4, 7, 10, 13},
						  { 6, 8, 11, 15},
						};
	int ret = FindTarget((int*)arr, 11);
	if (ret == 1)
	{
		cout << "find success!" << endl;
	}
	else
	{
		cout << "find failure!" << endl;
	}
}


int main()
{
	Test();
	system("pause");
	return 0;
}