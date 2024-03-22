#include<stdio.h>


//一维数组与二维数组
//一位数组与二维数组都是在内存中连续存放的
//一个数组arr,&arr与arr的区别在于--&arr代表的是整个数组的地址,arr代表的是第一个元素的地址
//但是sizeof(arr)代表的是整个数组的长度，而不是第一个元素的长度
//void bubble_sort(int arr[], int length) {
//	int temp = 0;
//	//冒泡排序:每次冒泡都会得出一个最大值或者最小值
//	for (int i = 0; i < length - 1; i++) { //代表需要冒泡几次
//		for (int j = 0; j < length - i - 1; j++) { //每次冒泡
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


//按位“与”操作符(对位只有同为1才为1)
//按位“或”操作符(有1为1)
//按位“异或”操作符(相同为0，不同为1)
//int main() {
//	int a = 5;
//	//a的二进制00000000 00000000 00000000 00000101
//	//b的二进制00000000 00000000 00000000 00001000
//	//可知a & b = 0    a | b = 13  a ^ b = 13 
//	int b = 8;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d\n", c);
//	printf("%d\n", d);
//	printf("%d\n", e);
//	return 0;
//}

//不创建变量交换两个整数的值
//方法1：加减法 如果两个数相加太大可能会溢出
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
////方法2：异或法 不会有溢出的可能
//int main() {
//	int a = 5;
//	int b = 5;
//	printf("a = %d, b = %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//}

//求一个整数存储在内存中的二进制中1的个数
//思路:将这个数一次向右移动与1做“与”运算，如果等于1说明最后一位是1
//int main() {
//	int a = 20; //10100
//	int b = a;
//	int count = 0;
//	//32次位移动次数，int占4字节 = 32个bit位
//	for (int i = 0; i < 32; i++) {
//		if ((a & 1) == 1) {
//			count++;;
//		}
//		a = (a >> 1);
//	}
//	printf("%d的二进制数有%d个1\n", b, count);
//	return 0;
//}