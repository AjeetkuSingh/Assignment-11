//Assignment 11 sol 1//
/*
#include <stdio.h>
#include <conio.h>
void main()
{
    int num1, num2, max_div, flag = 1;
    // accept any two positive number from the user
    printf( " Enter any two positive numbers to get the LCM \n ");
    scanf(" %d %d", &num1, &num2);

    // max_div variable holds the max divisible number between num1 and num2.
    max_div = (num1 > num2) ? num1 : num2;

    while (flag) // (flag = 1)
    {
        if (max_div % num1 == 0 && max_div % num2 == 0)
        {
            printf( " The LCM of %d and %d is %d. ", num1, num2, max_div);
            break;
        }
        ++max_div; // pre-increment max_div
    }
}
*/

//Sol 2//
/*
#include<stdio.h>

int main()
{
    int num1 = 36, num2 = 60, hcf = 1;

    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0)
            hcf = i;
    }

    printf("The HCF: %d", hcf);

    return 0;
}
*/

//sol 3//
/*
#include <stdio.h>
#include <conio.h>
void main()
{
	int num,res=0;

	printf("\nENTER A NUMBER: ");
	scanf("%d",&num);
	res=prime(num);
	if(res==0)
		printf("\n%d IS A PRIME NUMBER",num);
	else
		printf("\n%d IS NOT A PRIME NUMBER",num);
	getch();
}
int prime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
*/

//Sol 4//
/*
#include<stdio.h>
int main()
{
   int n,i,j,flag=0,out;

   printf("enter the num\n");

   scanf("%d",&n);

   for(i=n+1;i<=100;i++)
   {

      flag=0;

      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }

      if(flag==0)
      {
         printf("next prime is:%d",i);
         break;
      }
   }

   getch();

}
*/

//Sol 5//
/*
#include <stdbool.h>
#include <stdio.h>

// function to check if a given number is prime
bool isPrime(int n)
{
	// since 0 and 1 is not prime return false.
	if (n == 1 || n == 0)
		return false;

	// Run a loop from 2 to n-1
	for (int i = 2; i < n; i++) {
		// if the number is divisible by i, then n is not a
		// prime number.
		if (n % i == 0)
			return false;
	}
	// otherwise, n is prime number.
	return true;
}

// Driver code
int main()
{
	int N = 100;

	// check for every number from 1 to N
	for (int i = 1; i <= N; i++) {
		// check if current number is prime
		if (isPrime(i))
			printf("%d ", i);
	}

	return 0;
}
*/

//Sol 6//
/*
#include <stdio.h>
int checkPrimeNumber(int n);
int main() {

  int n1, n2, i, flag;

  printf("Enter two positive integers: ");
  scanf("%d %d", &n1, &n2);

  // swap n1 and n2 if n1 > n2
  if (n1 > n2) {
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
  }

  printf("Prime numbers between %d and %d are: ", n1, n2);
  for (i = n1 + 1; i < n2; ++i) {

    // flag will be equal to 1 if i is prime
    flag = checkPrimeNumber(i);

    if (flag == 1) {
      printf("%d ", i);
    }
  }

  return 0;
}

// user-defined function to check prime number
int checkPrimeNumber(int n) {
  int j, flag = 1;

  for (j = 2; j <= n / 2; ++j) {

    if (n % j == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}
*/

//Sol 7//
/*
#include <stdio.h>

// Function to print
// first n Fibonacci Numbers
void printFibonacciNumbers(int n)
{
	int f1 = 0, f2 = 1, i;

	if (n < 1)
		return;
	printf("%d ", f1);
	for (i = 1; i < n; i++) {
		printf("%d ", f2);
		int next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
}

// Driver Code
int main()
{
	printFibonacciNumbers(7);
	return 0;
}
*/

//Sol 8//
/*
#include<stdio.h>
long factorial(int);
int main()
{
    int i, n, c;
    printf("Enter the number of rows you wish to see in pascal triangle\n");
    scanf("%d", & n);
    for (i = 0; i < n; i++) {
        for (c = 0; c <= (n - i - 2); c++) printf(" ");
        for (c = 0; c <= i; c++) printf("%ld ", factorial(i) / (factorial(c) * factorial(i - c)));
        printf("\n");
    }
    return 0;
}
long factorial(int n) {
    int c;
    long result = 1;
    for (c = 1; c <= n; c++) result = result * c;
    return result;
}
*/

//Sol 9//
/*
#include<stdio.h>
//function to calculate square of number
float squareOfNumber(float num)
{
    return (num*num);
}
int main()
{
    float number, square;
    printf("Please Enter any integer Value : ");
    scanf("%f", &number);
    square = squareOfNumber(number);
    printf("square of a given number %.2f is  =  %.2f", number, square);
    return 0;
}
*/

//sol 10//
#include <stdio.h>

int fact(int);
void main()
{
    int sum;
    sum=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
	printf("\n\n Function : find the sum of 1!/1+2!/2+3!/3+4!/4+5!/5 :\n");
	printf("----------------------------------------------------------\n");
    printf("The sum of the series is : %d\n\n",sum);
}

int fact(int n)
    {
        int num=0,f=1;
        while(num<=n-1)
        {
            f =f+f*num;
            num++;
        }
    return f;
    }
