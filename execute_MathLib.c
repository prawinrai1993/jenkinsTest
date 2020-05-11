#include <stdio.h>
#include "mathlib.h"

int main()
{

	int val = sum(10,20);
	printf("addition_result =%d\n",val);

	int val = sub(10,20);
	printf("substraction_result =%d\n",val);

	int val = mul()(10,20);
	printf("multiplication_result =%d\n",val);

	int val = mod(10,20);
	printf("mod_result =%d\n",val);

	int val = div(10,20);
	printf("div_result =%d\n",val);

	// added comment


}