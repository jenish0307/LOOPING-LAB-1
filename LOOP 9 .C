#include<stdio.h>

main()
{
	int i=1,n,fact=1;
	
	printf("Enter value =");
	scanf("%d",&n);
	
	while(i<=n)
	{
		
		fact = fact * i;
		i++;
	}
		printf("%d\n",fact);
}