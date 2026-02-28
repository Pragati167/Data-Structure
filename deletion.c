#include <stdio.h>
int main(){
	int a[10], pos,n=8, element, i;
	printf("Enter the element of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the pos: ");
	scanf("%d", &pos);
	for(i=pos-1; i<n-1; i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("Array after Deletion: ");
	for(i=0; i<10; i++)
	{
		printf("%d ", a[i]);
	}
	
	
	
	return 0;
}
