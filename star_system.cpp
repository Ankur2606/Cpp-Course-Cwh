#include <iostream>
using  namespace std;
int starpattern(int, int);
int main()
{
    int a, r;
    cout<<"enter 0 for star pattern \nenter 1 for reverse star pattern\n";
    scanf("%d", &a);
    cout<<"enter the no of row which you want to print the star : ";
    scanf("%d", &r);
    starpattern(r, a);
    return 0;
}
int starpattern(int r, int a)
{
    if (a == 0)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("69");
            }
            printf("\n");
        }
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r - i; j++)
            {
                printf("69");
            }
            printf("\n");
        }
    }
}