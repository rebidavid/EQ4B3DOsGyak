#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{

    int numbers[50];
    int i = 0;
    FILE *file;
    if (file = fopen("input.txt", "r"))
    {
        while (fscanf(file, "%d ", &numbers[i]) != EOF)
        {
            i++;
        }
        fclose(file);
    }
    else
    {
        printf("File Error");
    }
    numbers[i] = '\0';

    int n = sizeof(numbers) / sizeof(numbers[0]);
    int result=findGCD(numbers,n);

    FILE *fp;
    if (fp = fopen("output.txt", "w"))
    {
        fprintf(fp, "GCD is :%d\n", result);
        fclose(fp);
    }
    else
    {
        printf("File Error");
    }
    return 0;
}