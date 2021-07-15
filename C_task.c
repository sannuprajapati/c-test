
# include <stdio.h>
main()
{
char ch ,g;


int numberArray[10];
int  i ,sum ,p ;

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

/// finding total marks , percentage and grade

for (i = 0; i < 5; i++){
fscanf(fp, "%d,", &numberArray[i] );
}

for (i = 0; i < 5; i++)
{sum=sum+(numberArray[i]);
}

p=(sum/5)*100;

if ( p>80){g="A";}
if (p<8 && p>35){g="B"; }
else g="C";

//EmployeeID,Name,Designation,Test_1_Mark, Test_2_Mark,Test_3_Mark, Test_4_Mark,Test_5_Mark,Total Mark,Percentage,Grade
printf("")
printf("Total Marks is: %d\n", sum);
printf("Percentage =%d \n", p);  
printf("Grade = %c\n", g);

fclose(fp);

}





   
