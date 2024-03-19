int test = 10;
//加入static修饰的全局变量，其作用范围从整个项目变为该.c文件，其他.c文件不能用
//全局变量在其他源文件内可以使用，是因为它具有外部链接属性
//被static修饰后就变成内部链接属性，其他源文件就不能调用了
//被static修饰的函数也是如此
//static int test = 10;

int sum(int a, int b) {
	int sum = 0;
	sum = a + b;
	return sum;
}