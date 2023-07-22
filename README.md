# luhn-algorithm

Luhn Algorithm, also known as ‘modulus 10’ or ‘mod 10’ algorithm, is a mathematical formula for validating identification numbers for credit cards, IMEI, social security numbers, corporate identification numbers, etc. This checksum formula is widely utilized today, especially to facilitate online payments by detecting accidental input errors of identification numbers.

# Implementation

This is implementation of the algorithm using c programming language

American Express numbers start with 34 or 37 -> 15-digit numbers

MasterCard numbers start with 51, 52, 53, 54, or 55 -> 16-digit numbers

Visa numbers start with 4 -> Visa uses 13 and 16 digit numbers

4003600000000014

4003600000000014 % 10 = 4;
4003600000000014 / 100 = 40036000000000
Final sum = 7 + 13 = 20

20 % 10 = 0
5 % 2 = 1

1st case:
1.Iterate through the CC number
2. Use modulo to get the last digit
3. Add last digit to sum
4. Divide the CC number by 100
5. Repeat

2nd Case:

1. Divide the CC number by 10
2. Iterate through the CC number
3. Use modulo to get the last digit
4. Add last digit multiplied by 2 to sum
5. repeat
