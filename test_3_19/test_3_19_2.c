//#include<stdio.h>
//#include "../test_1/test_1/sub.h"
////函数声明的用法
////函数声明一般放在.h文件下 一个.h对应一个.c
////当某人写了一个函数，但是不想让使用着知道他的函数是如何实现的
////那么只要将项目名右键-->配置-->配置属性-->常规-->配置类型改成静态库
////那么在编译时候就会在debug文件夹下生成.lib文件，
////将.lib文件和.h文件交给使用着,使用着将其放入项目文件夹下便可使用
////首先手动导入.h到项目中
////导入lib文件到该项目
//#pragma comment(lib, "test.lib")
//int main() {
//	int a = 1;
//	int b = 4;
//	int sum = sub(a, b);
//	printf("%d", sum);
//	return 0;
//}


