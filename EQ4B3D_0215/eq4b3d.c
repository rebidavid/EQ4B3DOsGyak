#include <stdio.h>

int main(void) {
    /* Az fp v�ltoz�val hivatkozunk majd a nyitott f�jlra. */
    FILE* fp;

    /* L�trehozzuk a f�jlt, w = write = �rni fogunk bele. */
    fp = fopen("david.txt", "w");

    /* Bele�rjuk a "Hell�, vil�g!" sz�veget. */
    fprintf(fp, "D�vid Rebeka \nProgramtervez� informatikus \nEQ4B3D \n");

    /* V�gezt�nk, bez�rjuk a f�jlt. */
    fclose(fp);

    fp = fopen("david.txt", "r");  /* r = read */

    if (fp != NULL) {
        for (int i = 1; i <= 10; ++i)
            fprintf(fp, "%d\n", i); /* file-printf */
        fclose(fp);                 /* file-close */
    }
    else {
        perror("Nem siker�lt megnyitni a f�jlt");
    }

    return 0;
}
