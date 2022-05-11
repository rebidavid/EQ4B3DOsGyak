#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    for(int i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            return i;
        else
            return 1;
    }
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
int input = 0;
	printf("Reading File \n");
  FILE *file=fopen("/uploads/input.txt", "r");
     do
    {
        fscanf(file, "%d ", &input);

        if (!feof(file))
        {
        numbers[i]=input;
        printf("%d \n",numbers[i]);
        i++;
        }
    } while (!feof(file));



  numbers[i] = '\0';
printf("Calculating GCD \n");
  int n = sizeof(numbers) / sizeof(numbers[0]);
  int result=findGCD(numbers,n);
  printf("writing to file");
  FILE *fp=fopen("/uploads/output.txt", "w");
    while (!feof(fp))
    {
      fprintf(fp, "GCD is :%d\n", result);
    }
    fclose(fp);
  return 0;
}