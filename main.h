#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 80

typedef char name[32];

typedef struct{
    name firstName,middleName,lastName,email;
    char countryCode[5];
    long phone;
} Contact;


void displayMessage();
void printContact(Contact c);
void getInput(Contact *c,int *index);
void printContacts(Contact *c,int total);
