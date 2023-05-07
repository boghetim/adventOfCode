#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2015\\inputday1.txt"

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
int temp=0;



while(fgets(lineInput,15,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft

      for (int i = 0; i < 20000; i++) {


            if (lineInput[i]== '(')	//forward
            {
              temp+=1;
            }
            if (lineInput[i]== ')') //down
            {
              temp-=1;
            }

      }
}

printf("uitkomt is %d \n", temp);







fclose(fp);

return 0;
}
