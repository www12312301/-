#define _CRT_SECURE_NO_WARNINGS 1
//д����
//1.д����������main������
//100-500����


//printf-�⺯��-����Ļ�ϴ�ӡ��Ϣ��
//printf��ʹ�ã�Ҳ�ô��к�������ͷ�ļ�stdio.h��



#include<stdio.h>
//int main()
//{
//    printf("hehe\n");
//    return 0;
//}
//���룫����+���д���
//1.��ݼ���ctrl+F5
//2.�˵��У����ԡ���ʼִ�в�����
//3.fn+ctrl+f5


//��������
//���������-д����-�������������

//С��-������
//����-����



//char   �ַ���������
//short  ������
//int  ����
//long  ������
//long  long  ����������
//float   �����ȸ�����
//double  ˫���ȸ�����

//a
//"a"-�ַ�a

//int main()
//{
//    //�ַ�����
//    char ch = 'a';
//    //����
//    int age=20;
//    //������
//    short num = 100;
//    //long
//    //long long
//    //�����ȸ�����
//    float weight = 55.5;
//   //˫���ȸ�����
//    double d = 0.0;
//
//    return 0;
//
//}


//int main()
//{
//    //printf("hehe\n");
//    //printf("%d\n", 100);//��ӡһ������ -%d
// 
//    //sizeof - �ؼ���-������-�������ͻ��߱�����ռ�ռ�Ĵ�С
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
//	//������һ������
//	//���� ����������=0��
//	//���ͱ��������֣�
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
////%d-����
////%f-float

//ȫ�ֱ�����{}���涨���
//int a = 100;
//
//int main()
//{
//	//�ֲ�������{}�ڲ������
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//�������ȫ�ֱ����;ֲ�����������һ��
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}
//

//дһ��������2�������ĺ�
//scanf���������뺯��
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



//���������������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������
//
//
//int g_val = 2023;//ȫ�ֱ���
//
////����һ�±���
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


//��������
//�������������ڣ������Ĵ��������ٵ�ʱ���
//
//�ֲ���������������:����ֲ���Χ������ʼ�����ֲ���Χ��������
//ȫ�ֱ������������ڣ������������������



//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	return 0;
//
//}

//����
//���泣��
//int main()

//#define MAX 10000000

//{
	/*3.14;
	10;
	'a';
	'aaac';*/

	//2.const���εĳ�����
	//��const���εĳ��������ܸ���
	//const int num = 10;//������-���г����ԣ����ܸı�����ԣ�
	//num = 20;
	//printf("num=%d\n", num);//20


	//int arr[10] = { 0 };//10��Ԫ��

	//const int n = 10;
	//int arr[n] = { 0 };//n�Ǳ����ģ������ǲ���



	//3.#define����ı�ʶ������

	//int n = MAX;
	//printf("%d\n", n);



	//4.ö�ٳ���
	//����һһ�оٵĳ���
	//return 0;
//}

//�Ա�
enum Sex
{
	//����ö�����͵ı�����δ������ȡֵ
	MALE=6,//����ֵ
	FEMALE,
	SECRET
};
int main()
{
	//4.ö�ٳ���
	//����һһ�оٵĳ���
	
	enum Ses s = MALE;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET)
		;

	return 0;
}

