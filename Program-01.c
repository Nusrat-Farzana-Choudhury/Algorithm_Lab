#include <stdio.h>
int main()
{
	int search, i, n;
	//int count=0;

	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	int a[n]; //array initialization

	printf("\nEnter %d integer(s):\n",n);

	for (i=0; i<n; i++)
	{
		printf("Index-%d: ",i);
		scanf("%d",&a[i]);
	}

	printf("\nEnter an element to be searched for: ");
	scanf("%d",&search);
	printf("\n----Search result----\n");
	for (i=0; i<n; i++)
	{
		//count++;
		if (a[i]==search)   /* If required element is found */
		{
			printf("The element is present at index %d.\n",i);
			break;
		}
	}
	if (i==n)
	{
		printf("%d is not present in the array.\n",search);
	}
	//Code for determining time complexity:
	/*printf("\nTime complexity: O(%d)",count);
	if(count==1){
		printf("\nThis is the best case complexity!!!");
	}
	else if(count==n){
		printf("\nThis is the worst case complexity!!!");
	}
	else if(n%2==0){
		if(count==(n/2)){
			printf("\nThis is the average case complexity!!!");
	}
	}
	else if(n%2!=0){
		if((count==(n/2))||(count==(n/2)+1)){
			printf("\nThis is the average case complexity!!!");
	}
	}*/
	return 0;
}
