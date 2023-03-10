#define  _CRT_SECURE_NO_WARNING
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
int a = 100;

int main()
{
	//局部变量在{}内部定义的
	//当局部变量和全局变量名字冲突的情况下，局部优先
	//不建议把全局变量和局部变量的名字一致
	int a = 10;
	printf("%d\n", a);
	return 0;
}

