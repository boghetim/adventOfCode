#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define FILEPATH "C:\\Users\\boghe\\Documents_pc\\aoc2016\\inputday1.txt"

void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

int main(int argc, char const *argv[])
{

FILE *fp = NULL;

fp= fopen(FILEPATH, "r");
if (fp == NULL)
{
  printf("error reading file\n");
  return -1;
}

char lineInput[20000]="";
int facing=0;   //0 is north, 1 is east, 2 is south, 3 is west
int x=0, y=0;


while(fgets(lineInput,20000,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
{

  printf("%s", lineInput);                  //print die elke regel af dat hij gelezen heeft
delay(3000);
for (int i = 0; i < 15000; i++) {

            if (lineInput[i]== 'R' )
            {
              if (facing ==0){
                facing=1;
                x+=(lineInput[i+1]-48);
                printf("uitkomt x %d \n", x);
              }
              else if (facing ==1){
                facing=2;
                y-=(lineInput[i+1]-48);
                printf("uitkomt y %d \n", y);
              }
              else if (facing ==2){
                facing=3;
                x-=(lineInput[i+1]-48);
                printf("uitkomt x %d \n", x);
              }
              else if (facing ==3){
                facing=0;
                y+=(lineInput[i+1]-48);
                printf("uitkomt y %d \n", y);
              }
            }
            else if (lineInput[i]== 'L' )
            {
              if (facing ==0){
                facing=3;
                x-=(lineInput[i+1]-48);
                printf("uitkomt x %d \n", x);
              }
              else if (facing ==3){
                facing=2;
                y-=(lineInput[i+1]-48);
                printf("uitkomt y %d \n", y);
              }
              else if (facing ==2){
                facing=1;
                x+=(lineInput[i+1]-48);
                printf("uitkomt x %d \n", x);
              }
              else if (facing ==1){
                facing=0;
                y+=(lineInput[i+1]-48);
                printf("uitkomt y %d \n", y);
              }
            }

      }
}
                printf("uitkomt x %d \n", x);
                printf("uitkomt y %d \n", y);


fclose(fp);

return 0;
}
