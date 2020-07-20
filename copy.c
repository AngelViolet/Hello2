#include <stdio.h>



int main()
{
	char ch;
	int ret;
char c;	

	FILE *fp1;
	
	
	
	
	fp1 = fopen("file1.txt","r");
	FILE *fp2;
	fp2 = fopen("f3.txt","w");
	
	
	
	
	while(1)
	{
		ret = fscanf(fp1, "%c", &ch);
		
		if(ret<=0)
		break;
		fprintf(fp2, "%c", ch);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
