#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2015\\inputday5.0.txt"

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

char lineInput[20]="";
long unsigned count=0;
int overlap=0;
int dubbel=0;
int o=0;




while(fgets(lineInput,20,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft
//delay(1000);
      for (int i = 0; i < 20; i++)
      {
            for (int o = 0; o < 20; o++)
            {
                if (lineInput[i]==lineInput[o] && lineInput[i+1]==lineInput[o+1])
                {
                  overlap++;
                  /*if (lineInput[i] == lineInput[i+1] && lineInput[i] == lineInput[i+2])
                  {
                    overlap--;
                  }*/
                }
            }
            overlap=0;

            if (lineInput[i]==lineInput[i+2] && i<15) //checking dubbel letters with 1 space between
            {
              dubbel=1;

            }

      }

      if (overlap>=2 && (dubbel ==1))
      {
        count++;
      }
      overlap=0;
      dubbel=0;

}

printf("uitkomt is %ld \n", count);







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
