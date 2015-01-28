#include <iostream>
#include <stdio.h>

typedef unsigned char BYTE;
using namespace std;

int funcCount_1(BYTE v)
{
	int num = 0;
	while(v)
	{
		if(v %2 == 1)
			num ++;
		v /= 2;
	}
	return num;
}
int funcCount_2(BYTE v)
{
	int num =0;
	while(v)
	{
		num += v & 0x01;
		v >>= 1;
	}
	return num;
}
int funcCount_3(BYTE v)
{
	int num =0;
	while(v)
	{
		v &= (v-1);
		num ++;
	}
	return num;
}
int main(int argc,char **argv)
{
	int n = 81;
	cout<<"cout<<funcCount_1(81) = "<<funcCount_1(n)<<endl;
	cout<<"cout<<funcCount_2(81) = "<<funcCount_2(n)<<endl;
	cout<<"cout<<funcCount_3(81) = "<<funcCount_3(n)<<endl;
	getchar();
	return 0;
}