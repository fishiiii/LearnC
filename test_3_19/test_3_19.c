#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<math.h>

//��ʾ����ַ��������ƶ������м���
//��###################################
//  C#################################d
//  C ###############################ld
//              ..........
//  C is the best language in the world
//int main() {
//	char arr[] = "C is the best language in the world";
//	char arr_[] = "###################################";
//	int left = 0;
//	int right = strlen(arr) - 1; //�õ��������һλ��Ӧ�������±�
//	while (left <= right) {
//		arr_[left] = arr[left];
//		arr_[right] = arr[right];
//		printf("%s\n", arr_);
//		Sleep(1000); //˯��1�룬�����Sleepע���д
//		system("cls");//����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr_); //��Ϊwhileѭ����һֱ��������������ӡһ����
//	return 0;
//}

//ģ���û���¼�龰���û�ֻ������3�����룬������ȷ��������123456
//int main() {
//	char password[20] = { 0 }; //������������������¼�û����������
//	for (int i = 0; i < 3; i++) {
//		printf("����������:>");
//		scanf("%s", password);
//ע�ⲻ��ʹ��"==",==�Ƚϵ��������ַ������׵�ַ������������
//		if (strcmp(password, "123456") == 0) { 
//			printf("��½�ɹ�!\n");
//			return 0;
//		}
//		else {
//			printf("����������������룡\n");
//		}
//	}
//	printf("3���������,��¼ʧ�ܣ�\n");
//	return 0;
//}

//��������Ϸ

//�˵�
//void menu() {
//	printf("************************\n");
//	printf("****    1.������    ****\n");
//	printf("****    2.�˳�      ****\n");
//	printf("************************\n");
//}
//
//int main() {
//	int choice = 0;
//	int result = 0;
//	do {
//		menu();
//		printf("���������ѡ��:>");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			srand((unsigned int)time(NULL));
//			//���������
//			result = rand() % 100 + 1; //�����������rand()���������srand()����
//			while (1) {
//				int yourNumber = 0;
//				printf("��������µ���:>");
//				scanf("%d", &yourNumber);
//				if (yourNumber > result) {
//					printf("�´���!\n");
//				}
//				else if (yourNumber < result) {
//					printf("��С��!\n");
//				}
//				else {
//					printf("�¶���!\n");
//					break;
//				}
//			}
//			break;
//		default:
//			printf("ѡ�����������ѡ��!\n");
//			break;
//		}
//	} while (choice);
//}

//��������
//����������
//�ú�����û�н���ʵ�ε�ֵ
//�β�x y��ʵ��a b��ֵ�����˹�����Ȼ�󽻻����βε�ֵ���������������β�����
//��û�иı�ʵ�ε�ֵ
//void swap(int x, int y) {
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//����ַʵ��ʵ�ν���
//void swap_(int* p, int* q) {
//	int z = 0;
//	z = *p;
//	*p = *q;
//	*q = z;
//	//����ָ�벢û�иı�ֵ
//	/*int* z = NULL;
//	z = p;
//	p = q;
//	q = z;*/
//}

//int main() {
//	int a = 1;
//	int b = 2;
//	swap_(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//�ж�һ�����ǲ�������
//void isPrime(int x) {
//	int n = 0; //���� ��Χ��1 - ����x֮�䣬���n>1����������
//	//����ҪдС�ڵ��ڱ���4 ����4=2 ֻ��iС��2�Ż�����ѭ��
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0) {
//			n++;
//		}
//	}
//	if (n > 0) {
//		printf("������������!\n");
//	}
//	else {
//		printf("������������\n");
//	}
//}
//
//int main() {
//	int a = 0;
//	printf("������һ����:>");
//	scanf("%d", &a);
//	isPrime(a);
//	return 0;
//}

//�ж�ĳ���Ƿ�������
//void is_leap_year(int year) {
//	if (year % 4 == 0 && year % 100 != 0) {
//		printf("����������!\n");
//	}
//	else if (year % 400 == 0) {
//		printf("����������!\n");
//	}
//	else {
//		printf("���겻������!\n");
//	}
//}
//
//int main() {
//	int year = 0;
//	printf("�������:>");
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}