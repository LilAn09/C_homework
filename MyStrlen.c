unsigned int MyStrlen(char p[ ])
{
unsigned int len;
len=0;
for ( ; p[len]!='\0'; )
{
len ++;
	}
return len;
}