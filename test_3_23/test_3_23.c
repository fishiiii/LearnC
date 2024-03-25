#include<stdio.h>

//指针
//指针用来存放地址，32位的指针占4byte,64位的指针占8byte
//注意:4byte指针和8byte指针都是存放内存编号的，一片内存的大小是1byte
//指针类型
//虽然指针的大小在32位的机器上恒为4byte，看似与它的类型并无关系
//比如int*、char*他们都是4byte，但是指针的类型决定了指针每走一步的距离，即步长
//也决定了解引用时它们能对数据的修改权限
//比如int的变量，用char*的指针存放该地址，但是当解引用时候它只能修改8bit的长度
//int main() {
//	int a = 0x12345678;
//	char* p = &a;
//	*p = 0;
//	printf("%p", a); //得出a=0x12345600
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };
//	char* p = arr;
//	*p = 1; //将最后一位改为1
//	printf("%d\n", arr[0]);
//	return 0;
//}

//野指针
//1.没有初始化的指针变量
//2.指针指向数组下标越界的地址
//3.指针所指向的内存空间被释放
//int main() {
//	int* p; //p没有放地址，会随机找一片地址传给它
//	*p = 20; //对p解引用就是非法访问内存单元
//	return 0;
//}

//指针所指向的内存空间被释放
//int* test() {
//	int a = 0;
//	return &a;
//}
//
//int main() {
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//指针之间的大小比较
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int* p = arr;
//	int count = 0;
//	while (p < &arr[7]) { //当指针地址大小小于arr[7]的地址时
//		p++;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//数组里两个地址的差值代表的是两指针间的元素个数，而非地址的差值
// 注意指针相减要保证两个指针都指向同一空间
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	int* q = arr + 5;
//	printf("%d\n", q - p);
//	return 0;
//}

//求字符串的长度
//思路：只要拿到'\0'的地址然后减去首地址就是字符串的长度
//int my_strlen(char* str) {
//	char* p = str;
//	while (*p != '\0') {
//		p++;
//	}
//	return p - str;
//}
//int main() {
//	printf("%d\n", my_strlen("abc"));
//	return 0;
//}