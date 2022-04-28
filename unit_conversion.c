#include <stdio.h>
int main()
{
    float a,km,cm,mm;
    char y;
    printf("Enter the number");
    printf("Press k to convert in kms \n");
    printf("Press c to convert in cms \n");
    printf("Press m to convert into m \n");
    printf("Press any other key to exit \n");
    scanf("%f %c",&a,&y);
    if(y=='k'){
        km=a/1000;
        printf("The answers is %f",km);
    }
    else if(y=='c'){
        cm=a*100;
        printf("Answer is %f",cm);
    }
    else if(y=='m'){
        mm=a*1000;
        printf("answer is %f",mm);
        
    }
    else{
        printf(" Invalid input");

    }
	return 0;
}