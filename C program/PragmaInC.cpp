#include<stdio>
void func1();
void func2();
#pragma startup func1
#pragma exit func2
void func1()
{
	printf("1");
}
void func2()
{
	printf("2");
}
int main()
{
	void func1();
	void func2();
	printf("Main");
	return 0;
}
