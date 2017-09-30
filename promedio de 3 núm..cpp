#include<stdio.h>
int a=1;
float cont=0,num,p=0;
main()
{
	while (a<4)
	{
		printf("Dame el valor de %d:",a);
		scanf("%f",&num);
		cont=(cont+num);
		a++;
	}
  double p=(double)cont/3;
  printf("\n el promedio de los 3 numeros es:%f",p);
}
