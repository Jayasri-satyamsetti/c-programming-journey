# include<stdio.h>
int main()
{
	char c,word[100],sen[1000];
	printf("\n enter single character:");
	scanf("%c",&c);
	printf("\n enter single word:");
	scanf("%s",&word);
	printf("\n enter the sentence:");
	scanf(" %[^\n]",&sen);
	printf("\n%c\n%s\n%s",c,word,sen);
	return 0;
}
