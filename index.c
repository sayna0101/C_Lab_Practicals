# include<stdio.h>

void nationality();
int main() {
    // float pi = 3.14;
    // printf("%.3f is value of pi",pi);
    // printf("%d",-16%3);
    // char x='1';
    // printf("%d",x>='0' && x<='9');

    /*int age;
    printf("Enter age:");
    scanf("%d",&age);
    if (age>18)
        printf("adult");
    else if (13<age<18)
        printf("Teenager");
    else
        printf("child");
    return 0;*/

    // armstong num
    /*int num,orginalnum,d1,d2,d3,sum;
    printf("enter no.");
    scanf("%d",&num);
    orginalnum = num;
    if (num>=100 && num<=999){
        d1 = num % 10;
        num /= 10;
        d2 = num%10;
        d3 = num/10;
        sum = (d1*d1*d1) + (d2*d2*d2) + (d3*d3*d3);
        if (sum==orginalnum){
            printf("armstrong num");
        }
        else{
            printf("not an armstrong num");
        }
    }*/

    /*int num;
    printf("enter no.:");
    scanf("%d",&num);

    int sum = 0;
    int i =1;
    do{
        sum += i;
        i++;
    }while(i<=num);
    printf("sum: %d",sum);
    return 0;*/

    /*int  n;
    printf("enter num:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }*/
   
    /*int num;
    do{
        printf("enter num:");
        scanf("%d",&num);
        printf("%d\n",num);
        
        if(num%2 != 0){
            break;
        }
    }while(1);*/
    nationality();
    return 0;
}

void nationality(){
    char n;
    printf("Enter f for french and i for indian:");
    scanf("%c",&n);
    if (n=='f'){
        printf("bonjour");
    }
    else{
        printf("namaste");
    }
}
