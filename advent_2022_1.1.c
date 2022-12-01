#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\C-programmeren1\\code\\adventOfCode\\input_dag1.txt"

int main(int argc, char const *argv[])
{

FILE *fp = NULL;

fp= fopen(FILEPATH, "r");
if (fp == NULL)
{
  printf("error reading file\n");
  return -1;
}

char lineInput[15]="";
int numberRead=0;
int total=0;
long int temp1=0;
long int temp2=0;
long int temp3=0;


while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft
  numberRead=atoi(lineInput);
  printf("het gelezen getal is %d\n",numberRead);
  total+= numberRead;
  printf("voorlopig getal is : %d\n\n",total );

  if (numberRead ==0)
  {
    if (temp1 < total)
    {
      temp1=total;
      printf("max elf callories waarde is: %ld\n",temp1);
    }
    total=0;
  }
}

fclose(fp);

fp= fopen(FILEPATH, "r");

while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft
  numberRead=atoi(lineInput);
  printf("het gelezen getal is %d\n",numberRead);
  total+= numberRead;
  printf("voorlopig getal is : %d\n\n",total );

  if (numberRead ==0)
  {
    if (temp2 < total && temp1 != total)
    {
      temp2=total;
      printf("max elf callories waarde is: %ld\n",temp2);
    }
    total=0;
  }
}

fclose(fp);

fp= fopen(FILEPATH, "r");

while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft
  numberRead=atoi(lineInput);
  printf("het gelezen getal is %d\n",numberRead);
  total+= numberRead;
  printf("voorlopig getal is : %d\n\n",total );

  if (numberRead ==0)
  {
    if (temp3 < total && temp2 > total)
    {
      temp3=total;
      printf("max elf callories waarde is: %ld\n",temp3);
    }
    total=0;
  }
}



printf("max first elf callories waarde is: %ld\n",temp1);
printf("max second elf callories waarde is: %ld\n",temp2);
printf("max third elf callories waarde is: %ld\n",temp3);


printf("max total elf callories waarde is: %ld\n",temp1+temp2+temp3);




fclose(fp);

return 0;
}
