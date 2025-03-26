#include <stdio.h>

int main (){
FILE *fpt;
fpt=fopen("newfile.txt","a");

fprintf(fpt,"%c",'M');
fprintf(fpt,"%c",'y');
fprintf(fpt,"%c",'m');
fprintf(fpt,"%c",'a');
fprintf(fpt,"%c",'n');
fprintf(fpt,"%c",'g');
fprintf(fpt,"%c",'o');


return 0 ;
}