/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<malloc.h>
char *rev(char *, int);
char * get_last_word(char * str)
{
	char *substr;
	int i = 0, j = 0,len=0,ls,k;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	j = len - 1;
	while (str[j] == ' '&&j>=0)
	{
		j--;
	}
	i = j;
	while (str[i] != ' '&&i>=0)
	{
		i--;
	}
	ls = j - i;
	i++;
	substr = (char *)malloc(sizeof(char)*ls);
	k = 0;
	while (j >= i)
	{
		substr[k] = str[i];
		i++;
		k++;
	}
	substr[k] = '\0';
	return substr;
}
