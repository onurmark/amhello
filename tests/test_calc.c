#include <stdio.h>
#include <assert.h>

#include "libcalc.h"

int main(int argc, char *argv[])
{
	int res;

	assert(5 == sum(3, 2));
	assert(1 == sub(3, 2));
	assert(1 == div(3, 2));
	assert(6 == mul(3, 2));
	
	return 0;
}
