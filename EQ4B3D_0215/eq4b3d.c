#include <stdio.h>

int main(void) {
    /* Az fp változóval hivatkozunk majd a nyitott fájlra. */
    FILE* fp;

    /* Létrehozzuk a fájlt, w = write = írni fogunk bele. */
    fp = fopen("david.txt", "w");

    /* Beleírjuk a "Helló, világ!" szöveget. */
    fprintf(fp, "Dávid Rebeka \nProgramtervezõ informatikus \nEQ4B3D \n");

    /* Végeztünk, bezárjuk a fájlt. */
    fclose(fp);

    fp = fopen("david.txt", "r");  /* r = read */

    if (fp != NULL) {
        for (int i = 1; i <= 10; ++i)
            fprintf(fp, "%d\n", i); /* file-printf */
        fclose(fp);                 /* file-close */
    }
    else {
        perror("Nem sikerült megnyitni a fájlt");
    }

    return 0;
}
