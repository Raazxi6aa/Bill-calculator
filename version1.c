#include <stdio.h>
int bill;
void charge(void);
void consumer(void);
void cost(void);

int main() {
    int choose;
   printf("==============");
   printf("ELECTRICITY BILL CALCULATOR");
   printf("==============");
   printf("\n");
   printf("\n1.Enter Consumer Detail");
   printf("\t\t2.Bill calculator");
   printf("\n3.View tarrif");
   printf("\t\t\t4.Bill Calculate with consumer data");
   printf("\n");
   printf("\nChoose one option:");
   scanf("%d",&choose);
   if (choose==1)
   {
    switch (choose)
    {
        case 1:
        {
            char name[50];
            printf("Enter Consumer name:");
            scanf(" %[^\n]",name);
            int id;
            printf("\nEnter 10 digit Consumer Id:");
            scanf("%d",&id);
            printf("\n");
        }
        break;
    }
}
else if (choose==2){
    switch (choose)
    {
        case 2:
        {
            cost();
            
        }
        printf("\n");
    }

}
else if (choose==3){
    switch (choose)
    {
        case 3:
        {
            charge();
        }
    }
}
else if (choose==4)
{
    switch (choose)
    {
        case 4:
        {
            consumer();
            printf("\n");
        }
    }
}
  else{
    printf("Choose correct option");
    printf("\n");
  }

   printf("==============");
   printf("Thank You for using our service");
   printf("==============");



    return 0;
}
void charge(void)
{
    printf("\tCharges per unit electricity consumption\n");
    printf("\tUNITS");
    printf("\t\t\tCHARGES");
    printf("\n");
    printf("\n\t1-50");
    printf("\t\t\tRs. 2.90");
    printf("\n\t51-200");
    printf("\t\t\tRs. 4.70");
    printf("\n\t200-400");
    printf("\t\t\tRs. 5.70");
    printf("\n\t400+");
    printf("\t\t\tRs. 6.10");
    printf("\n");

}
void consumer(void)
{
    int name1[100],id1;
    float bill1;
    printf("Enter Consumer name:");
    scanf(" %[^\n]",&name1);
    printf("Enter 10 Digit Consumer ID:");
    scanf("%d",&id1);
     float bill=0;
            int unit;
            printf("Enter unit used:");
            scanf("%d",&unit);
            if(unit<=50){
                bill=unit*2.90;
            }
            else if(unit<=200){
                bill=50*2.90+(unit-50)*4.70;
            }
            else if(unit<=400){
                bill=50*2.90+150*4.70+(unit-200)*5.70;
            }
            else{
                bill=50*2.90+150*4.70+200*5.70+(unit-400)*6.10;
            }

            printf("\n\n");
            printf("\tName:%s",name1);
            printf("\t\t\t\tId:%d",id1);
            printf("\n\n\tUnit Consumed:%d",unit);
            printf("\t\t\tTotal Bill:%.2f",bill);

}
void cost(void)
{
      float bill=0;
            int unit;
            printf("Enter unit used:");
            scanf("%d",&unit);
            if(unit<=50){
                bill=unit*2.90;
            }
            else if(unit<=200){
                bill=50*2.90+(unit-50)*4.70;
            }
            else if(unit<=400){
                bill=50*2.90+150*4.70+(unit-200)*5.70;
            }
            else{
                bill=50*2.90+150*4.70+200*5.70+(unit-400)*6.10;
            }
             printf("Total bill : %.2f",bill);
           

}