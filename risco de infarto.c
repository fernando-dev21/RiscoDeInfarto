#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

void apresentacao();
bool sexo();
int idade();
int diabetico();
int fumante();
int colesterol();
int colesterolHDL();
int pasEpad();
int riscoDeInfarto();
void flush_in();

int fatorDerisco;
bool s;
int i;

int main(){
    setlocale(LC_ALL, "portuguese");
    int ;
    apresentacao();
    sexo();
    idade();
    diabetico();
    fumante();
    colesterol();
    colesterolHDL();
    pasEpad();
    riscoDeInfarto();
    system ("pause");
    return 0;
}
void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}
void apresentacao(){
    printf("Calcule seu risco de infarto");
    printf("\nObs: Use o programa apenas se você possui entre 30 e 74 anos.");
}
bool sexo(){
    int loop=1;
    while(loop==1){
        printf("\n1)Qual é o seu sexo ?");
        printf("\n [F] - Feminino: ");
        printf("\n [M] - Masculino: ");
        switch (getchar())
        {
        case 'f':
        case 'F':
            s = false;
            loop = 0;
            flush_in();
            break;
        case 'm':
        case 'M':
            s = true;
            loop = 0;
            flush_in();
            break;
        default:
            printf("\nOpção inválida");
            loop = 1;
            flush_in();
            break;
        }
    }   
    return sexo; 
}
int idade(){
    printf("2) Qual sua idade? ");
    scanf("%d", &i);
    if(i<30 || i>74){
        printf("Idade inválida\n");
        return 0;
    }else{
        if(s == false){
            if(i>=30 && i<=34){
                fatorDerisco += -9;
            }else if(i>34 && i<=39){
                fatorDerisco += -4;
            }else if(i>39 && i<=44){
                fatorDerisco += 0;
            }else if(i>44 && i<=49){
                fatorDerisco += 3;
            }else if(i>49 && i<=54){
                fatorDerisco += 6;
            }else if(i>54 && i<=59){
                fatorDerisco += 7;
            }else{
                fatorDerisco += 8;
            }
        }else{
            if(i>=30 && i<=34){
                fatorDerisco += -1;
            }else if(i>34 && i<=39){
                fatorDerisco += 0;
            }else if(i>39 && i<=44){
                fatorDerisco += 1;
            }else if(i>44 && i<=49){
                fatorDerisco += 2;
            }else if(i>49 && i<=54){
                fatorDerisco += 3;
            }else if(i>54 && i<=59){
                fatorDerisco += 4;
            }else if(i>59 && i<=64){
                fatorDerisco =+ 5;
            }else if(i>64 && i<=69){
                fatorDerisco += 6;  
            }else{
                fatorDerisco += 7;
            }
        }
    }
    flush_in();
    return fatorDerisco;
}
int diabetico(){
    int loop = 1;
    while(loop == 1){
        printf("\n3) Você é diabético?");
        printf("\n [S] - Sim: ");
        printf("\n [N] - Não: ");
        switch (getchar())
        {
        case 's':
        case 'S':
            if(s == false){
                fatorDerisco += 4;
             }else{
                fatorDerisco += 2;
            }loop = 0;
            flush_in();
            break;
        case 'n':
        case 'N':
            fatorDerisco += 0;
            loop = 0;
            flush_in();
            break;
        default:
            printf("\n Opção não encontrada!");
            loop = 1;
            flush_in();
            break;
        }
    }
        return diabetico;
}
int fumante(){
    int loop = 1;
    while(loop == 1){
        printf("\n4) Você é fumante?");
        printf("\n [S] - Sim: ");
        printf("\n [N] - Não: ");
        switch (getchar())
        {
        case 's':
        case 'S':
            if(s == false){
                fatorDerisco += 2;
             }else{
                fatorDerisco += 2;
            }loop = 0;
            flush_in();
            break;
        case 'n':
        case 'N':
            fatorDerisco += 0;
            loop = 0;
            flush_in();
            break;
        default:
            printf("\n Opção não encontrada!");
            loop = 1;
            flush_in();
            break;
        }
    }
        return fumante;
}
int colesterol(){
    int loop = 1;
    while(loop == 1){
        printf("\n 5) Indique o seu colesterol total, usando a legenda:");
        printf("\n a) < 160 ");
        printf("\n b) 160-199");
        printf("\n c) 200-239");
        printf("\n d) 240-279");
        printf("\n e) >=280");
        switch (getchar())
        {
        case 'a':
        case 'A':
            if(s == false){
                fatorDerisco += -2;
             }else{
                fatorDerisco += -3;
            }loop = 0;
            flush_in();
            break;
        case 'b':
        case 'B':
            if(s == false){
                fatorDerisco += 0;
             }else{
                fatorDerisco += 0;
            }loop = 0;
            flush_in();
            break;
        case 'c':
        case 'C':
            if(s == false){
                fatorDerisco += 1;
             }else{
                fatorDerisco += 1;
            }loop = 0;
            flush_in();
            break;
        case 'd':
        case 'D':
            if(s == false){
                fatorDerisco += 1;
             }else{
                fatorDerisco += 2;
            }loop = 0;
            flush_in();
            break;  
        case 'e':
        case 'E':
            if(s == false){
                fatorDerisco += 3;
             }else{
                fatorDerisco += 3;
            }loop = 0;
            flush_in();
            break;          
        default:
            printf("\n Opção não encontrada!");
            loop = 1;
            flush_in();
            break;
        }
    }
        return colesterol;
}
int colesterolHDL(){
    int loop = 1;
    while(loop == 1){
        printf("\n 6) Indique o seu HDL colesterol, usando a legenda:");
        printf("\n a) < 35 ");
        printf("\n b) 35-44");
        printf("\n c) 45-49");
        printf("\n d) 50-59");
        printf("\n e) >=60");
        switch (getchar())
        {
        case 'a':
        case 'A':
            if(s == false){
                fatorDerisco += 5;
             }else{
                fatorDerisco += 2;
            }loop = 0;
            flush_in();
            break;
        case 'b':
        case 'B':
            if(s == false){
                fatorDerisco += 2;
             }else{
                fatorDerisco += 1;
            }loop = 0;
            flush_in();
            break;
        case 'c':
        case 'C':
            if(s == false){
                fatorDerisco += 1;
             }else{
                fatorDerisco += 0;
            }loop = 0;
            flush_in();
            break;
        case 'd':
        case 'D':
            if(s == false){
                fatorDerisco += 0;
             }else{
                fatorDerisco += 0;
            }loop = 0;
            flush_in();
            break;  
        case 'e':
        case 'E':
            if(s == false){
                fatorDerisco += -3;
             }else{
                fatorDerisco += -1;
            }loop = 0;
            flush_in();
            break;          
        default:
            printf("\n Opção não encontrada!");
            loop = 1;
            flush_in();
            break;
        }
    }
        return colesterolHDL;
}
int pasEpad(){
    int loop = 1;
    while(loop == 1){
        printf("\n 7) Indique o seu PAS e PAD, usando a legenda:");
        printf("\n     PAS      PAD");
        printf("\n a) <120      <80");
        printf("\n b) 120-129   80-84");
        printf("\n c) 130-139   85-89");
        printf("\n d) 140-159   90-99");
        printf("\n e) >=160     >=100");
        switch (getchar())
        {
        case 'a':
        case 'A':
            if(s == false){
                fatorDerisco += -3;
             }else{
                fatorDerisco += 0;
            }loop = 0;
            flush_in();
            break;
        case 'b':
        case 'B':
            if(s == false){
                fatorDerisco += 0;
             }else{
                fatorDerisco += 0;
            }loop = 0;
            flush_in();
            break;
        case 'c':
        case 'C':
            if(s == false){
                fatorDerisco += 0;
             }else{
                fatorDerisco += 1;
            }loop = 0;
            flush_in();
            break;
        case 'd':
        case 'D':
            if(s == false){
                fatorDerisco += 2;
             }else{
                fatorDerisco += 2;
            }loop = 0;
            flush_in();
            break;  
        case 'e':
        case 'E':
            if(s == false){
                fatorDerisco += 3;
             }else{
                fatorDerisco += 3;
            }loop = 0;
            flush_in();
            break;          
        default:
            printf("\n Opção não encontrada!");
            loop = 1;
            flush_in();
            break;
        }
    }
        return pasEpad;
}
int riscoDeInfarto(){
        if(s == false){
            if(riscoDeInfarto == -2){
                printf("Risco de infarto: 1%%\n");
                printf("Excelete");
            }else if(riscoDeInfarto == -1){
                printf("Risco de infarto: 2%%\n");
                printf("Excelete"); 
            }else if(riscoDeInfarto == 0){
                printf("Risco de infarto: 2%%\n");
                printf("Excelete"); 
            }else if(riscoDeInfarto == 1){
                printf("Risco de infarto: 2%%\n");
                printf("Excelete"); 
            }else if(riscoDeInfarto == 2){
                printf("Risco de infarto: 3%%\n");
                printf("Excelete");   
            }else if(riscoDeInfarto == 3){
                printf("Risco de infarto: 3%%\n");
                printf("Excelete");   
            }else if(riscoDeInfarto == 4){
                printf("Risco de infarto: 4%%\n");
                printf("Excelete");   
            }else if(riscoDeInfarto == 5){
                printf("Risco de infarto: 4%%\n");
                printf("Excelete");   
            }else if(riscoDeInfarto == 6){
                printf("Risco de infarto: 5%%\n");
                printf("Excelete");   
            }else if(riscoDeInfarto == 7){
                printf("Risco de infarto: 6%%\n");
                printf("Bom");   
            }else if(riscoDeInfarto == 8){
                printf("Risco de infarto: 7%%\n");
                printf("Bom");   
            }else if(riscoDeInfarto == 9){
                printf("Risco de infarto: 8%%\n");
                printf("Bom");
            }else if(riscoDeInfarto == 10){
                printf("Risco de infarto: 10%%\n");
                printf("Atenção");
            }else if(riscoDeInfarto == 11){
                printf("Risco de infarto: 11%%\n");
                printf("Atenção");
            }else if(riscoDeInfarto == 12){
                printf("Risco de infarto: 13%%\n");
                printf("Atenção");
            }else if(riscoDeInfarto == 13){
                printf("Risco de infarto: 15%%\n");
                printf("Atenção");
            }else if(riscoDeInfarto == 14){
                printf("Risco de infarto: 18%%\n");
                printf("Cuidado alto risco de infarto");
            }else if(riscoDeInfarto == 15){
                printf("Risco de infarto: 20%%\n");
                printf("Cuidado alto risco de infarto");
            }else if(riscoDeInfarto == 16){
                printf("Risco de infarto: 24%%\n");
                printf("Cuidado alto risco de infarto");
            }else{
                printf("Risco de infarto: >= 27%%\n");
                printf("Cuidado alto risco de infarto"); 
            }
        }else{
            if(riscoDeInfarto == -1){
                printf("Risco de infarto: 2%%\n");
                printf("Excelete");
            }else if(riscoDeInfarto == 0){
                printf("Risco de infarto: 3%%\n");
                printf("Excelete"); 
            }else if(riscoDeInfarto == 1){
                printf("Risco de infarto: 3%%\n");
                printf("Excelete"); 
            }else if(riscoDeInfarto == 2){
                printf("Risco de infarto: 4%%\n");
                printf("Excelete"); 
            }else if(riscoDeInfarto == 3){
                printf("Risco de infarto: 5%%\n");
                printf("Excelete");   
            }else if(riscoDeInfarto == 4){
                printf("Risco de infarto: 7%%\n");
                printf("Excelete");   
            }else if(riscoDeInfarto == 5){
                printf("Risco de infarto: 8%%\n");
                printf("Excelete");   
            }else if(riscoDeInfarto == 6){
                printf("Risco de infarto: 10%%\n");
                printf("Bom");   
            }else if(riscoDeInfarto == 7){
                printf("Risco de infarto: 13%%\n");
                printf("Bom");   
            }else if(riscoDeInfarto == 8){
                printf("Risco de infarto: 16%%\n");
                printf("Atenção");   
            }else if(riscoDeInfarto == 9){
                printf("Risco de infarto: 20%%\n");
                printf("Atenção");   
            }else if(riscoDeInfarto == 10){
                printf("Risco de infarto: 25%%\n");
                printf("Atenção");
            }else if(riscoDeInfarto == 11){
                printf("Risco de infarto: 31%%\n");
                printf("Atenção");
            }else if(riscoDeInfarto == 12){
                printf("Risco de infarto: 37%%\n");
                printf("Cuidado alto risco de infarto");
            }else if(riscoDeInfarto == 13){
                printf("Risco de infarto: 45%%\n");
                printf("Cuidado alto risco de infarto");
            }else{
                printf("Risco de infarto: >= 27%%\n");
                printf("Cuidado alto risco de infarto"); 
            }
        }
    flush_in();
    return riscoDeInfarto;
}