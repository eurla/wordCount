#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
int main(int argc, char *argv[]){
    if(argc != 3){
        printf("��������ȷ�Ĳ������磺wordCount.exe -c input.txt\n");
    }
    else{
        char c;
        int count = 0;
        int word;
        FILE *fp;
        fp = fopen(argv[2],"r");
        if(fp == NULL){
            printf("open file failed!!");
            fclose(fp);
            exit(0);
        }
        else{
            if(argv[1] == "-c" || argv[1] == "-C"){
                while((c = fgetc(fp)) != EOF){
                    count++;
                }
                printf("�����ַ�%d��\n",count);
                count = 0;
                fclose(fp);
                exit(0);
            }
            else if(argv[1] == "-w" || argv[1] == "-W"){
                while((c = fgetc(fp)) != EOF){
                    if(c == ' '|| c == ',' || c == '.'){
                        word = 0;
                    }else if(word == 0){
                        word = 1;
                        count++;
                    }
                }
                printf("���е���%d��\n",count+1);
                count = 0;
                fclose(fp);
                exit(0);
            }
            else{
            	printf(argv[1]); 
            	printf("\n");
            	printf("�ұ����ˣ���~dIU&^!@E*d0QD");
			}
        }
    }
}
