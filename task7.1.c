#include<stdio.h>
 
int main()
{
int a = 0, b = 0;
 
printf("\nUpisite prvi cijeli broj: ");
scanf("%d", &a); // Get first number
printf("\nUpisite drugi cijeli broj: ");
scanf("%d", &b); // Get second number
 
if (a > b) printf("\nBroj %d je veci od broja %d\n",a, b);
else if(a < b) printf("\nBroj %d je veci od broja %d\n", b, a);
else printf("\nBrojevi su jednaki !\n");
 
return 0;
}
