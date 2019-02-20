#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int a=0x12345,b;
    //printf("Enter a 5 digit value : ");
    //scanf("%x",&a);
    b=a;
    char *c=(char *)&a;
    unsigned int a1,a2,temp;
    a1=(int)*c;
    a2=a;
    a2=a2>>(24);
    if(a1=a2)
        printf("The number is 0x%x \nFist stored byte is : 0x%x \nBIG ENDIAN\n",a,a1);
    else
        printf("The number is 0x%x \nFist stored byte is : 0x%x \nLITTLE ENDIAN\n",a,a1);

    // Conversion of little endian to big
    char *c1=(char *)&b;
    char *c2=(char *)&b;
    temp=(int)*(c2+3);
    *(c2+3)=*c1;
    *c1=temp;
    temp=(int)*(c2+2);
    *(c2+2)=*(c1+1);
    *(c1+1)=temp;
    printf("\nConvertion from Little to Big is : 0x%x\n",b);
    return 0;
}
