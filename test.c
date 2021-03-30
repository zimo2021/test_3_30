#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//char * strtok ( char * str, const char * delimiters ); delimiters:分隔符 strtok:字符串分割
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
//}————————————————————————————-
//#include <stdio.h>//用while循环实现切割并打印字符串
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
//}————————————————————————————————
//int main()//这样可以将arr字符串中.，@全部转换为\0  但操作太麻烦
//{
//	char arr[] = "b.bc.a,bcd@m";
//	strtok(arr, ".,@");
//	strtok(NULL, ".,@");
//	strtok(NULL, ".,@");
//	strtok(NULL, ".,@");
//	return 0;
//}——————————————————————————————————
//用for循环实现切割并打印字符串
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
//%s的用法感悟
//int main()
//{
//	char arr[] = "abcd";
//	char* p = &arr;
//	printf("%s\n", p);//%s %d等后接的都是要打印的字母或数字起始位置地址
//	return 0;
//}————————————————————————————————————
//char * strerror ( int errnum );  错误码函数
//int main()
//{
//	//char* a = strerror(0);
//	//printf("%s\n", a);//No error
//	//char* a = strerror(1);
//	//printf("%s\n", a);//Operation not permitted
//	char* a = strerror(2);
//	printf("%s\n", a);//No such file or directory  等等一定范围内的数字都对应一个结果
//	return 0;
//}
//实用
//打开文件
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
//		//加了一份文件后:open the file successfully
//	}
//	return 0;
//}————————————————————————————————————
//int islower ( int c );  判断c是否为小写字母
#include<ctype.h>
//int main()
//{
//	//char a = 'm';//m上不可用""
//	//int ret = islower(a);
//	//printf("%d\n", ret);//2  非0则为真 a是小写字母
//	char a = '2';//不能用int a=2; ???
//	int ret = isdigit(a);
//	printf("%d\n", ret);//4
//	return 0;
//}
//还有很多isxxx函数可以自己去试一试
//——————————————————————————————————
//int tolower ( int c );  tolower:将c转换为小写
//int main()
//{
//	char a = tolower('Q');
//	printf("%c\n", a);//q 注;此处不可用%s  打印不出
//	putchar(a);//putchar也行不过不能换行
//	return 0;
//}
//实操
//int main()
//{
//	char arr[] = "I AM a stuDENT";//转换为小写
//	int i = 0;
//	char c;
//	while (arr[i])
//	{
//		//粗暴法  将所有字母转为小写 且保留源字符串
//		//c = arr[i];
//		//putchar(tolower(c));//i am a student
//		//i++;
//		//——————————————————————
//		//判断一下
//		c = arr[i];
//		if (isupper(c))
//		{
//			c = tolower(c);
//		}
//		printf("%c", c);//i am a student
//		i++;
//	}
//	return 0;
//}——————————————————————————
//void * memcpy ( void * destination, const void * source, size_t num );   memcpy:拷贝函数
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
//	/*struct stu arr1[] = { { "张三",18 },{ "李四",19 },{ "王五",20 } };
//	struct stu arr2[5] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));*/
//	//调试成功
//	int arr1[] = { 1,2,3,4 };
//	int arr2[4] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//调试成功
//	return 0;
//}
//但注意 如果字符串自身复制且有重叠 则memcpy不可用
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memcpy(arr1 + 2, arr1, 20);//1 2 1 2 1 2 1 8 9 10  这是从前向后拷贝 到达第三个数时 3已被改变 但系统的memcpy可实现功能 超过了国际标准
//	return 0;
//}——————————————————————————
//void * memmove(void * destination, const void * source, size_t num); memmove:字符串移动
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr + 2, arr, 20);//1 2 1 2 3 4 5 8 9 10 达到效果
//	return 0;
//}——————————————————————
//实现memmove
//void* my_memmove(void* p2, void* p1, size_t n)
//{
//	void* ret = p2;
//	if (p1 < p2)
//	{
//		//从后往前复制
//		while (n--)
//		{
//			*((char*)p2 + n) = *((char*)p1 + n);
//		}
//	}
//	else
//	{
//		//从前往后复制
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
//发现：调试完后一定要删除断点 否则会对后续调试有影响
//————————————————————————————————-
//int memcmp ( const void * ptr1, const void * ptr2, size_t num ); 字符串比较
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,4,5,6 };
//	//int ret = memcmp(arr1, arr2,10);//其中10代表10个字节
//	//printf("%d\n", ret);//-1
//	int ret = memcmp(arr1, arr1, 8);
//	printf("%d\n", ret);//0
//	return 0;
//}————————————————————————————————————————————————
//void * memset ( void * ptr, int value, size_t num ); memset:往ptr中赋值  注;num代表字节数
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
//	//调试结果：arr[1]=16843009 arr[2]=16843009 arr[3]=256
//	//memset将arr的十个字节改为了01 如arr[1]被变为 01010101(十六进制)就为16843009 
//	return 0;
//}————————————————————————————
//结构体变量的创建
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//}s1,s2,s3;//此处声明的为全局变量
//struct stu s4;//此处声明的为全局变量
//int main()
//{
//	struct stu s5 ;//此处声明的为局部变量
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
//	STU s6;//这样也行
//	return 0;
//}
//结构体变量内容的打印
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//};
//int main()
//{
//	struct stu s1 = { "张三",18,"男" };
//	printf("姓名：%s 年龄：%d 性别：%s\n", s1.name, s1.age,s1.sex);
//	return 0;
//}
//结构体中包含结构体的打印
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
//	struct stu s1 = { "张三",18,"男",{120,"basketball"} };
//	printf("姓名：%s 年龄：%d 性别：%s 体重：%d 爱好：%s", s1.name, s1.age,s1.sex,s1.s.wight,s1.s.like);
//	return 0;
//}
//对结构体变量大小的理解
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
//	//不同的原因  其中包含一个对齐数的问题 有空间的浪费 vs中默认对齐数为8
//	return 0;
//}