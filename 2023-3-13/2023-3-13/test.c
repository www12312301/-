#define _CRT_SECURE_NO_WARNINGS 1
//写代码
//1.写出主函数（main函数）
//100-500代码


//printf-库函数-在屏幕上打印信息的
//printf的使用，也得打招呼（引用头文件stdio.h）



#include<stdio.h>
//int main()
//{
//    printf("hehe\n");
//    return 0;
//}
//编译＋链接+运行代码
//1.快捷键：ctrl+F5
//2.菜单中：调试→开始执行不调试
//3.fn+ctrl+f5


//数据类型
//计算机语言-写程序-解决生活中问题

//小数-浮点型
//整数-整型



//char   字符数据类型
//short  短整型
//int  整形
//long  长整型
//long  long  更长的整形
//float   单精度浮点数
//double  双精度浮点数

//a
//"a"-字符a

//int main()
//{
//    //字符类型
//    char ch = 'a';
//    //整形
//    int age=20;
//    //短整型
//    short num = 100;
//    //long
//    //long long
//    //单精度浮点型
//    float weight = 55.5;
//   //双精度浮点型
//    double d = 0.0;
//
//    return 0;
//
//}


//int main()
//{
//    //printf("hehe\n");
//    //printf("%d\n", 100);//打印一个整数 -%d
// 
//    //sizeof - 关键字-操作符-计算类型或者变量所占空间的大小
//    //
//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//    
//    
//    
//    return 0;
//
//
////}
//
//int main()
//{
//	//创建的一个变量
//	//类型 变量的名字=0；
//	//类型变量的名字；
//
//	
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//
//}
//
////%d-整型
////%f-float

//全局变量在{}外面定义的
//int a = 100;
//
//int main()
//{
//	//局部变量在{}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议把全局变量和局部变量的名字一致
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
//

//写一个代码求2个整数的和
//scanf函数是输入函数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//
//}



//作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程
//
//
//int g_val = 2023;//全局变量
//
////声名一下变量
//extern int wang;
//
//int main()
//
//{
//
//	printf("2:%d\n", g_val);
//	{
//		printf("1:%d\n", g_val);
//
//
//		int a = 10;
//
//		printf("%d\n", wang);
//
//		printf("a = % d\n", a);
//	
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//
//}


//生命周期
//变量的生命周期：变量的创建和销毁的时间段
//
//局部变量的生命周期:进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：整个程序的生命周期



//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	return 0;
//
//}

//常量
//字面常量
//int main()

//#define MAX 10000000

//{
	/*3.14;
	10;
	'a';
	'aaac';*/

	//2.const修饰的常变量
	//被const修饰的常变量不能更改
	//const int num = 10;//常变量-具有常属性（不能改变的属性）
	//num = 20;
	//printf("num=%d\n", num);//20


	//int arr[10] = { 0 };//10个元素

	//const int n = 10;
	//int arr[n] = { 0 };//n是变量的，这里是不行



	//3.#define定义的标识符常量

	//int n = MAX;
	//printf("%d\n", n);



	//4.枚举常量
	//可以一一列举的常量
	//return 0;
//}

//性别
enum Sex
{
	//这种枚举类型的变量的未来可能取值
	MALE=6,//赋初值
	FEMALE,
	SECRET
};
int main()
{
	//4.枚举常量
	//可以一一列举的常量
	
	enum Ses s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET)
		;

	return 0;
}

