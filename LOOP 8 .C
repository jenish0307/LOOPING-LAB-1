#include<stdio.h>

main()
{
	int i,n,sum=0;
	
	printf("Enter value =");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum = sum + i;
		i++;
	}
		printf("%d\n",sum);
}