#include<stdio.h>
int r;
float a;
main()
{
	const float pi=3.1416;
	while (r<=0)
	{
	  printf("Introduce el radio del circulo\n");
	  scanf("%d",&r);
    }
      a=pi*r*r;
      printf("\nEl area del circulo es:\n%f",a);
    
}
