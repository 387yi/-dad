#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int	my_strlen(const char* arr)
{
	int map = 0;
	while (*arr++)
	{
		map++;
	}
	return map;
}
char* my_strcat(char* a1,const char* a2)
{
	while (*++a1 != '\0')
	{
		;
	}
	while (*a2 !='\0')
	{
		*a1++=*a2++;
	}
	*a1 = *a2;
	return a1;
}
int my_strcmp(const char* a1, const char* a2)
{
	while(*a1 && *a2)
	{
		if (*a1++ == *a2++)
		{
			;
		}
	}
	if ( *a1 == '\0' && *a2 == '\0')
		return 0;
	return (*a1 - *a2);

}
char* my_strcpy(char* a1, const char* a2)
{
	while ( *a2 && *a1 )
	{
		*a1++ = *a2++;
	}
	*a1 = *a2;
	return a1;
}
char* my_strstr(const char* a1, const char* a2)
{
	char* s1 = NULL;
	char* s2 = NULL;
	char* cmp = (char*)a1;
	if (*a2 == '\0')
		return (char*)a1;
	while (*cmp)
	{
		s1 = cmp;
		s2 = (char*)a2;
		while (*s1 && *s2 &&  ( * s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2=='\0')
			return (cmp);
		cmp++;
	}
	return (NULL);
}
int main()
{
	char arr1[30] = "adddefdad";
	char arr2[] = "def";
	//int s=my_strlen(arr);//��ȡ�ַ�������
	//my_strcat(arr1, arr2);//�������ַ�������
	//int sc = my_strcmp(arr1, arr2);//�Ƚ� 2���ַ���
	//my_strcpy(arr1, arr2);�����ַ���
	//printf("%s",arr1);
	char* pa = my_strstr(arr1, arr2);
	if (pa == NULL)
		printf("���Ӽ��ַ���");
	else
	{
		printf("%s", pa);
	}
	//if (sc == 0)
	//	printf("���");
	//else if (sc > 0)
	//	printf("����");
	//else
	//{
	//	printf("С��");
	//}
	return 0;
}