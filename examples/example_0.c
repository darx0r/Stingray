#include <stdio.h>

void bar()
{
	printf("hello from bar\n");
}

void foo()
{
	wprintf(L"hello from foo\n");
	bar();
}

void foo2()
{
	wprintf(L"hello from foo2\n");
	bar();
}

void main()
{
	printf("hello from main\n");
	foo();
	foo2();

	getchar();
}
