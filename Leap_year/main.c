#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter The year :\n");
    scanf("%d",&year);
    if(year%4!=0)printf("%d  is Common !" , year);
    else if(year%100!=0)printf("%d  is Leap !",year);
    else if(year%400!=0)printf("%d  is common !",year);
    else printf("%d  is Leap !",year);

    return 0;
}
