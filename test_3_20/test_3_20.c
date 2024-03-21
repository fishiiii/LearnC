#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数的递归
//函数递归的必要条件：
//1.必须要有递归的终止条件 2.每次递归都要靠近终止条件

//问题1:将一个整数按照顺序打印 如输入123 打印1 2 3
//分析可知容易得到最后一位数
//void print(int n) {
//	if (n % 10 != 0) {
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//
//int main() {
//	int number = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &number);
//	print(number);
//	return 0;
//}


//问题2:编写函数不允许创建临时变量，计算字符串的长度
//int my_strlen(char* p) {
//	if (*p != '\0') {
//		//注意这里的递归参数不能写成p++，这个是先操作，然后再+1
//		//如果使用p++会照成死循环，导致栈溢出
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

//n的阶乘
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

//打印斐波那契数列的第n个数 1 1 2 3 5 ....
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
//	//设置3个数first表示第一个数 second表示第二个数 third表示第三个数
//	int first = 1;
//	int second = 1;
//	int third = 0;
//	if (n > 2) {
//		for (int i = 0; i < n - 2; i++) { //代表循环的次数
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
//	//该递归当传的值很大时，程序就执行的缓慢
//	//可见该方法效率很低
//	printf("%d\n", Fib_2(2));
//	return 0;
//}

//汉诺塔问题
void print(int n, char start, char temp, char end) {
	//如果只有1层汉诺塔,那么只要将这层汉诺塔从起始杆移动到结束杆
	if (n == 1)
		printf("%c->%c\n", start, end);
	else {
		//首先需要将n-1层移动到中转杆上面，然后将n层移动到目标杆
		print(n - 1, start, end, temp);
		printf("%c->%c\n", start, end);
		//将中转杆上的n-1个移动到目标杆 这次递归相当于变成n-1层汉诺塔如何移动到目标柱
		//前两个是每一层需要干什么
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


