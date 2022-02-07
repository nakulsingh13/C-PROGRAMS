#include<stdio.h>
  
enum month{
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
    };
  
void main()
{
    int dd,mm,yy;
    printf("Enter DOB\n");
    scanf("%d%d%d",&dd,&mm,&yy);

    if(mm>=mar && mm<=jun)
    {
        printf("You are born in summer season\n");
    }
    else if(mm>=jul && mm<=oct)
    {
        printf("You are born in rainy season\n");
    }
    else if(mm>=nov && mm<=dec)
    {
        printf("You rae born in winter season\n");
    }
    else if(mm>=jan && mm<=feb)
    {
        printf("You rae born in winter season\n");
    }

} 