# wordCount

这是一个有bug的程序。求大佬指教。

##### 代码如下：

```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
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
            if(argv[1] == "-c" || argv[1] == "-C"){
                while((c = fgetc(fp)) != EOF){
                    count++;
                }
                printf("共有字符%d个\n",count);
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
                printf("共有单词%d个\n",count+1);
                count = 0;
                fclose(fp);
                exit(0);
            }
            else{
            	printf(argv[1]); 
            	printf("\n");
            	printf("我崩溃了！！~dIU&^!@E*d0QD\n");
			}
        }
    }
}
```



## 问题所在：

无论输入是什么，，程序都只会执行最后的else。。。
