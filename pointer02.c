#include<stdio.h>
int main()
{
	int a[] = {10, 20, 30, 40, 50}; //�迭�̸����� �迭�� �����ּҰ� �ڵ����� �Ҵ�  
	int *p, i=1; 
	
	p = &i;
	printf("%d %x\n", i, p);
	
	p = a;		//�迭�̸����� �ּҰ� �ֱ� ������ ������ ������ ������ ������  
	printf("%d %x %x\n", a[10], a, p);
	printf("%d %d %d\n", a[0], *p); 
	
	for(i=0; i<5; i++)
		printf("%d\n", a[i]);
		
	for(i=0; i<5; i++)
		printf("%d\n", *(p+i));
		
	for(i=0; i<5; i++)
		printf("%d\n", p[i]);
	
	return 0;
}
