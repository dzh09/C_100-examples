#include <stdio.h>
#include <stdlib.h>
#include<string.h>
char* delete_str(char* str, char* del_str)
{
	int hash[256] = { 0 };//定义一个哈希表
	int index_char = 0;
	if (del_str == NULL)
	{
		return str;
	}//如果要删的字符集为空，就原样返回
	for (int i = 0; i < strlen(del_str); i++)
	{
		hash[(unsigned char)del_str[i]] = 1;
	}//将要删的字符集在哈希表中索引，赋值为1做标记
	for (int j = 0; j < strlen(str); j++)
	{
		if (!hash[(unsigned char)str[j]])
		{
			str[index_char++] = str[j];
		}
	}//将总字符集在哈希表中轮询判断是否为标记过的字符，并将未标记的字符放入新的字符集
	str[index_char]='\0';//加上\0表示结束
	return str;
	
}
int main()
{
	char s1[] = "asfdadf";
	char s2[] = "s";
	printf("新的字符集为：%s\n",delete_str(s1, s2));
}