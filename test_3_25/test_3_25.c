#include<stdio.h>

//arr[2]��ֵ����2[arr]
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);
//	return 0;
//}

//����ָ��
//int main() {
//	//ָ��int *pa��*pa����pa�Ǹ�ָ�� int����ָ���д�ŵ���������
//	int a = 10;
//	int* pa = &a;
//	//ͬ��int** ppa��int* �Ǵ�ŵ���������
//	int** ppa = &pa;
//	return 0;
//}

//�ṹ��
//struct A {
//	int a;
//	float b;
//	double c;
//};
//struct B {
//	struct A aa;
//	int e;
//	char f;
//};
//
//void print(struct B bb) {
//	printf("{%d %lf %f}, %d, %c\n", bb.aa.a, bb.aa.b, bb.aa.c, bb.e, bb.f);
//}
//
//void printB(struct B* p) {
//	printf("{%d %lf %f}, %d, %c\n", p->aa.a, p->aa.b, p->aa.c, p->e, p->f);
//}
//
//int main() {
//	struct B bb = { { 1, 1.2, 3.14}, 10, 'k' };
//	//print()��printB()һ���Ǵ�ֵ��һ���Ǵ�ַ
//	//printҪ��ջ��ʹ�úܶ�ռ�����ű��������������Ա�ֵ֤�İ�ȫ��
//	//printB���ʡ�˺ܶ�ռ䣬���ǵ����˿��������޸�ֵ��ȱ����ȫ��
//	print(bb);
//	printB(&bb);
//	return 0;
//}

//����
int main() {
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	for (i = 0; i <= 9; i++) {
		arr[i] = 0;
		printf("hello\n");
	}
	return 0;
}