#include<stdio.h>
int main()
{
    int temp_Fahrenheit;
    float temp_Celcius;
    int p;//p for precision

   printf(“Enter precision value\n”); 
    scanf(“%d”,&p);

    printf("\nFarenheit \t Celcius\n");
    temp_Fahrenheit=0;
    temp_Celcius=(5.0/9.0)*(temp_Fahrenheit-32);
    printf("%3d \t\t %4.*f\n",temp_Fahrenheit,p,temp_Celcius); 

    temp_Fahrenheit=20;
    temp_Celcius=(5.0/9.0)*(temp_Fahrenheit-32);
    printf("%3d \t\t %*.*f\n",temp_Fahrenheit,4+p,p,temp_Celcius);

    temp_Fahrenheit=40;
    temp_Celcius=(5.0/9.0)*(temp_Fahrenheit-32);
    printf("%3d \t\t %*.*f\n",temp_Fahrenheit,4+p,p,temp_Celcius);

    temp_Fahrenheit=60;
    temp_Celcius=(5.0/9.0)*(temp_Fahrenheit-32);
    printf("%3d \t\t %*.*f\n",temp_Fahrenheit,4+p,p,temp_Celcius);

    temp_Fahrenheit=80;
    temp_Celcius=(5.0/9.0)*(temp_Fahrenheit-32);
    printf("%3d \t\t %*.*f\n",temp_Fahrenheit,4+p,p,temp_Celcius);

    temp_Fahrenheit=100;
    temp_Celcius=(5.0/9.0)*(temp_Fahrenheit-32);
    printf("%3d \t\t %*.*f\n",temp_Fahrenheit,4+p,p,temp_Celcius);
    return 0;
}
