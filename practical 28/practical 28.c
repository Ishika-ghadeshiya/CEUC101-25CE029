
#include<stdio.h>
#include<string.h>

union book_details
{
    int bid;
    char book_name[50],auther[50], status;
    float price;
};
void main()
{
     int t;
     char  Tbook_name[50],Tauther[50],Tstatus;
     float Tprice;
   union book_details s;
   printf("Enter book id\n");
   scanf("%d",&s.bid);
    t=s.bid;
    printf("Enter title of book\n");
   scanf(" %[^\n]",s.book_name);
   strcpy(Tbook_name,s.book_name);
    printf("Enter auther\n");
   scanf(" %[^\n]",s.auther);
   strcpy(Tauther,s.auther);
    printf("Enter status\n");
   scanf(" %c",&s.status);
   strcpy(Tstatus,s.status);
    printf("Enter price\n");
   scanf(" %f",&s.price);
    Tprice=s.price;

   printf("\n book id: %d\n",t);
   printf("\ntitle of book: %s",Tbook_name);
   printf("\nauther :%s",Tauther);
   printf("\nstatus:%c",Tstatus);
   printf("\nprice:%f", Tprice);
    printf("\nThis program is developed by Ishika_25CE029");
}

