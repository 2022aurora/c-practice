//�����Ĵ���ֵ,������
#include <stdio.h>
//�������β�ʵ��:
/*
void addone(int a)
{
	a=a+1;
}
int main() {
	int a;
	a=10;
	addone(a);
	printf("a=%d\n",a);
	return 0;
}
*/
#include <stdio.h>

void addone(int *a) {
	*a = (*a) + 1;
}

int main() {
	int a;
	a = 10;
	addone(&a);
	printf("a=%d\n", a);
	return 0;
}


