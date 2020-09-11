#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int usleep(useconds_t useconds);

void insertsort(int Arr[], int n)
{
    if (n > 0)
    {
        insertsort(Arr, n - 1);
        int x = Arr[n];
        int j = n - 1;
        while (j >= 0 && Arr[j] > x)
        {
            Arr[j + 1] = Arr[j];
            j = j - 1;
        }
        Arr[j + 1] = x;
        //    for (int cnt = 0; cnt <= n; cnt++)
        //    {
        //        printf("%d|", Arr[cnt]);
        //    }
        //    printf("\r");
        //    fflush(stdout);
        //    usleep(200000);
    }
    for (int cnt = 0; cnt <= n; cnt++)
    {
        printf("%d|", Arr[cnt]);
    }
    printf("\r");
    fflush(stdout);
    // usleep(20000);
}

int main()
{
    int n, highest;
    printf("\nSize of the Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Highest Number: ");
    scanf("%d", &highest);
    // Randomly generate numbers in the Array
    time_t t;
    srand((unsigned)time(&t));

    for (int temp = 0; temp <= n; temp++)
    {
        arr[temp] = rand() % highest;
    }

    // Output original Array
    printf("\n Original Array: \n\n");
    for (int temp = 0; temp <= n; temp++)
    {
        printf("%d|", arr[temp]);
    }

    printf("\n\n");
    printf("Sorted Array: \n\n");
    insertsort(arr, n);
    printf("\n\n");

    return 0;
}
