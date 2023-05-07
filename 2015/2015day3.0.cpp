#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2015\\inputday3.txt"

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
int north=0;
int south=0;
int east=0;
int wast=0;
int x = 0, y = 0;
int tempx = 0, tempy = 0;




while(fgets(lineInput,15000,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft
delay(1000);


  for (int i = 0; i < 20000; i++)
  {
       if (lineInput[i] == '^')
       {
          y++;
       }
       else if (lineInput[i]  == 'v')
       {
           y--;
       }
       else if (lineInput[i]  == '>')
       {
           x++;
       }
       else if (lineInput[i]  == '<')
       {
           x--;
       }

   }
}



printf("uitkomt x  %d \n", x);
printf("uitkomt y  %d \n", y);




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
