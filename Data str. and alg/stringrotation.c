#include <stdio.h>
#include <string.h>
int main() {
char a[100],b[100];
int c=0;
    printf("Enter a string A: ");
    scanf("%s", a);
    printf("Enter a string B: ");
    scanf("%s", b);
if (strcmp(a,b)==0){
    printf("BOTH ARE ALREADY EQUAL");

}else{    
int length = strlen(a);
    for (int j = 0; j < length - 1; j++){
char charadd = a[0];
    for (int i = 0; i < length - 1; i++)
           {
            a[i] = a[i + 1];
           }
           a[length - 1] = charadd;
//printf("Modified string: %s\n", a);
int result = strcmp(a, b);
         if (result==0){
                 c++;
                       }
    }
if (c>0){
    printf("\nYES IT IS A ROTATION ");
    }
else{
    printf("\nNO IT IS NOT A ROTATION");
    }
}
return 0;
}
