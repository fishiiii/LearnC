#include<stdio.h>


//һά�������ά����
//һλ�������ά���鶼�����ڴ���������ŵ�
//һ������arr,&arr��arr����������--&arr���������������ĵ�ַ,arr������ǵ�һ��Ԫ�صĵ�ַ
//����sizeof(arr)���������������ĳ��ȣ������ǵ�һ��Ԫ�صĳ���
//void bubble_sort(int arr[], int length) {
//	int temp = 0;
//	//ð������:ÿ��ð�ݶ���ó�һ�����ֵ������Сֵ
//	for (int i = 0; i < length - 1; i++) { //������Ҫð�ݼ���
//		for (int j = 0; j < length - i - 1; j++) { //ÿ��ð��
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void print(int arr[], int length) {
//	for (int i = 0; i < length; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//int main() {
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, length);
//	print(arr, length);
//	return 0;
//}


//��λ���롱������(��λֻ��ͬΪ1��Ϊ1)
//��λ���򡱲�����(��1Ϊ1)
//��λ����򡱲�����(��ͬΪ0����ͬΪ1)
//int main() {
//	int a = 5;
//	//a�Ķ�����00000000 00000000 00000000 00000101
//	//b�Ķ�����00000000 00000000 00000000 00001000
//	//��֪a & b = 0    a | b = 13  a ^ b = 13 
//	int b = 8;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}

//������������������������ֵ
//����1���Ӽ��� ������������̫����ܻ����
//int main() {
//	int a = 5;
//	int b = 3;
//	printf("a = %d, b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d, b = %d\n", a, b);
//}
//
////����2����� ����������Ŀ���
//int main() {
//	int a = 5;
//	int b = 5;
//	printf("a = %d, b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//}

//��һ�������洢���ڴ��еĶ�������1�ĸ���
//˼·:�������һ�������ƶ���1�����롱���㣬�������1˵�����һλ��1
//int main() {
//	int a = 20; //10100
//	int b = a;
//	int count = 0;
//	//32��λ�ƶ�������intռ4�ֽ� = 32��bitλ
//	for (int i = 0; i < 32; i++) {
//		if ((a & 1) == 1) {
//			count++;;
//		}
//		a = (a >> 1);
//	}
//	printf("%d�Ķ���������%d��1\n", b, count);
//	return 0;
//}