#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����ĵݹ�
//�����ݹ�ı�Ҫ������
//1.����Ҫ�еݹ����ֹ���� 2.ÿ�εݹ鶼Ҫ������ֹ����

//����1:��һ����������˳���ӡ ������123 ��ӡ1 2 3
//������֪���׵õ����һλ��
//void print(int n) {
//	if (n % 10 != 0) {
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int main() {
//	int number = 0;
//	printf("������һ������:>");
//	scanf("%d", &number);
//	print(number);
//	return 0;
//}


//����2:��д��������������ʱ�����������ַ����ĳ���
//int my_strlen(char* p) {
//	if (*p != '\0') {
//		//ע������ĵݹ��������д��p++��������Ȳ�����Ȼ����+1
//		//���ʹ��p++���ճ���ѭ��������ջ���
//		return 1 + my_strlen(p + 1);
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	char arr[] = "abcde";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//n�Ľ׳�
//int fac(int x) {
//	if (x > 1) {
//		return x * fac(x - 1);
//	}
//	else {
//		return 1;
//	}
//}
//
//int main() {
//	int n = 5;
//	printf("%d\n", fac(5));
//	return 0;
//}

//��ӡ쳲��������еĵ�n���� 1 1 2 3 5 ....
//int Fib(int n) {
//	if (n > 2) {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else {
//		return 1;
//	}
//}
//
//int Fib_2(int n) {
//	//����3����first��ʾ��һ���� second��ʾ�ڶ����� third��ʾ��������
//	int first = 1;
//	int second = 1;
//	int third = 0;
//	if (n > 2) {
//		for (int i = 0; i < n - 2; i++) { //����ѭ���Ĵ���
//			third = first + second;
//			first = second;
//			second = third;
//		}
//	}
//	else {
//		return 1;
//	}
//	return third;
//}
//
//int main() {
//	//�õݹ鵱����ֵ�ܴ�ʱ�������ִ�еĻ���
//	//�ɼ��÷���Ч�ʺܵ�
//	printf("%d\n", Fib_2(2));
//	return 0;
//}

//��ŵ������
void print(int n, char start, char temp, char end) {
	//���ֻ��1�㺺ŵ��,��ôֻҪ����㺺ŵ������ʼ���ƶ���������
	if (n == 1)
		printf("%c->%c\n", start, end);
	else {
		//������Ҫ��n-1���ƶ�����ת�����棬Ȼ��n���ƶ���Ŀ���
		print(n - 1, start, end, temp);
		printf("%c->%c\n", start, end);
		//����ת���ϵ�n-1���ƶ���Ŀ��� ��εݹ��൱�ڱ��n-1�㺺ŵ������ƶ���Ŀ����
		//ǰ������ÿһ����Ҫ��ʲô
		print(n - 1, temp, start, end);
	}
}

int main() {
	int n = 5;
	char a = 'a';
	char b = 'b';
	char c = 'c';
	print(n, a, b, c);
	return 0;
}


