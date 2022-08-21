#include<stdio.h>
#include<stdlib.h>
#include <windows.h>
#include<string.h>

int lenth;

void code(char *lag,char trans[][6])
{
    bool x=false;
    char g;
    do{
        printf("please enter the word's you need to be transilated:\n");
        gets(lag);
        printf("would you like to change what you enter:   %s",lag);
        printf("\nplease chose between Yes[Y,y] or No[N,n]:");
        scanf("%c",&g);
        if(g=='n'||g=='N')
            x=false;
        else if(g=='y'||g=='Y')
            x=true;
    }while(!x);

    int y=strlen(lag);
    for(int i=0;i<y;i++)
    {
        if(lag[i]==' '){
            strcpy(trans[i],"/");
        }
        else{
                if(lag[i]=='a'||lag[i]=='A')
                    strcpy(trans[i],".-");
                else if(lag[i]=='b'||lag[i]=='B')
                    strcpy(trans[i],"-...");
                else if(lag[i]=='c'||lag[i]=='C')
                    strcpy(trans[i],"-.-.");
                else if(lag[i]=='d'||lag[i]=='D')
                    strcpy(trans[i],"-..");
                else if(lag[i]=='e'||lag[i]=='E')
                    strcpy(trans[i],".");
                else if(lag[i]=='f'||lag[i]=='F')
                    strcpy(trans[i],"..-.");
                else if(lag[i]=='g'||lag[i]=='G')
                    strcpy(trans[i],"--.");
                else if(lag[i]=='h'||lag[i]=='H')
                    strcpy(trans[i],"....");
                else if(lag[i]=='i'||lag[i]=='I')
                    strcpy(trans[i],"..");
                else if(lag[i]=='j'||lag[i]=='J')
                    strcpy(trans[i],".---");
                else if(lag[i]=='K'||lag[i]=='k')
                    strcpy(trans[i],"-.-");
                else if(lag[i]=='l'||lag[i]=='L')
                    strcpy(trans[i],".-..");
                else if(lag[i]=='m'||lag[i]=='M')
                    strcpy(trans[i],"--");
                else if(lag[i]=='n'||lag[i]=='N')
                    strcpy(trans[i],"-.");
                else if(lag[i]=='o'||lag[i]=='O')
                    strcpy(trans[i],"---");
                else if(lag[i]=='p'||lag[i]=='p')
                    strcpy(trans[i],".--.");
                else if(lag[i]=='q'||lag[i]=='Q')
                    strcpy(trans[i],"--.-");
                else if(lag[i]=='r'||lag[i]=='R')
                    strcpy(trans[i],".-.");
                else if(lag[i]=='s'||lag[i]=='S')
                    strcpy(trans[i],"...");
                else if(lag[i]=='t'||lag[i]=='T')
                    strcpy(trans[i],"-");
                else if(lag[i]=='u'||lag[i]=='U')
                    strcpy(trans[i],"..-");
                else if(lag[i]=='v'||lag[i]=='V')
                    strcpy(trans[i],"...-");
                else if(lag[i]=='w'||lag[i]=='W')
                    strcpy(trans[i],".--");
                else if(lag[i]=='x'||lag[i]=='X')
                    strcpy(trans[i],"-..-");
                else if(lag[i]=='y'||lag[i]=='Y')
                    strcpy(trans[i],"-.--");
                else if(lag[i]=='i'||lag[i]=='i')
                    strcpy(trans[i],"--..");
                else if(lag[i]=='1')
                    strcpy(trans[i],".----");
                else if(lag[i]=='2')
                    strcpy(trans[i],"..---");
                else if(lag[i]=='3')
                    strcpy(trans[i],"...--");
                else if(lag[i]=='4')
                    strcpy(trans[i],"....-");
                else if(lag[i]=='5')
                    strcpy(trans[i],".....");
                else if(lag[i]=='6')
                    strcpy(trans[i],"-....");
                else if(lag[i]=='7')
                    strcpy(trans[i],"--...");
                else if(lag[i]=='8')
                    strcpy(trans[i],"---..");
                else if(lag[i]=='9')
                    strcpy(trans[i],"----.");
                else if(lag[i]=='0')
                    strcpy(trans[i],"-----");
        }

    }
    lenth=y;
}

void play(char trans[][6])//(char code[][6])
{
    for(int i=0;i<lenth;i++){
        for(int y=0;y<strlen(trans[i]);y++){
            if(trans[i][y]=='.'){
                Beep(750,500);
                Sleep(40);
                }
            else if(trans[i][y]=='-'){
                Beep(750,800);
                Sleep(40);
                }
            else if(trans[i][y]=='/'){
                Sleep(1000);
            }
        }
    }
}

void print(char trans[][6]){
    for (int i=0;i<lenth;i++){
        if(trans[i][0]=='\0'){
            break;
        }
        else
        printf("%s   ",trans[i]);
    }
}

int main()
{
    char lag[999];
    char trans[999][6];
    code(lag,trans);
    play(trans);
    print(trans);
    return 0;
}
