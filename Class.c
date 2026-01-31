#include<stdio.h>
// 22-1-2026
/*#include<math.h>

int main(){
    int a = 10;
    int b = 3;
    int c;
    c = a+b;
    printf("Integer a: %d\n",a);
    printf("Integer b: %d\n",b);
    printf("sum: %d\n",c);
    return 0;
}*/

// 23-1-2026
/*#include<stdio.h>
int main(){
    int n1,n2,n3;
    scanf("%d\n",&n1);
    scanf("%d\n",&n2);
    scanf("%d",&n3);
    printf("n1: %d\n",n1);
    printf("n2: %d\n",n2);
    printf("n3: %d\n",n3);
    if (n1>n2 && n1>n3){
        printf("greatest no.:%d\n",n1);
    }
    else if(n2>n1 && n2>n3){
        printf("greatest no.:%d\n",n2);
    }
    else{
        printf("greatest no.:%d\n",n3);
    }
    return 0;*/

    /*char alpha;
    printf("enter the alpha:\n");
    scanf("%c",&alpha);
    if(alpha=='a' || alpha=='e' || alpha =='i' || alpha=='o' || alpha=='u' || alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U'){
        printf("The char is vowel.");
    }
    else{
        printf("The char is consonant.");
    }*/

    /*int num;
    long double fact=1;
    printf("Enter num:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    printf("factorial:%Lf",fact);*/

    /*int a=0;
    int b=1;
    int c;
    printf ("%d \n",a);
    printf ("%d \n",b);
    for(int i=0; i<=10;i++){  
        c = a + b;
        printf("%d\n",c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}*/

//29-1-2026
/*int main(){
    int x=10;
    printf("%d",x);
    return 0;
}*/
/*int x=20;
void function1(){
    printf("func 1: %d\n",x);
}
void function2(){
    printf("func 2: %d\n",x+20);
}
int main(){
    function1();
    function2();
    return 0;
}*/
/*void func(){
    int x=20;
    static int y=30;
    x+=10;
    y+=10;
    printf("\tLocal: %d\n\tStatic: %d\n",x,y);
}
int main(){
    printf("First call\n");
    func();
    printf("Second call\n");
    func();
    printf("Third call\n");
    func();
}*/
/*void function(){
    int x=10;
    auto int y;
    printf("Auto variable: %d",y);
}
int main(){
    function();
    return 0;
}*/
/*int main(){
    int not_int;
    const int cons = 20;
    not_int=40;
    printf("%d\n%d",not_int,cons);
} */
/*int main(){
    const int int_cons = 25;
    const char Char_cons = 'A';
    const float float_cons = 15.1264;
    const char str_cons[] = "Hello!";
    printf("Int:%d\n",int_cons);
    printf("Char:%c\n",Char_cons);
    printf("Float:%.2f\n",float_cons);
    printf("String:%s\n",str_cons);
}*/

//30-1-2026
/*int main(){
    char a ='z';
    char c;
    printf("value of a in ascii: %d\n",a);
    a++;
    printf("Value of a after increment in ascii: %d\n",a);
    c=99;
    printf("Value of c: %c\n",c);
}*/

/*int main(){
    int i;
    for (i=97;i<=122;i++){
        printf("%c ",i);
    }
}*/

/*int main(){
    int int_size = sizeof(int);
    int char_size = sizeof(char);
    int float_size = sizeof(float);
    int double_size = sizeof(double);
    int long_size = sizeof(long);
    printf("The size of int data type:%d\n",int_size);
    printf("The size of char data type:%d\n",char_size);
    printf("The size of float data type:%d\n",float_size);
    printf("The size of double data type:%d\n",double_size);
    printf("The size of long data type:%d\n",long_size);
}*/

/*int main(){
    const int V1 = 10;
    const char V2 = 'a';
    const float V3 = 10.2546;
    printf("int literal: %d\n",V1);
    printf("char literal: %c\n",V2);
    printf("float literal: %.4f\n",V3);
    return 0;
}*/

/*int main(){
    const char str[]="welcome\vto\vchitkara\vuniversity";
    printf("%s",str);
}*/

/*#include<stdbool.h>
int main(){
    bool a = true;
    bool b = false;
    printf("true:%d\n",a);
    printf("false:%d",b);
    return 0;
}*/

/*#define bool int
#define true 1;
#define false 0;
int main(){
    bool a = true;
    bool b= false;
    printf("true:%d\n",a);
    printf("false:%d\n",b);
}*/

/*typedef enum {false,true} bool;
int main(){
    bool a = true;
    bool b= false;
    printf("true:%d\n",a);
    printf("false:%d\n",b);
}*/

//31-1-2026
