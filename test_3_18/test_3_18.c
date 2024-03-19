#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 100
//#define ADD(x, y) x + y
//改成((x)+(y))
#define ADD(x, y) ((x)+(y))
//静态变量
//static修饰的局部变量，会改变局部变量的生命周期(本质上是改变了变量的存储位置)
//局部变量存储在内存中的栈区，static修饰后会转入静态区
//void test() {
//	//int a = 0; //此时的a在函数调用结束后会被销毁
//	static int a = 0; //将a放入静态区，作用到整个项目结束
//	printf("%d ", a);
//	a++;
//}
//int main() {
//	int a = 0;
//	while (a < 10) {
//		test();
//		a++;
//	}
//	return 0;
//}

//全局变量存在于整个项目中
//不同文件使用时需要申明
//extern int test;
//int main() {
//	printf("%d\n", test);
//	return 0;
//}

//extern int sum(int a, int b);
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	c = sum(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//define定义的常量与宏
//int main() {
//	int a = 1;
//	int b = 2;
//	printf("%d\n", MAX);
//	//define定义的宏本质上是替换，比如4*ADD = 4*x+y
//	//如果想要变成4*(x+y)需要在定义时加上括号
//	//要把x,y想成表达式
//	printf("%d\n", 4 * ADD(1, 2));
//	return 0;
//}

//指针
//32位来划分地址，内存能被划分出2^32个
//32位，每个地址能存储1kb=8bit，所以最大容量是2^32kb=4GB
//int main() {
//	int a = 0;
//	int* p = &a; //&a用来取a的地址，*说明p是指针变量，int代表指针指向的对象类型
//	*p = 20; //这里的*是解引用操作，是根据地址找到a并将值修改为20
//	printf("%d\n", a);//此时a的值被修改成20
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	//指针的大小在32位机器上是4kb 在64位则是8kb
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	return 0;
//}

//结构体
//struct Stu {
//	char name[20];
//	char sex[2];
//	int age;
//};
//
//int main() {
//	struct Stu s = { "张三", "kk", 30 };//结构体的创建和初始化
//	printf("%s %s %d\n", s.name, s.sex, s.age); //结构体变量.成员变量
//	//结构体指针
//	struct Stu* p = &s;
//	printf("%s %s %d\n", (*p).name, (*p).sex, (*p).age);
//	printf("%s %s %d\n", p->name, p->sex, p->age);
//	return 0;
//}

//分支语句
//else与他最近的if匹配
//输出100以内的奇数
//int main() {
//	int i = 0;
//	while (i <= 100) {
//		if (i % 2 != 0) {
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}

//switch语句
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		break;
//	}
//}

//getchar()函数与putchar()函数
//int main() {
//	int ch = getchar(); //getchar()从缓冲区拿一个字符
//	while (ch != EOF) {
//		putchar(ch);//输出字符
//		ch = getchar();
//	}
//	return 0;
//}

//int main() {
//	char password[20] = { 0 };
//	int ch = 0;
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//scanf()会读取空格或者回车之前的数据
//	//当打出123 567时，password的值为123，此时缓冲区中还有\n567这4位
//	//接着getchar()会读取一个字符\n,使得ch='\n',所以输出"确认失败"
//	printf("请确认密码(Y/N):>");
//	//在读入字符之前清除缓冲区
//	//这里如果设置为EOF这会一直循环下去，因为读到EOF
//	//接着有是输入字符 然后循坏又继续起来
//	while (ch = getchar() != '\n') {
//		;
//	}
//	ch = getchar();//再读一次
//	if (ch == 'Y') {
//		printf("确认成功");
//	}
//	else {
//		printf("确认失败");
//	}
//	return 0;
//}

//for循环
//int main() {
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++) {
//		//这里的hello会打印3次，因为j++到3后就不会打印了
//		//而进入for循环后j值并没有给初始值0，也就是恒为3
//		//所以i=2和3时,j都不满足j<3
//		for (; j < 3; j++) {
//			printf("hello\n");
//		}
//	}
//	return 0;
//}

//int main() {
//	//这段语句一次都不会执行，因为k=0是判断语句且恒为假
//	for (int i = 0, j = 0, k = 0; k = 0; k++) {
//		printf("hello\n");
//	}
//	return 0;
//}

//n的阶乘
//int factorial(int n) {
//	int result = 1;
//	for (int i = 1; i < n + 1; i++) {
//		result = result * i;
//	}
//	return result;
//}
//int main() {
//	int n = 5;
//	int result = 0;
//	result = factorial(5);
//	printf("%d\n", result);
//	return 0;
//}

//不适用函数
//int main() {
//	int result = 1;
//	for (int i = 0; i < 5; i++) {
//		result = result * (i + 1);
//	}
//	printf("%d\n", result);
//	return 0;
//}

//1-10各自阶乘的和
//int main() {
//	int sum = 0;
//	for (int i = 0; i < 10; i++) {
//		sum = sum + factorial(i + 1);
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//有序数组在0-n范围内寻找某个数对应的数组下标
//这种方式不好，因为0-4，第一次分配half值为3
//不满足时区间应该不包括half这个值
//int binsearch(int x, int v[], int n) {
//	int half = (n - 1) / 2;
//	for (int i = 0, j = n - 1; i < j;) {
//		if (v[half] > x) {
//			j = half;
//			half = (half - 1) / 2;
//		}
//		else if (v[half] < x) {
//			i = half;
//			half = (j + i) / 2;
//			//出现下表是3 4的情况 half经过运算后没变就会陷入死循环
//			//让half不变时强制+1，此时i、j的值都等于4循环结束
//			if (half == i) {
//				half = half + 1;
//			}
//		}
//		else {
//			return half;
//		}
//	}
//	return -1;
//}

//
int binsearch_2(int x, int v[], int n) {
	//half表示比较区间最中间的数的数组下标
	int half = 0;
	//left right代表数组下标
	int left = 0;
	int right = n - 1;
	while (left <= right) {
		half = (left + right) / 2;
		if (v[half] > x) {
			right = half - 1;
		}
		else if (v[half] < x) {
			left = half + 1;
		}
		else {
			return half;
		}
	}
	//返回-1代表该数组没有要找的数
	return -1;
}


int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int x = 0;
	int n = 5;
	int result = binsearch_2(x, arr, n);
	printf("%d\n", result);
	return 0;
}
