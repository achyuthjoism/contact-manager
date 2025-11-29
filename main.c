#include "main.h"

int main(void)
{
    Contact c;
    strcpy(c.firstName,"Raghu");
    strcpy(c.lastName,"N");
    strcpy(c.middleName,"Rao");
    c.phone = 23013040L;
    strcpy(c.email,"raghu.n.rao@gmail.com");
    strcpy(c.countryCode,"+91");
    printContact(c);
    return 0;
}

void printContact(Contact c)
{
    printf("First Name: %s\n",c.firstName);
    printf("Middle Name: %s\n",c.middleName);
    printf("Last Name: %s\n",c.lastName);
    printf("Phone: %s %ld\n",c.countryCode,c.phone);
    printf("Email: %s\n",c.email);
}
