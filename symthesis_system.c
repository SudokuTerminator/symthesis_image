#include<malloc.h>
#include<stdio.h>
#include<string.h>
int main()
{
	FILE * bmp_o[13];
	FILE * bmp_n[286];
	FILE * cover;
	char * directory[2];
	char file_name[8];
	int count = 0;
	int resolution;
	int x = 0;
	int y = 0;
	int z = 0;
	void * file_hex[13];
	while(count < 13)
	{
		file_hex[count] = malloc(122);
		++count;
	}
	count = 0;
	printf("Please input first directory which has origin pictures:");
	scanf("%s",directory[0]);
	while(true)
	{
		if(fopen(strcat(*directory[0],"1.bmp"),"r") == NULL && fopen(strcat(*directory[0],"/1.bmp"),"r") == NULL)
		{
			printf("It's not a real directory,please input again:");
			scanf("%s",directory[0]);
		}
		else
			break;
	}
	printf("Please input second directory for saving files:");
	scanf("%s",directory[1]);
	printf("Please input the resolution n(0 < n <= 15 ):");
	scanf("%d",&resolution);
	printf("Please wait...\n");
	cover = fopen(strcat(*directory[0],"/cover.bmp"),"a");
	while(count < 13)
	{
		number[0] = resolution / 100 + 48;
		number[1] = (resolution % 100) / 10 + 48;
		number[2] = resolution % 10 + 48;
		number[3] = '.';
		number[4] = 'b';
		number[5] = 'm';
		number[6] = 'p';
		number[7] = '\0';
		fopen()
	}
}
