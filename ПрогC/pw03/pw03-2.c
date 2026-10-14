#include <stdio.h>
#include <string.h>
int main(void)
{
	char word1[15];
	char word2[15];
	scanf("%s %s", word1,word2);
	printf("%s-%s\n", word1, word2);
	int total_len = strlen(word1) + strlen(word2);
	printf("%zd\n", total_len);
	return 0;
}