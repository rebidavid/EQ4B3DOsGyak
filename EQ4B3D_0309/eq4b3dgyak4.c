#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

#define SIZE 255

#define FALSE 0
#define TRUE 1

int main()
{

	char str[SIZE];
    int start = 1;

	while(start) {
        scanf("%s", str);
        if (str[0] == 'n') {
            start = 0;
        } else {
            system(str);
            printf("Szeretned folytatni ? N => Nem\n Ha folytatni szeretned nyomd meg az Y-t\nNyomj entert a következo parancsert\n");
        }
	}
	exit(0);
}
