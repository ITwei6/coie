//ͳ�ƶ�������1�ĸ���
//#include <stdio.h>
//int get_1(unsigned int n)
//{//�޷��������ͻ�ʹ�����ķ���λ�����Чλ
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//���ص��㷨��ʵ��һ�����ұߵ�һ�ͻ�������
//		count++;
//	}
	/*while (n)
	{
		if((n % 2)==1);
		{
			count++;
		}
		n = n / 2;
	}*/
	/*return  count;*/
	/*int i;
	int count = 0;
	for (i = 0;i < 32;i++)
	{
		if (((n >> i) & 1) == 1)
			count++;

	}
	return count;*/

//int main()
 //       00000000000000000000000000010111
//1�Ĳ�����00000000000000000000000000000001
	//���ð�λ��&ֻҪ��1���ں�1��λ(2����λ��������Ϊ1����Ϊ0��
	/*int n;
	scanf_s("%d", &n);
	int count = get_1(n);
	printf("һ�ĸ���Ϊ%d", count);
	return 0;
}*/
//#include <stdio.h>
//int get_1(int c)
//{
//	int i;
//	int count = 0;
//	for (i = 0;i < 32;i++)
//	{
//		if (((c >> i) & 1) == 1)
//			count++;
//
//	}
//	return count;
//}

//int get_diff(int a, int b)
//{
//	int c = a ^ b;
//	return get_1(c);
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d%d", &a, &b);
//	int count=get_dif(a, b);
//	printf("%d", count);
//	return 0;
//}
//int get_dif(int a, int b)
//{
//	int c = a ^ b;
//	int count = 0;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf_s("%d%d", &a, &b);
//	int count=get_dif(a, b);
//	printf("%d", count);
//	return 0;
//}
//  000000000000000000000000000101
// 000000000000000000000000000001 ` ` ` ` ` ` ` ` ` ` ` ` ` `                         
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int i;
//	printf("�����\n");
//	for (i = 30;i >= 0;i-=2)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			printf(" 1 ");
//		}
//		else
//		{
//			printf(" 0 ");
//		}
//	}
//	printf("\n");
//	printf("ż���\n");
//	for (i = 31;i >= 1;i-=2)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			printf(" 1 ");
//		}
//		else
//		{
//			printf(" 0 ");
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//����������������������
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	//�Ӽ���--  ���ַ��������⣬�ᵼ�����
//	//a = a + b;//a��b���ǳ����ʱ����ӿ��ܻᵼ��a��ֵ�����
//	//b = a - b;
//	//a = a - b;
//	//��򷨣�
//	a = a ^ b;//a��b^�൱�ڲ���һ�����룻������븳��a�����������ϳ����������������ͻ��γ���һ���ϳ�����������
//	b = a ^ b;//���������b���ͻ��γ�ԭ����Ȼ���a��ֵ����b��ɻ���
//    a = a ^ b;     //�������b�൱��a��ֵ��,������a������b��ֵ����a
//	printf("a=%d b=%d", a, b);
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int i, n;
//	for (i = 1;i <= 9;i++)
//	{
//		for (n = 1;n <= 9;n++)
//		{
//			printf(" %d * %d=%d ",i,n,i*n);
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main(
//#include <stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{/*
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d", *p);
//		p++;
//	}*/
//	/*int *p =test();
//
//	printf("%d", *p);*/
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", &arr[9] - &arr[0]);
	//int a = 10;
	//int* pa = &a;//��ʼ����
	//int* pa = NULL;
	//if (pa != NULL)
	//{
	//	
	//}
	/*return 0;
}*/
//���ַ����ĳ��ȣ���
//������������
//�ݹ�
//����ָ����������
//#include <stdio.h>
//#include <string.h>
//int my_strlen(char* str)
//{
//	char * star=str;
//	while (*str++ != '\0')
//		;//1.2.3.4.5.6.7
//	return str - star-1;
//	//int count = 0;
//	//while (*str != '\0')//ʵ�ʾ�����\0֮ǰ�ж��ٸ�Ԫ�أ�
//	//{
//	//	str++;
//	//	count++;
//	//}
//	//return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		
//		*(p + i) = i + 1;
//	
//	}
//	p = arr;
//	for (i = 0;i < sz;i++)
//	{
//	/*	printf("%d", arr[i]);*/
//		printf("%d", *p);
//			p++;
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
	/*return 0;
	* 
}*/
//unsigned long pulArray[] = { 6,7,8,9,10 };
//unsigned long* pulPtr;
//pulPtr = pulArray;
//*(pulPtr + 3) += 3;
//printf(��% d, % d\n��, *pulPtr, *(pulPtr + 3));
//#include <stdio.h>cint sz)
//{
//	int* p = arr;
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", *p);
//		p++;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//char Reserve(char* p, int len)
//{ 
//	int i = 0;
//	for (i = 0;i < len;i++)
//	{
//		 printf("%c", *(p + len - 1 - i));
//	}
//	return *(p + len - 1 - i);
//}
//int main()
//{
//	char arr[] = "abcef";
//		int len = strlen(arr);
//	Reserve(arr,len);
//	return 0;
//}

//{#include <stdio.h>
//int main()
	/*int i = 0;
	for (i = 100;i <= 100000;i++)
	{
		int a, b, c, d;
		d = i;
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (a * a * a + b * b * b + c * c * c == d)
		{
			printf("%d ", d);
		}
	}*/
		/*int j = 0;
		int ret = 0;
		int x = i;
		int n = x;
		for (j = 0;j < 3;j++)
		{
			
			int m = x % 10;
			ret = ret + m * m * m;
			x= x/ 10;
		}
		if (n == ret)
		{
			printf("%d ", ret);
		}
//	/*}*/
//	return 0;

//
// #include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <100000;i++)
//	{
//		
//		int m = i;
//		int n = 0;
//		int sum = 0;
//		while (m)
//		{
//			m = m / 10;
//			n++;//���ȼ����λ���Ƕ���;
//		}
//
//		m = i;//m��ֵ�Ѿ��ı䣻
//		while (m)
//		{
//			sum = sum + pow(m % 10, n);
//			m = m / 10;
//		}
//		if (i==sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	for (int i = 0;i <= 100000;i++)
//	{
//		int n = 0;
//		int m = i;
//		int sum = 0;
//		while (m)
//		{
//			m /= 10;
//			n++;
//		}
//		m = i;
//		while (m)
//		{
//			sum += pow(m % 10, n);
//			m /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//pow��x��y��x��y���� �⺯�� ��Ҫ����ͷ�ļ� #include <math.h>
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0;i <= 100000;i++)
//	{
//		int n = 0;
//		int m = i;
//		while (m)
//		{
//			m /= 10;//n��ʾm�Ǽ�λ����
//			n++;
//
//		}
//		m = i;
//		int sum = 0;
//		while (m)
//		{
//			sum = sum + pow(m % 10, n);
//			m = m / 10;
//		}
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a;
//
//	scanf_s("%d", &a);
//	int m = a;
//	int S = 0;
//	S = a + (a * 10 + a) + (a * 100 + a * 10 + a) + (a * 1000 + a * 100 + a * 10 + a) + (a * 10000 + a * 1000 + a * 100 + a * 10 + a);
//	printf("%d", S);
//	int i = 0;
//	
//	return 0;
//}
	//             *
	//            ***
//	             *****
	//          *******
	//         *********     
	//        ***********
	///        *********
	//          *******
	//           *****
	//            ***
	//             *
	//
	//
	//
//	int i = 0;
//	for (i = 1;i <=6;i++)
//	{
//		int j;
//		for (j = 1;j <=2*i-1;j++)
//		{
//			printf("     *   ");
//		}
//		/*while ((2 * i - 1) != 11)
//		{
//			printf("*");
//		}*/
//
//		printf("\n");
//	}
//	return 0;
//}

//#include <string.h>
//void Reserve(char* str, int len)
//{
//	char* left = str;//����ָ�뷽�������ַ�������
//	char* right = str + len - 1;
//	
//	while (left < right)
//	{
//		char temp;
//		temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char str[] = "hello world";
//	int len = strlen(str);
//	Reserve(str, len);
//	printf("%s", str);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < len;i++)
//	{
//		printf(" %d", *p);
//		p++;
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int line;
//	scanf_s("%d", &line);
//	//�ȴ�ӡ�ϰ����ȴ�ӡ�ո��ڴ�ӡ*��
//	int i = 0;
//	for (i = 0;i < line;i++)
//	{
//		int j = 0;//��ӡ�ո񣻿ո����μ�һ������6���ո�
//		for (j = 0;j < line - 1 - i;j++)
//		{
//			printf(" ");
//		}
//		//��ӡ��ո��ٴ�ӡ*�ţ�*���ǰ���1 3 5 7 9 ˳�����ӣ�
//		for (j = 0;j < 2 * i + 1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	//�ٴ�ӡ�°����ȴ�ӡ�ո�ո��������ӣ�һ��ʼΪ0��
//	for (i = 0;i < line;i++)
//	{
//		int j;
//		for (j = 0;j <=i;j++)
//		{
//			printf(" ");
//		}
//		for (j = 0;j < 2 * line - 3 - 2 * i;j++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	int n;
//	scanf_s("%d%d", &a, &n);
//	int sum = 0;
//	int i;
//	int temp = 0;
//	for (i = 0;i < n;i++)
//	{
//		temp = temp* 10 + a;//temp ��ָ��n����� ��1����2���ڶ�����20+2 ��������220+2��������2220+2
//		sum = sum + temp;//sum������temp����ӵĺ�
//	}
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//    int sum=Fib(n);
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int y, m;
//	while (scanf_s("%d%d", &y, &m))
//	{
//		switch (m)
//		{
//		case 2:   if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//
//		{
//			printf("29");
//		}
//			  else
//			printf("28");break;
//		case 4:
//		case 6:
//		case 9:
//		case 11:printf("30");break;
//		defalut:printf("31");
//		
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//void reverse(char* p, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	char temp;
//	while (left < right)
//	{
//		
//		temp = *(p + left);
//		*(p + left) = *(p + right - 1);
//		*(p + right - 1) = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	int len = strlen(arr);
//	//scanf("%s",arr);
//	gets(arr);
//	reverse(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i;
//	int arr[3][3];
//	scanf_s("%d", &arr);
//	int sum = 0;
//	for (i = 0;i < 10;i++)
//	{
//		int j = 0;
//		for (j = 0;j < 10;j++)
//		{
//			if (arr[i][j] >= 0)
//			{
//				sum += arr[i][j];
//			}
//
//	   }
//	}
//	printf("%d", sum);
//	return 0;
//}
//
/*
	int a[] = { 1,2,3,4 };
	int b[] = { 4,5,6,7 };
	int c[] = { 7,8,9,10 };
	int*p [] = { a,b,c };
	int i;
	for (i = 0;i < 3;i++)
	{
		int j;
		for (j = 0;j < 4;j++)
		{
			printf("%d", *(p[i] + j));
		}
		printf("\n");
	}*/
	
//#include <stdio.h>
//	struct Stu
//	{
//		char name[20];
//		int age;
//		char sex[10];
//		float score;
//
//	}s4, s5;;//ȫ�ֱ���
//int main()
//{
//	struct Stu s1 = { "zhangsan",11,"nan",95.5f };
//	struct Stu s2 = { "wangcai",20,"nu",66.2f };
//		//�ֲ�������
//	printf("%s %d %s %.1f\n", s2.name, s2.age, s2.sex,s2.score );
//	                                                           
//	return 0;
//	}
//#include <stdio.h>
//struct S
//{
//	int a;
//	char c;
//};
//struct P
//{
//	double d;
//	struct S s;
//	float f;
//
//};
//void print1(struct P p)
//{                                                                  
//	printf("%lf %d %c %f\n", p.d, p.s.a, p.s.c, p.f);
//}
//void print2(struct P* p1)
//{
//	printf("%lf %d %c %f\n", p1->d, p1->s.a, p1->s.c, p1->f);
//}
//int main()
//{
//	struct P p = { 5.5,{10,'a'},3.14f };
//	
//	   print1(p);//��ֵ��
//		print2(&p);//��ַ
//	return 0;
//}
//#include <stdio.h>
//void scc_(int arr[])
//{
//	int i;
//	for (i = 0;i < 10;i += 2)
//	{
//		printf("%d", arr[i]);
//	}
//	int j;
//	for (j = 1;j < 10;j += 2)
//	{
//		printf("%d", arr[j]);
//	}
//
//
//}
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	scc_(arr);
//	return 0;
//	
//
//}
//int main()
//{
//	int arr[]={0};
//	scanf_s("%d", &arr);
//	printf("%d", arr);
//	return 0;
//}#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int b[5]={6,7,8,9,10};
//	int temp;
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	for (i = 0;i < 5;i++)
//	{
//		printf("%d", b[i]);
//	}
//	return 0;
//}//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

//void init(int arr)
//{
//	int* p=arr;
//	int i;
//	for (i = 0;i < 5;i++)
//	{
//		*p = 0;
//		p++;
//	}
//}
//
//	int* p = arr;
//	int i;
//	for (i=0;i<5;i++)
//	{
//		printf("%d", *(p+4)-i);
//	}
//}
//
//int main()
//{
//	int arr[5]={1,2,3,4,5};
//	void init(arr);
//	print(arr);
//	reverse(arr);
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	int b[10] = { 0 };
//	printf("���������֣�");
//	for (int i = 0;i < 10;i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	printf("\n");
//	printf("���������֣�");
//	for (int i = 0;i < 10;i++)
//	{
//		scanf_s("%d", &b[i]);
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		int temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", a[i]);
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%d", b[i]);
//	}
//
//	return 0;
//}
//void Init(int arr[], int sz, int set)
//{      
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = set;
//	}9+
//}
//void Init(int arr[], int sz)
//{        
//	int i;
//	for (i = 0;i < sz;i++)
//	{
//		arr[i] = 0;
//	}
//}
//void  Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void  Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//	}
//}
//int main()
//{   int arr[] = {1,2,3,4,5};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//   Init(arr, sz);
//   Print(arr, sz);
//   Reverse(arr, sz);
//   return 0;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i;
//	for(i = 0;i < 9;i++)
//	{
//		int j;
//		for (j = 0;j < 9-i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10];
//	int sum = 0;
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf
//			if (arr[i][j] > 0)
//			{
//				sum = sum + arr[i][j];
//			}
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}
/*nt main() {
	int n;
	scanf("%d", n);
	if (n % 5 != 0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}

	return 0;
}*/

//int main()
//{
//	int second, h, m, s;
//	scanf_s("%d", &second);
//	 h = second / 3600;//Сʱ
//	 m = (second % 3600) / 60;//������ж��ٻ�ʣ�����룻��/60������ж��ٷ֣�s%3600%60�����ʣ�����룻
//	 s = (second % 3600) % 60;
//	printf("%d %d %d", h, m, s);
//	return 0;
//}
//int main()
//{
//	int n;
//	while ((scanf_s("%d\n", &n)) != EOF)
//	{
//		for (int i = 0;i < n;i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}
 /*main()
{
	int t;
	while ((scanf_s("%d", &t))!=- 1)
	{
		if (t > 0)
			printf("1\n");
		if (t == 0)
			printf("0.5\n");
		if (t < 0)
			printf("0\n");
	}
	return 0;int
}*/
//int main()
//{
//	
//	int i;
//	for (i = 1;i < 100;i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (a < b);
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		int t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		int t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//
//#include <stdio.h>
//int main()
//{
//
//	int i;
//	for (i = 100;i < 200;i++)
//	{
//		int j;
//		for (j = 2;j < i;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i==j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}
//int main()
//{
//	int i;
//	for (i = 1000;i < 2000;i++)
//	{
//		if (((i % 4 == 0)&&(i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int a, b;
//	int c = 1;
//	scanf_s("%d%d", &a, &b);
//	while (c)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d",a);
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	int arr1[10][10];
//	int arr2[10][10];
//		for (int i = 0;i < n;i++)
//		{
//			for (int j = 0;j < m;j++)
//			{
//				scanf_s("%d", &arr1[i][j]);
//			}
//			printf("\n");
//		}
//	 for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr2[i][j]);
//		}
//		printf("\n");
//	}
//	 for (int i = 0;i < n;i++)
//	 {
//		 for (int j = 0;j < m;j++)
//		 {
//			 if (arr1[i][j] == arr2[i][j]&&i==n&&j==m)
//				 printf("YES");
//			 else
//				 printf("NO");
//		 }
//	 }
//	return 0;
//	
//}
//#include <stdio.h>
////#include <string.h>
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src; ==  *dest++=*src++
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//char* my_strcpy(char* dest,const char* src)����str���ݲ����޸�
//{                                 ���������Ҹ��㣬��������ң�
////	if (src == NULL || dest == NULL)
////	{
////		retrun;//Ҫ�ж�ָ�����Ч�ԣ���ֹ���˿�ָ�룻/ȱ�㣬ÿ��ѭ��������У�
////	}//����assert,
//	assert(src != NULL);
//	assert(dest != NULL);//�п��Է�һ�����ʽ������ٱ�����ʲô����������
//	assert(dest && src);
// char *ret=dest;
//	while (*dest++ = *src++)//����\0ʱΪ��ֹͣ
//	
//		;
//		
//	return ret;
//	
//}
////int main()
//{//strcpy �����ַ�����
//	char arr1[20] = "************";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
// printf("%s\n", my_strcpy(arr1, arr2););
//	char arr3[20]={0};
//	char* p=NULL;
//	my_strcpy(arr3, p);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = { 0 };
//	char *p= "hello";//�������ݲ��ܸ�
//	my_strcpy(arr1, p);
//	//my_strcpy(p, arr1);
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//    int* const  p = &num;
//	*p = 20;
//	int n = 100;
//	/*p = &n;*/
//	printf("%d", num);
//	return 0;
//}
//const����*���ʱ��const���ε���ָ��ָ������ݣ�����ͨ��ָ�����ı��ˣ�����ָ�������������޸ģ�

//const����*�ұߣ�const���ε���ָ�����������ʾ֨֨֨������������ݲ������޸�
//�����ǿ���ͨ��ָ�����ı�
//unsigned int my_strlen(const char* arr)
//{//size_t ==unsigned int ;
//	assert(arr!=NULL);
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//		
//	}
//	return count;
//}//��ʽ���ʽ
//int main()
//{
//	char arr[] = "abcdef";
//	/*int len = my_strlen(arr);
//	printf("%d", len);*/
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//�Ķ��õĴ���
//int main()
//{
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int n, m;
//	scanf_s("%d%d", &n, &m);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr1[i][j]);
//		}
//	}
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf_s("%d", &arr2[i][j]);
//			if (arr1[i][j] != arr2[i][j])
//			{
//				printf("NO");
//				return 0;
//			}
//		}
//	}
//	printf("YES");
//	return 0;
////�Ƚ�Ԫ��¼�룬�ٽ����жϣ�
//int main()
//{
//	int arr[10][10] = { 0 };
//	int n;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < n;j++)
//		{
//			scanf("%d", &arr[i][j]);
//			
//		}
//	}
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < i;j++)
//		{
//			if (arr[i][j] != 0)
//				printf("No\n");
//			return 0;
//		}
//	}
//	printf("Yes\n");
//	return 0;
//}
//��������жϣ�
//int main()
//{
//	int arr[10][10 = { 0 };
//	int n;
//	int i, j;
//	scanf("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (i > j)
//			{
//				if (arr[i][j] != 0)
//				{
//					printf("NO\n");
//					return 0;
//				}
//			}
//		}
//	}
//	printf("YES\n");
//	return 0;
//
//}
//int main()
//{
//
//	int n;
//	scanf_s("%d", &n);
//	int c;
//	c = n / 2;
//	int sum = 0;
//	printf("%d", n + c);
//	return 0;
//}
#include <stdio.h>
int main()
 {

	int n, m;
	scanf_s("%d%d", &n, &m);
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int arr3[20] = { 0 };
	for (int i = 0;i < n;i++)
	{
		scanf_s("%d", &arr1[i]);
	}
	for (int i = 0;i < m;i++)
	{
		scanf_s("%d", &arr2[i]);
	}
	for (int i = 0;i < n + m;i++)
	{
		if (i < n	)
		{
			arr3[i] = arr1[i];
		}
		else
		{
			arr3[i] = arr2[i - n];
		}
	}
	//arr3��arr1��arr2����Ԫ�صĺͣ��ڽ���ð������һ����n+m��Ԫ�أ�Ҫ����n+m-1����ÿ��Ҫ���ν�����
	for (int i = 0;i < n + m - 1;i++)
	{
		for (int j = 0;j < n + m - 1 - i;j++)
		{
			if (arr3[j] > arr3[j+1])
			{
				int temp = arr3[j];
				arr3[j] = arr3[j + 1];
				arr3[j + 1] = temp;
				
			}
		}
	}
	for (int i = 0;i < n + m;i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}
//#include <stdio.h>
//#include <string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(*src && dest);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = { 0 };
//	char arr2[] = "hahahahahaha";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}
//#include <stdio.h>
//#include<assert.h>
//
//int my_strlen(const char* arr)
//{  
//	assert(arr != NULL);
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", my_strlen(arr));
//	return 0;
//}