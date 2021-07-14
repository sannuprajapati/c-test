

# include <stdio.h>
main()
{
char ch;
FILE *fp;
fp=fopen("f1.txt","r");

if(fp==NULL){
	printf("filenot found");
	exit(1);
	}

ch=fgetc(fp);
while(!feof(fp)){
	printf("%c",ch);
	ch=fgetc(fp);
}
fclose(fp);

return 0;
}
