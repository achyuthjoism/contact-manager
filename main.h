#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char name[32];

typedef struct{
    name firstName,middleName,lastName,email;
    char countryCode[5];
    long phone;
} Contact;


void printContact(Contact c);
