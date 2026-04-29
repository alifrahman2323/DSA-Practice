#include <stdio.h>
int main(){

FILE *fp;
fp = fopen("data.txt", "r");
int c;
int cCunter = 0, Vcounter = 0, sCounter = 0;
while(1){
    c = fgetc(fp);
    if(c == EOF){
        break;
    }
    if(c == 32 || c == 10){
        sCounter++;
    }else if(c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u'){

    Vcounter++;

    }else if(c == 'A'|| c == 'E'||c == 'I'|| c == 'O'|| c =='U'){
        Vcounter++;
    }else{
        cCunter++;
    }
    printf("Vowel is : %d\n", Vcounter);
    printf("Consonant: %d\n",cCunter);
    printf("Space and new line: %d\n",sCounter);
}

return 0;
}
