#include<stdio.h>
int main()
{
	int i = 6;
	int *p; //������ ������ �ּҸ� ��� ������ 
	int **dp; //Ÿ�Կ� ������� ũ��(size)�� 4����Ʈ�Դϴ�. 
	
	p = &i; //i��*p
	dp = &p; //p��*dp 
	
	printf("%x %x %x\n", &i, &p, &dp);
	printf("%x %x %x\n", i, p, dp);
	printf("%d %d %d\n", i, *p, **dp);
	printf("%x %x\n", p+1, p-1); 
	
	return 0; 
}
