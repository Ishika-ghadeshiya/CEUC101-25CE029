#include<stdio.h>

void addbook();
void displaybook();
int gettotalbooks();
int calculatefine(int days_late);
void  borrowbook();


char book_name[50][50],status[50],y,add;
int ID[50],t=0,ch,i,days_late,fine,id;

int main()
{

    do{
        printf("1. Add a new book\n");
        printf("2. Display all available books\n");
        printf("3. Get total number of books\n");
        printf("4. Borrow a book\n");
        printf("5. Calculate fine\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            addbook();
            break;

            case 2:
            displaybook();
            break;

            case 3:
            gettotalbooks();
            printf("%d\n",t);
            break;

            case 4:
            borrowbook();
             break;

            case 5:
            printf(" enter no of days\n");
            scanf("%d", &days_late);
            fine = calculatefine(days_late);
            printf("Rs %d\n",fine);
            break;

            case 6:
            return 0;

            default:
            printf("Invalid choice!\n");
        }

    }
    while(ch!=6);

        //return 0;
}

 void addbook()
 {

do{

   printf("Enter title of the book\n");
   scanf("%s", &book_name[t]);

    printf("Enter Book ID\n");
    scanf("%d", &ID[t]);

    printf("Book is available or not available enter y if yes and n if no\n");
    scanf(" %c", &status[t]);

    printf("Do you want to add another book?\n");
    scanf(" %c", &add);

    t++;
}
while(add == 'y');

}

void displaybook()
{
    for(i=0;i<t;i++)
    {

        printf("%-20s |%-10d |%-10c\n", book_name[i], ID[i], status[i]);

    }
}

int gettotalbooks()
{
    printf("Total no. if books:");
    return t;
}
void  borrowbook()
{
    printf("Enter book id");
    scanf("%d",&id);
    for(i=0;i<t;i++)
    {
          if(ID[i] == id)
          {
              if(status[i] == 'y')
              {
                  status[i] = 'n';
                     printf("You have borrowed the book: %s\n", book_name[i]);
              }
              else
            {
                printf("Sorry, this book is already borrowed.\n");
            }
            break;
          }

    }
}

int calculatefine(int days_late)
{
    int fine = 2 * days_late;
    return fine;
}
