#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//char * strtok ( char * str, const char * delimiters ); delimiters:�ָ��� strtok:�ַ����ָ�
//int main()
//{
//	char arr[] = "ab.cd.ef";
//	char* p = strtok(arr, ".");
//	while (p!=NULL)
//	{
//		printf("%s ",p);
//		p = strtok(NULL, ".");
//	}
//	return 0;
//}��������������������������������������������������������-
//#include <stdio.h>//��whileѭ��ʵ���и��ӡ�ַ���
//#include <string.h>
//
//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	return 0;
//}����������������������������������������������������������������
//int main()//�������Խ�arr�ַ�����.��@ȫ��ת��Ϊ\0  ������̫�鷳
//{
//	char arr[] = "b.bc.a,bcd@m";
//	strtok(arr, ".,@");
//	strtok(NULL, ".,@");
//	strtok(NULL, ".,@");
//	strtok(NULL, ".,@");
//	return 0;
//}��������������������������������������������������������������������
//��forѭ��ʵ���и��ӡ�ַ���
//int main()
//{
//	char arr[] = "b.bc.a, bcd@m ";
//	char* p;
//	for (p = strtok(arr, ".,@"); p != NULL; p = strtok(NULL, ".,@"))
//	{
//		printf("%s ", p);//b bc a  bcd m  
//	}
//	return 0;
//}
//%s���÷�����
//int main()
//{
//	char arr[] = "abcd";
//	char* p = &arr;
//	printf("%s\n", p);//%s %d�Ⱥ�ӵĶ���Ҫ��ӡ����ĸ��������ʼλ�õ�ַ
//	return 0;
//}������������������������������������������������������������������������
//char * strerror ( int errnum );  �����뺯��
//int main()
//{
//	//char* a = strerror(0);
//	//printf("%s\n", a);//No error
//	//char* a = strerror(1);
//	//printf("%s\n", a);//Operation not permitted
//	char* a = strerror(2);
//	printf("%s\n", a);//No such file or directory  �ȵ�һ����Χ�ڵ����ֶ���Ӧһ�����
//	return 0;
//}
//ʵ��
//���ļ�
//#include<errno.h>
//int main()
//{
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//errno:Last error number
//	}
//	else
//	{
//		printf("open the file successfully");//No such file or directory
//		//����һ���ļ���:open the file successfully
//	}
//	return 0;
//}������������������������������������������������������������������������
//int islower ( int c );  �ж�c�Ƿ�ΪСд��ĸ
#include<ctype.h>
//int main()
//{
//	//char a = 'm';//m�ϲ�����""
//	//int ret = islower(a);
//	//printf("%d\n", ret);//2  ��0��Ϊ�� a��Сд��ĸ
//	char a = '2';//������int a=2; ???
//	int ret = isdigit(a);
//	printf("%d\n", ret);//4
//	return 0;
//}
//���кܶ�isxxx���������Լ�ȥ��һ��
//��������������������������������������������������������������������
//int tolower ( int c );  tolower:��cת��ΪСд
//int main()
//{
//	char a = tolower('Q');
//	printf("%c\n", a);//q ע;�˴�������%s  ��ӡ����
//	putchar(a);//putcharҲ�в������ܻ���
//	return 0;
//}
//ʵ��
//int main()
//{
//	char arr[] = "I AM a stuDENT";//ת��ΪСд
//	int i = 0;
//	char c;
//	while (arr[i])
//	{
//		//�ֱ���  ��������ĸתΪСд �ұ���Դ�ַ���
//		//c = arr[i];
//		//putchar(tolower(c));//i am a student
//		//i++;
//		//��������������������������������������������
//		//�ж�һ��
//		c = arr[i];
//		if (isupper(c))
//		{
//			c = tolower(c);
//		}
//		printf("%c", c);//i am a student
//		i++;
//	}
//	return 0;
//}����������������������������������������������������
//void * memcpy ( void * destination, const void * source, size_t num );   memcpy:��������
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 16);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);//1 2 3 4 0 0 0 0 0 0
//	}
//	return 0;
//}
//void* my_memcpy(void* p2, void* p1, size_t n)
//{
//	void* ret = p2;
//	while (n)
//	{
//		*(char*)p2 = *(char*)p1;
//		++(char*)p1;
//		++(char*)p2;
//		n--;
//	}
//	return ret;
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	/*struct stu arr1[] = { { "����",18 },{ "����",19 },{ "����",20 } };
//	struct stu arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));*/
//	//���Գɹ�
//	int arr1[] = { 1,2,3,4 };
//	int arr2[4] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//���Գɹ�
//	return 0;
//}
//��ע�� ����ַ��������������ص� ��memcpy������
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10  ���Ǵ�ǰ��󿽱� �����������ʱ 3�ѱ��ı� ��ϵͳ��memcpy��ʵ�ֹ��� �����˹��ʱ�׼
//	return 0;
//}����������������������������������������������������
//void * memmove(void * destination, const void * source, size_t num); memmove:�ַ����ƶ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);//1 2 1 2 3 4 5 8 9 10 �ﵽЧ��
//	return 0;
//}��������������������������������������������
//ʵ��memmove
//void* my_memmove(void* p2, void* p1, size_t n)
//{
//	void* ret = p2;
//	if (p1 < p2)
//	{
//		//�Ӻ���ǰ����
//		while (n--)
//		{
//			*((char*)p2 + n) = *((char*)p1 + n);
//		}
//	}
//	else
//	{
//		//��ǰ������
//		while (n--)
//		{
//			*(char*)p2 = *(char*)p1;
//			++(char*)p2;
//			++(char*)p1;
//		}
//
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr , arr+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//���֣��������һ��Ҫɾ���ϵ� �����Ժ���������Ӱ��
//����������������������������������������������������������������-
//int memcmp ( const void * ptr1, const void * ptr2, size_t num ); �ַ����Ƚ�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,4,5,6 };
//	//int ret = memcmp(arr1, arr2,10);//����10����10���ֽ�
//	//printf("%d\n", ret);//-1
//	int ret = memcmp(arr1, arr1, 8);
//	printf("%d\n", ret);//0
//	return 0;
//}������������������������������������������������������������������������������������������������
//void * memset ( void * ptr, int value, size_t num ); memset:��ptr�и�ֵ  ע;num�����ֽ���
//int main()
//{
//	char arr[] = "abcdefghi";
//	memset(arr, '-', 6);//
//	printf("%s\n", arr);//------ghi
//	puts(arr);//------ghi
//	return 0;
//}

//int main()
//{
//	char str[] = "almost every programmer should know memset!";
//	memset(str, '-', 6);
//	puts(str);//------ every programmer should know memset!
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);
//	//���Խ����arr[1]=16843009 arr[2]=16843009 arr[3]=256
//	//memset��arr��ʮ���ֽڸ�Ϊ��01 ��arr[1]����Ϊ 01010101(ʮ������)��Ϊ16843009 
//	return 0;
//}��������������������������������������������������������
//�ṹ������Ĵ���
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//}s1,s2,s3;//�˴�������Ϊȫ�ֱ���
//struct stu s4;//�˴�������Ϊȫ�ֱ���
//int main()
//{
//	struct stu s5 ;//�˴�������Ϊ�ֲ�����
//	return 0;
//}
//typedef struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//}STU;
//int main()
//{
//	struct stu s5;
//	STU s6;//����Ҳ��
//	return 0;
//}
//�ṹ��������ݵĴ�ӡ
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//};
//int main()
//{
//	struct stu s1 = { "����",18,"��" };
//	printf("������%s ���䣺%d �Ա�%s\n", s1.name, s1.age,s1.sex);
//	return 0;
//}
//�ṹ���а����ṹ��Ĵ�ӡ
//struct st
//{
//	int wight;
//	char like[20];
//};
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	struct st s;
//};
//int main()
//{
//	struct stu s1 = { "����",18,"��",{120,"basketball"} };
//	printf("������%s ���䣺%d �Ա�%s ���أ�%d ���ã�%s", s1.name, s1.age,s1.sex,s1.s.wight,s1.s.like);
//	return 0;
//}
//�Խṹ�������С�����
//struct stu
//{
//	char s1;
//	char s2;
//	int arr;
//};
//struct st		
//{
//	char s1;
//	int arr;
//	char s2;
//};
//int main()
//{
//	struct stu s1 = { 0 };
//	printf("%d\n", sizeof(s1));//8
//	struct st s2 = { 0 };
//	printf("%d\n", sizeof(s2));//12
//	//��ͬ��ԭ��  ���а���һ�������������� �пռ���˷� vs��Ĭ�϶�����Ϊ8
//	return 0;
//}