#include <iostream>
#include <string.h>
#include <vector>



#define FILEPATH "C:\\Users\\boghe\\OneDrive - PXL\\Documenten\\adventOfCode2022github\\2016\\inputday1.txt"

using namespace std;

int main()
{
    FILE *fp = NULL;

    fp= fopen(FILEPATH, "r");
    if (fp == NULL)
    {
      printf("error reading file\n");
      return -1;
    }
    char lineInput[4500]="";
    int richting=0;
    int xas=0;
    int yas=0;

        //temp-> 0 is north, 1 is east , 2 is south and 3 is west

    while(fgets(lineInput,4500,fp) != NULL )    //fgets geeft een null na de lijn buiten als de volledige lijst is afgegaan
    {
        for (unsigned int i = 0; i < strlen(lineInput); i++)
        {
            cout <<"line" <<lineInput[i] << endl;
            cout <<"x"<< xas << endl;
            cout <<"y"<< yas << endl;

            if (lineInput[i]=='R'){
                if (richting ==0){
                        xas=xas+(lineInput[i+1]-48);
                        richting=1;
                }
            }
            if (lineInput[i]=='R'){
                if (richting ==1){
                        yas=yas-(lineInput[i+1]-48);
                        richting=2;
                }
            }
            if (lineInput[i]=='R'){
                if (richting ==2){
                        xas=xas-(lineInput[i+1]-48);
                        richting=3;
                }
            }
            if (lineInput[i]=='R'){
                if (richting ==3){
                        yas=yas+(lineInput[i+1]-48);
                        richting=0;
                }
            }
            if (lineInput[i]=='L'){
                if (richting ==0){
                        xas=xas-(lineInput[i+1]-48);
                        richting=3;
                }
            }
            if (lineInput[i]=='L'){
                if (richting ==1){
                        yas=yas+(lineInput[i+1]-48);
                        richting=0;
                        }
            }
            if (lineInput[i]=='L'){
                if (richting ==2){
                        xas=xas+(lineInput[i+1]-48);
                        richting=1;
                }
            }
            if (lineInput[i]=='L'){
                if (richting ==3){
                        yas=yas-(lineInput[i+1]-48);
                        richting=2;
                }
            }

        }
    }


    fclose(fp);



    return 0;
}
