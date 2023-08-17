#include <stdio.h>
int main(){
int i=0;
int count=0;
char name[70]=" HELLO WORLD I'M  MANAS ";

for (int i = 0; i <' '; i++)
{
    /* code */
    if (name[i]==' '){
    continue;
}
else if (name[i]==' ' || name [i+1]==' ' )
{
    count++;
}
 

    
    
}




printf("THE TOTAL  NUMBER OF CHARACTER'S ARE %d",count);



    return 0;
}