#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("text_file.txt", "w");

    int i;
    for(i = 65; i < 90; i++){
        fputc(i, fp);
    }

    char arr[100] = "Hi this is Alif";
    fputs(arr,fp);

    fprintf(fp, "My id is : %d\n", 100);
    int c;
    c = fgetc(fp);
    printf("The char is : %c\n", c);

     
    fclose(fp);
    return 0;
}