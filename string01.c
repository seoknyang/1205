#include<stdio.h>
int main()
{
	char a[4] = {'a','b','c','\0'};
	char b[] ="abc";
	char c[8] ="abcdefg";
	char *p = "abcdefg";
	char q[20];
	int i;
	
	printf("%s\n", a);
	printf("%s b�迭�� ũ�� = %d\n", b, sizeof(b));
	printf("%s\n",c);
	printf(p);
	printf("\n");
	
	for(i=0; i<8; i++)
		printf("%c", *(p+i));		//printf("%c", *(p+i));
	
	printf("�̸� �Է� : ");
	scanf("%s",q);
	
	printf("%c\n", q[0]);
	printf("%s�� �ݰ����ϴ�.\n", q);
	
	return 0;
}
