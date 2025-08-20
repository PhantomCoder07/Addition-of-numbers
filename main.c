// Simple
#include <stdio.h>
int main()
{
    int a,b,c,sum;
    printf ("Enter three integer: ");
    scanf ("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf ("Additio of three numbers: %d\n",sum);
    return 0;
}
// By using function (Integer)
#include <stdio.h>
int add (int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf ("Addition of three numbers: %d\n",add(a,b,c));
    return 0;
}
// By using function (float)
#include <stdio.h>
float add (float a, float b, float c)
{
    return a+b+c;
}
int main()
{
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&a,&b,&c);
    printf ("Addition of three numbers: %.2f\n",add(a,b,c));
    return 0;
}
// By using Structure data type
#include <stdio.h>
struct add
{
    float value;
};
int main()
{
    int i,n;
    float sum=0.0;
    printf ("Enter limit of input numbers: ");
    scanf ("%d",&n);
    struct add s[n];
    printf ("Enter %d numbers: ",n);
    for (i=0; i<n; i++)
    {
        scanf ("%f",&s[i].value);
        sum+=s[i].value;
    }
    printf ("Addition of numbers: %.2f\n",sum);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    float a,b,c,sum;
    char ch;
    file1 = fopen ("Sum.txt","w");
    file2 = fopen ("Sum.txt","r");
    if (file1==NULL)
        printf ("File does not exists.");
    else
    {
        printf ("Enter three numbers: ");
        scanf ("%f %f %f",&a,&b,&c);
        sum=a+b+c;
        fprintf (file1,"Addition of three number is: %.2f\n",sum);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("File does not exists");
    else
    {
        while (!feof(file2))
        {
            ch = fgetc (file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}

