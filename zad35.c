// Program treba ispisat string pomocu pointera.

#include <stdio.h>
int main()
{
    char polje[100];
    char *p;

    printf("Unesi neki string: ");
    fgets(polje, 100, stdin);

    /* pridruzivanje adrese polje[0]  pointeru
      p: p = polje je isto sto i p = polje[0]
     */
    p=polje;

    printf("Ispis stringa pomocu pointera je: ");
    //'\0' oznacuje kraj stringa
    while(*p!='\0')
        printf("%c",*p++);

    return 0;
}
