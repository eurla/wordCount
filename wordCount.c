#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]){
    if(argc != 3){
        printf("请输入正确的参数！如：wordCount.exe -c input.txt\n");
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
                printf("共有字符%d个\n",count);
                count = 0;
                fclose(fp);
                exit(0);
            }
            else if(strcmp(argv[1], "-w")==0 || strcmp(argv[1], "-W")==0){//strcmp比较字符串，相等返回0.。==会比较地址。 
                while((c = fgetc(fp)) != EOF){
                    if(c == ' '|| c == ',' || c == '.'){
                        word = 0;
                    }else if(word == 0){
                        word = 1;
                        count++;
                    }
                }
                printf("共有单词%d个\n",count+1);
                count = 0;
                fclose(fp);
                exit(0);
            }
            else{
            	printf(argv[1]); 
            	printf("\n");
            	printf("我崩溃了啊！！~dIU&^!@E*d0QD\n");
			}
        }
    }
}
