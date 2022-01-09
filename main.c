#include <stdio.h>
#include<stdlib.h>
#include<string.h>



void main() {



    animal ANIMAL_LL = NULL;

    printf("do you want to print all animals > 1-yes, 0 - no");
    int a;
    scanf("%d", &a);
    if(a)
        printAllAnimals(ANIMAL_LL);


}



typedef struct employee
{
char username[15];
char password[15];
int level;
char fullname[20];
}employee; 

typedef struct{
    employee data;
    struct employeeList* next;
}employeeList;




int doesFileExist(char* filename);
int starting();
employee* Entering();
employeeList employeeListCreator();
void addEmployee2List(employee* e ,employeeList* L);
void OP1();
void wellcoming(employee x);
void whatcclients();//
void addclient();//
void addAnimal();//
void additem();//
void sellItem();//
void GiveAnimal();//
void main(){
 int e=starting();
 employee* U=Entering();
 if(U==NULL){
     printf("you lost your chans\n");
     return;
 }
 printf("%d/n",e);
//system("pause");
    
}





int starting(){
    FILE* f_employee;
    FILE* f_item;
    FILE* f_client;
    FILE* f_log;
    int e=0;
    if(!doesFileExist("employee.txt")){
       f_employee=fopen("employee.txt","w");
       fprintf(f_employee,"%s %s %d %s\n","admin","admin",3,"System_Manager");
       fclose(f_employee);
       e=1;
    }
    if(!doesFileExist("items.txt")){
       f_item=fopen("items.txt","w");
       fclose(f_item);
       e=2;
    }
    if(!doesFileExist("clients.txt")){
       f_client=fopen("clients.txt","w");
       fclose(f_client);
       e=3;
    }
    if(!doesFileExist("clients.txt")){
       f_client=fopen("items.txt","w");
       fclose(f_client);
       e=4;
    }if(!doesFileExist("log.txt")){
       f_log=fopen("log.txt","w");
       fclose(f_log);
       e=5;
    }
    return e;
}
int doesFileExist(char* filename){
    FILE *file;
    if(file=fopen(filename,"r")){
        fclose(file);
        return 1;
    }
    return 0;
}
employee* Entering(){
   employeeList wList=employeeListCreator();
   employee *a;
   int count=0;
   char user[20],passw[20];
   employeeList *head=&wList;
  
   while (count<3)
   {
        employeeList *head=&wList;
  
    printf("please enter your user name:\n");
    scanf(" %s",user);
    printf("please enter your password name:\n");
    scanf(" %s",passw);
        while(head !=NULL){
           if((strcmp((head->data).username,user)==0)&&(strcmp((head->data).password,passw)==0)){
                return &head->data;
                printf("entering was sucssesfull");
           }else
                head=head->next;
   }
    count++;
    printf("Is or pass word are roung you have more {%d} times to try \n",3-count);

   }
    return NULL;
    // return 
}
employeeList employeeListCreator(){
    FILE* f_worker=fopen("employee.txt","r");
    employee* x=malloc(sizeof(employee));
    fscanf(f_worker," %s %s %d %s",&x->username,&x->password,&x->level,&x->fullname);

    employeeList* L=malloc(sizeof(employeeList));
    employeeList* L1=L;
    L->data=*x;
    L->next=NULL;
    while (0<fscanf(f_worker,"%s %s %d %s",&x->username,&x->password,&x->level,&x->fullname))
    {
       addEmployee2List(x,L);
       L=L->next;
    }
    return *L1;
}
void addEmployee2List(employee* e ,employeeList* L){
    employeeList* newL=malloc(sizeof(employeeList));
    newL->data=*e;
    newL->next=NULL;
    L->next=newL;
 }
 void wellcoming(employee x){
     printf("wellcome mr : %s \n",x.fullname);
     printf("your level is : %d",x.level);
     if(x.level==1)

     if(x.level==2)
     
     if(x.level==3)
 
 
 }

void OP1(){
    int ch;
    printf ("+++++++++++++++++++++++++++++\n");
    while (1)
    {
        printf("\n\tPress 1 for watching the client list");
        printf("\n\tPress 2 for adding a client 2");
        printf("\n\tPress 3 for option add an animal 3");
        printf("\n\tPress 4 for option add an item 4");
        printf("\n\tPress 5 for option sell item 5");
         printf("\n\tPress 6 give an animel");
          printf("\n\tPress 0 for end");


        printf("\n\n\tEnter :");
        scanf("%d,&ch");

        switch (ch)
        {
        case 1:
            void whatcclients();
            break;
        case 2:
            void addclient();
            break;
        case 3:
            void addAnimal();
            break;
        case 4:
            void additem();
            break;
        case 5:
            void sellItem();
            break;                
        case 6:
            void GiveAnimal();
            break;
        default:
            break;
        }
        
        
    }

}