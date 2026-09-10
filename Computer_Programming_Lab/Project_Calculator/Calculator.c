#include<stdio.h>
#include<string.h>
#include<math.h>
float m3,A3;                        //      Global Variable
int password_verify(void);
void intro(void);
void addMain(void);
void Addition(float,float);
void sub(void);
void multMain(void);
void Multiplication(float,float);
void Divide(void);
void Root(void);
void power(float,float);
void CaseConv(char str[256]);      //  Case Conversion

//    ********** Start Main Function **********

int main(void){

    int i;
    float select=0;
    int token = password_verify();

    if(token==1){

        for(i=1;;i++){
            intro();
            printf("\nEnter Digit:");
            scanf("%f",&select);
            if(select==1 || select==2 || select==3 || select==4 || select==5 || select==6 || select==7){
                    //  Quit    if(select==0){break;}

                    //  Addition    1
                if(select==1){
                    addMain();
                }
                    //  Subtraction 2
                if(select==2){

                        sub();
                   // continue;
                }
                    //  Multiplication  3
                if(select==3){
                    printf("\nMultiplication \n");
                    multMain();
                }
                    //  Divide  4
                if(select==4){
                    Divide();
                }
                    //  Root
                if(select==5){
                    Root();
                }
                    //  Power
                if(select==6){
                    float p1,p2;
                    power(p1,p2);
                }

                    //  Case Conversion
                if(select==7){
                    int i;
                    printf("\n---------- Case Conversion ----------\n");

                    for(i=0;;i++){
                        char s1[256];
                        printf("\n\nGive the string: ");
                        fflush(stdin);  // gets() not working! so we use fflush(stdin)
                        gets(s1);
                        if(s1[0]=='0'){
                            break;
                        }
                        CaseConv(s1);
                    }
                }

            }else if(select==0){
                //  Quit    0
                break;
            }else if(select<=0 || select>=8){
                continue;
            }else{
                continue;
            }
        }
    }else{
        printf("Here Something Wrong!!!");
    }
    return 0;
}   //    ********** Finish Main Function **********

/*
      --------------------------------------
      ---------- Login and Verify ----------
      --------------------------------------
*/
int password_verify(void){
    char name[256]="tom",pass[256]="111",nametest[256],passtest[256];
    int i,j,passKey=0;

    for(i=0;;i++){
        //  ---------- User Name Verify ----------
        printf("\n User Name: ");
        gets(nametest);
        if(strcmp(name,nametest) == 0){
            for(j=0;;j++){
                // ---------- User Password Verify ----------
                printf("\n Password: ");
                gets(passtest);
                if(strcmp(pass,passtest) == 0){
                    passKey++;
                    break;
                }else if(strcmp(pass,passtest) == -1 || strcmp(pass,passtest) == 1 || strcmp(pass,passtest) != 0){
                    printf(" Password is Incorrect !!! Please Try Again... ");
                    continue;
                }
            }
            break;
        }else if(strcmp(name,nametest) == -1 || strcmp(name,nametest) == 1 || strcmp(name,nametest) != 0){
            printf(" User Name isn't Exist!!! Please Try Again... ");
            continue;
        }
    }
    return passKey;
}   //  ---------- Finish Login and Verify ----------


void intro(void){

    printf("\nWhat you want!Just type Number\n\n Addition \t= 1\n Subtraction \t= 2 \n Multiplication = 3");
    printf(" \n Divide \t= 4\n Root \t\t= 5\n Power \t\t= 6\n Case Conversion= 7\n Quit \t\t= 0\n");
}

//      ---------- Addition ----------

void addMain(void){
    printf("\n---------- Addition ----------\n\n");
    float a1=0,a2=0,i;
        printf("Give 1st Number: ");
        scanf("%f",&a1);

    for(i=0;;i++){
        if(a1==0){
            break;
        }
        printf("Give 2nd Number: ");
        if(i>0){
            a1=A3;
        }
        scanf("%f",&a2);
        if(a2==0){
           // Addition(a1,a2);
            break;
        }
        Addition(a1,a2);
        printf("\nSummition = %f\n",A3);
    }

}
void Addition(float A1,float A2){

    A3=A1+A2;

}
//      ---------- Subtraction ----------

void sub(void){
    int i;
    float n1,n2;
    for(i=0;;i++){
        printf("\n---------- Subtraction ----------\n\n");
        printf("Type first Number: ");
        scanf("%f",&n1);
        if(n1==0){
            break;
        }
        printf("Type Second Number: ");
        scanf("%f",&n2);
        if(n2==0){
            break;
        }

        float answer=n1-n2;
        printf("\n%.3f-%.3f = %.3f\n",n1,n2,answer);
    }

}

//      ---------- Multiplication ----------

void multMain(void){
    printf("\n---------- Multiplication ----------\n\n");
    float m1=0,m2=0,j;
        printf("n1: ");
        scanf("%f",&m1);

    for(j=0;;j++){
        if(m1==0){
            break;
        }
        printf("n2: ");
        if(j>0){
            m1=m3;
        }
        scanf("%f",&m2);
        if(m2==0){
            Multiplication(m1,m2);//  printf("%f\n ",m3);
            break;
        }
        Multiplication(m1,m2);
        printf("%f\n",m3);
    }
}
void Multiplication(float a,float b){

    m3=a*b;
}
//      ---------- Divide ----------

void Divide(void){
    int i;
    float D1,D2;
    for(i=0;;i++){

        printf("\n---------- Divide ----------\n\n");
        printf("Type Devidend: ");
        scanf("%f",&D1);
        if(D1==0){
            break;
        }
        printf("Type Divisor: ");
        scanf("%f",&D2);
        if(D2==0){
            break;
        }
        float Q=D1/D2;
        printf("Quotient : %f\n",Q);
    }
}

//      ---------- Root ----------

void Root(void){
    float R1;
    printf("\n---------- Root ----------\n\n");
    int i;
    for(i=1;;i++){
        printf("Give The Number: ");
        scanf("%f",&R1);
        if(R1==0){
            break;
        }
        if(R1<0){
            printf("Please give the positive Number: \n");
            continue;
        }

        float rootValue = sqrt(R1);
        printf("The Square Root of %f : %f\n",R1,rootValue);
    }
}

//      ---------- Power ----------

void power(float P1, float P2){

   int i,j;
   printf("\n---------- Power ----------\n\n");
   for(i=1;;i++){
        printf("\nGive The Number: ");
        scanf("%f",&P1);
        if(P1==0){
            break;
        }
        printf("Give The Power(Integer) of Number: ");
        scanf("%f",&P2);
        if(P2==0){
            break;
        }

        printf("\n%f to the power %.3f = %f\n",P1,P2,pow(P1,P2));
    }

}

//      ---------- Case Conversion ----------

void CaseConv(char str[256]){

    int i,j,p=0;

    //int length=strlen(str);
    for(i=0;;i++){

        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        else if(str[i]=='\0'){
            break;
        }
        /* else if(str[i]>=!'a' && str[i]<=!'z'){
            printf("Please Give String:\n");
            continue;
        }else if(str[i]>=!'A' && str[i]<=!'Z'){
            printf("Please Give String:\n");
            continue;
        }   */

        if(str[i]>='A' && str[i]<='Z'){
            p++;
        }else if(str[i]>='a' && str[i]<='z'){
            p++;
        }

    }
        if(p>0){
            printf("\nThe Converted String is: ");
        }
        for(j=0;;j++){

            if(str[j]>='A' && str[j]<='Z' || str[j]>='a' && str[j]<='z' || str[j]<=' '){
                printf("%c",str[j]);
            }

            if(str[j]=='\0'){
                break;
            }
        }

}
