#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//	printf("hello world\n");
//	return 0;
//}

//int main() {
//	//�����������ʾ��ǿ�����һ�οռ䣬��ֵ���ǽ�ֵ���������ٵĿռ�
//	//���ٿռ�ĵ�λ��byte(�ֽ�),1byte=8bit��bit����������������ġ�
//	char ch;
//	short sh = 0;
//	int a = 0;
//	long b = 0;
//	long long c = 0;
//	float d = 0.1;
//	double e = 0.2;
//	printf("%d\n", sizeof(ch));
//	printf("%d\n", sizeof(sh));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(d));
//	printf("%d\n", sizeof(e));
//	return 0;
//}

//��VS2019ʹ��scanf�������Ĵ��� ��ʾ��sanf_s��scanf_s��VS�Դ��ĺ����������Ϲ��ʱ�׼
// ���ܹ���ƽ̨ʹ�ã�Ϊ�˸ô�����Կ�ƽ̨ʹ�ã���Ҫ�ڶ������#define _CRT_SECURE_NO_WARNINGS 1��
//����	C4996	'scanf': This function or variable may be unsafe.
//Consider using scanf_s instead.To disable deprecation, use _CRT_SECURE_NO_WARNINGS.
//int main() {
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//����ָ��*p,*p���Ե�������ĵ�һ��ָ��(*p = arr[0])
//��ʾ��int *���롰int���ļ�Ӽ���ͬ �ó�p������������int*�������������int
//int main() {
//	int arr[2] = { 1,2 };
//	/*int *p = arr[0];
//	printf("%d\n", *p);*/
//	int* p = arr;
//	printf("%d\n", p);
//	return 0;
//}

//����
//1.const ���εĳ�������ע�������ǳ��������ǳ���
//2.#define ����ĳ���
//#define MAX 10
//int main() {
//	const int a = 10;
//	//aΪ�����������ǳ���
//	//int arr[a] = { 0 }; //������Ϊ����Ҫ����ǳ���
//	int arr[MAX] = { 0 }; //��ȷ��˵��MAX�Ǹ�����
//
//}
//3.ö������
//ע��ö�ٶ����ö���������г�ֵ��
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main() {
//	enum Sex s = FEMALE;
//	int arr[FEMALE] = { 0 }; //���гɹ�,˵��FEMALE�ǳ���
//	printf("%d\n", s); //���гɹ�s=1;
//	return 0;
//}

//���� ���������г���ʱ�� ����-->����-->����
int main() {
	char arr[] = "hello";
	//arr1�������ĳ��Ȳ���3 ��Ϊû��"\0"�ַ���������ʶ��
	//ϵͳ��һֱ���ڴ���'\0',Ȼ�����
	char arr1[] = { 'a', 'b', 'c' };
	printf("%s\n", arr);
	printf("%s\n", arr1);
	return 0;
}
