#include <stdio.h>

int main(void)
{
    long cc_number;

    do
    {
		printf("Number: ");
        scanf("%ld", &cc_number);
    }
    while (!(cc_number > 0));

    long working_cc = cc_number;
    int total = 0;


    while (working_cc > 0)
    {
        int last_digit = working_cc % 10;
        total = total + last_digit;
        working_cc = working_cc / 100;
    }

    working_cc = cc_number / 10;
    while (working_cc > 0)
    {
        int last_digit = working_cc % 10;
        int times_two = last_digit * 2;
        total = total + (times_two % 10) + (times_two / 10);
        working_cc = working_cc / 100;
    }

	if (total % 10 == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("No\n");
	}
}