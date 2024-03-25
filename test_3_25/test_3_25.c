#include<stdio.h>

//arr[2]的值等于2[arr]
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);
//	return 0;
//}

//二级指针
//int main() {
//	//指针int *pa中*pa代表pa是个指针 int代表指针中存放的数据类型
//	int a = 10;
//	int* pa = &a;
//	//同理int** ppa中int* 是存放的数据类型
//	int** ppa = &pa;
//	return 0;
//}

//结构体
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
//	//print()与printB()一个是传值，一个是传址
//	//print要在栈区使用很多空间来存放变量，但是他可以保证值的安全性
//	//printB则节省了很多空间，但是当别人可以随意修改值，缺乏安全性
//	print(bb);
//	printB(&bb);
//	return 0;
//}

//调试
int main() {
	int i = 0;
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	for (i = 0; i <= 9; i++) {
		arr[i] = 0;
		printf("hello\n");
	}
	return 0;
}