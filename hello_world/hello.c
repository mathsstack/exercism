#include <stdio.h>
#include "hello.h"

const char* hello(void)
{

	return "Hello, World!";

}

int main()
{

	printf("%s\n", hello());

}
