#include <stdio.h>
#include <string.h>

int main()
{
	char word[101];
	int alphabet[26] = { -1 };
	scanf_s("%s", word, sizeof(word));
	int len = strlen(word);
	for (int i = 0; i < 26; i++)
	{
		alphabet[i] = -1;
	}
	for (int i = 0; i < 26; i++)  //97~122
	{
		for (int j = 0; j < len; j++)
		{
			if (i + 97 == word[j])
			{
				alphabet[i] = j;
				break;
			}
		}
		printf("%d ", alphabet[i]);
	}
}