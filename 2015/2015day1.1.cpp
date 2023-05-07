#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2015\\inputday1.txt"

void delay(int milliseconds);

int main(int argc, char const *argv[])
{

FILE *fp = NULL;

fp= fopen(FILEPATH, "r");
if (fp == NULL)
{
  printf("error reading file\n");
  return -1;
}

char lineInput[15000]="";
char counter=0;
int temp=0;
int x=0;



while(fgets(lineInput,15000,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft

     for (int i = 0; i < 15000; i++)
      {

            if (lineInput[i]== '(')	//forward
            {
              temp+=1;
            }
            if (lineInput[i]== ')') //down
            {
              temp-=1;
            }
          //  printf("uitkomt is %d \n", temp);
          //  delay(10);
            if (temp<0)
            {
              printf("%d\n",i );
              delay(10000);
            }
      }
}


printf("uitkomt is %d \n", temp);




fclose(fp);

return 0;
}


void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
