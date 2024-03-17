#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//	printf("hello world\n");
//	return 0;
//}

//int main() {
//	//创建变量本质就是开辟了一段空间，赋值就是将值存入所开辟的空间
//	//开辟空间的单位是byte(字节),1byte=8bit，bit是用来存二进制数的。
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

//在VS2019使用scanf所遇到的错误 提示用sanf_s，scanf_s是VS自带的函数，不符合国际标准
// 不能够跨平台使用，为了该代码可以跨平台使用，需要在顶格加入#define _CRT_SECURE_NO_WARNINGS 1。
//错误	C4996	'scanf': This function or variable may be unsafe.
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

//测试指针*p,*p可以等于数组的第一个指吗？(*p = arr[0])
//提示“int *”与“int”的间接级别不同 得出p的数据类型是int*，数组的类型是int
//int main() {
//	int arr[2] = { 1,2 };
//	/*int *p = arr[0];
//	printf("%d\n", *p);*/
//	int* p = arr;
//	printf("%d\n", p);
//	return 0;
//}

//常量
//1.const 修饰的常变量，注意这里是常变量不是常量
//2.#define 定义的常量
//#define MAX 10
//int main() {
//	const int a = 10;
//	//a为常变量，并非常量
//	//int arr[a] = { 0 }; //报错，因为数组要求的是常量
//	int arr[MAX] = { 0 }; //正确，说明MAX是个常量
//
//}
//3.枚举类型
//注意枚举定义的枚举类型是有初值的
//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main() {
//	enum Sex s = FEMALE;
//	int arr[FEMALE] = { 0 }; //运行成功,说明FEMALE是常量
//	printf("%d\n", s); //运行成功s=1;
//	return 0;
//}

//调试 当程序运行出来时候 调试-->窗口-->监视
int main() {
	char arr[] = "hello";
	//arr1这个数组的长度不是3 因为没有"\0"字符串结束标识符
	//系统会一直从内存找'\0',然后结束
	char arr1[] = { 'a', 'b', 'c' };
	printf("%s\n", arr);
	printf("%s\n", arr1);
	return 0;
}
