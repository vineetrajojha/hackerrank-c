#include <stdio.h>
int main()
{
    //variables
    int m,n;
    float p,q;
    //scanning
    scanf("%d%d", &m,&n);
    scanf("%f%f",&p,&q);
    //vars
    int sum_int=m+n;
    int diff_int=m-n;
    
    float sum_float=p+q;
    float diff_float=p-q;
    //print
    printf("%d %d\n",sum_int, diff_int);
    /* we will use "%.1f" to print a floating-point number with one digit after the decimal point */
    printf("%.1f %.1f\n", sum_float,diff_float);
    
    return 0;
}
