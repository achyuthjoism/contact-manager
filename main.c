#include "main.h"

int main(void)
{
    int i,choice=0,total=0;
    Contact *c = malloc(MAX*sizeof(Contact));
    if(c==NULL)
    {
        printf("Malloc allocation error");
        return -1;
    }
    while(choice!=4)
    {
        displayMessage();
        scanf(" %d",&choice);
        while((getchar()) != '\n');
        if(4==choice)
            break;
        printf("\n");
        switch(choice)
        {
            case 1:
                getInput(c,&total);
                break;
            case 2:
                printContacts(c,total);
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                printf("Enter a valid choice\n");
        }
    }
    free(c);
    c= NULL;
    return 0;
}

void displayMessage()
{
    printf("1.Add a Contact.\n");
    printf("2.View a Contact.\n");
    printf("3.Delete a Contact.\n");
    printf("4.Exit.\n");
    printf("Enter your choice: ");
}

void printContact(Contact c)
{
    printf("First Name: %s\n",c.firstName);
    printf("Middle Name: %s\n",c.middleName);
    printf("Last Name: %s\n",c.lastName);
    printf("Phone: %s %ld\n",c.countryCode,c.phone);
    printf("Email: %s\n",c.email);
}

void getInput(Contact *c,int *index)
{
    int i = *index;
    printf("Enter the First Name: ");
    fgets(c[i].firstName,sizeof(c[i].firstName),stdin);
    c[i].firstName[strlen(c[i].firstName)-1] = '\0';
    printf("Enter the Middle Name: ");
    fgets(c[i].middleName,sizeof(c[i].middleName),stdin);
    c[i].middleName[strlen(c[i].middleName)-1] = '\0';
    printf("Enter the Last Name: ");
    fgets(c[i].lastName,sizeof(c[i].lastName),stdin);
    c[i].lastName[strlen(c[i].lastName)-1] = '\0';
    printf("Enter the Email: ");
    fgets(c[i].email,sizeof(c[i].email),stdin);
    c[i].email[strlen(c[i].email)-1] = '\0';
    printf("Enter the Country Code: ");
    fgets(c[i].countryCode,sizeof(c[i].countryCode),stdin);
    c[i].countryCode[strlen(c[i].countryCode)-1] = '\0';
    printf("Enter the Phone Number: ");
    scanf(" %ld",&c[i].phone);
    getchar();
    (*index)++;
}

void printContacts(Contact *c,int total)
{
    int i=0;
    for(i=0;i<total;i++)
        printContact(c[i]);
}
