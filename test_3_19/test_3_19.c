#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<math.h>

//演示多个字符从两端移动，向中间汇聚
//如###################################
//  C#################################d
//  C ###############################ld
//              ..........
//  C is the best language in the world
//int main() {
//	char arr[] = "C is the best language in the world";
//	char arr_[] = "###################################";
//	int left = 0;
//	int right = strlen(arr) - 1; //得到数组最后一位对应的数组下标
//	while (left <= right) {
//		arr_[left] = arr[left];
//		arr_[right] = arr[right];
//		printf("%s\n", arr_);
//		Sleep(1000); //睡眠1秒，这里的Sleep注意大写
//		system("cls");//清屏
//		left++;
//		right--;
//	}
//	printf("%s\n", arr_); //因为while循环会一直清屏，所以最后打印一遍结果
//	return 0;
//}

//模拟用户登录情景，用户只能输入3次密码，假设正确的密码是123456
//int main() {
//	char password[20] = { 0 }; //定义密码数组用来记录用户输入的密码
//	for (int i = 0; i < 3; i++) {
//		printf("请输入密码:>");
//		scanf("%s", password);
//注意不能使用"==",==比较的是两个字符串的首地址，而不是内容
//		if (strcmp(password, "123456") == 0) { 
//			printf("登陆成功!\n");
//			return 0;
//		}
//		else {
//			printf("密码错误，请重新输入！\n");
//		}
//	}
//	printf("3次密码错误,登录失败！\n");
//	return 0;
//}

//猜数字游戏

//菜单
//void menu() {
//	printf("************************\n");
//	printf("****    1.猜数字    ****\n");
//	printf("****    2.退出      ****\n");
//	printf("************************\n");
//}
//
//int main() {
//	int choice = 0;
//	int result = 0;
//	do {
//		menu();
//		printf("请输入你的选择:>");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			srand((unsigned int)time(NULL));
//			//生成随机数
//			result = rand() % 100 + 1; //生成随机数，rand()函数会调用srand()函数
//			while (1) {
//				int yourNumber = 0;
//				printf("请输入你猜的数:>");
//				scanf("%d", &yourNumber);
//				if (yourNumber > result) {
//					printf("猜大了!\n");
//				}
//				else if (yourNumber < result) {
//					printf("猜小了!\n");
//				}
//				else {
//					printf("猜对了!\n");
//					break;
//				}
//			}
//			break;
//		default:
//			printf("选择错误，请重新选择!\n");
//			break;
//		}
//	} while (choice);
//}

//函数调用
//交换两个数
//该函数并没有交换实参的值
//形参x y将实参a b的值拷贝了过来，然后交换了形参的值，最后函数调用完毕形参销毁
//并没有改变实参的值
//void swap(int x, int y) {
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//传地址实现实参交换
//void swap_(int* p, int* q) {
//	int z = 0;
//	z = *p;
//	*p = *q;
//	*q = z;
//	//交换指针并没有改变值
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

//判断一个数是不是素数
//void isPrime(int x) {
//	int n = 0; //计数 范围在1 - 根号x之间，如果n>1，则不是素数
//	//这里要写小于等于比如4 根号4=2 只有i小于2才会进入该循环
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0) {
//			n++;
//		}
//	}
//	if (n > 0) {
//		printf("该数不是素数!\n");
//	}
//	else {
//		printf("该数是素数！\n");
//	}
//}
//
//int main() {
//	int a = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &a);
//	isPrime(a);
//	return 0;
//}

//判断某年是否是闰年
//void is_leap_year(int year) {
//	if (year % 4 == 0 && year % 100 != 0) {
//		printf("该年是闰年!\n");
//	}
//	else if (year % 400 == 0) {
//		printf("该年是闰年!\n");
//	}
//	else {
//		printf("该年不是闰年!\n");
//	}
//}
//
//int main() {
//	int year = 0;
//	printf("输入年份:>");
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}