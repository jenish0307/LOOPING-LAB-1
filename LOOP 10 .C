#include<stdio.h>

main()
{
	int i=1,n,fact=1;
	
	printf("Enter number =");
	scanf("%d",&n);
	
	printf("multiplication table of %d \n",n);
	while(i<=10)
	{
		printf("%d x %d =%d\n",n,i,i*n);
		i++;
	}
}