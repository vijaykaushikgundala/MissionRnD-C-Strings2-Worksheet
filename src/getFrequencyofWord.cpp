/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word)
{
	int i = 0, k,f,count=0,j;
	while (str[i] != '\0')
	{
		j = i;
		k = 0;
		f = 0;
		while (word[k] != '\0')
		{
			if (str[j] != word[k])
			{
				f = 1;
			}
			k++;
			j++;
		}
		if (f == 0)
		{
			count++;
		}
		i++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word)
{
	return 0;
}

