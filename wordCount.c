#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
            if(strcmp(argv[1], "-c")==0 || strcmp(argv[1], "-C")==0){
                while((c = fgetc(fp)) != EOF){
                    count++;
                }
                printf("�����ַ�%d��\n",count);
                count = 0;
                fclose(fp);
                exit(0);
            }
            else if(strcmp(argv[1], "-w")==0 || strcmp(argv[1], "-W")==0){//strcmp�Ƚ��ַ�������ȷ���0.��==��Ƚϵ�ַ�� 
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
            	printf("�ұ����˰�����~dIU&^!@E*d0QD\n");
			}
        }
    }
}
