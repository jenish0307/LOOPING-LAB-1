#include<stdio.h>

main()

{
	int i=1,n;
	printf("enter value for =");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}	
}