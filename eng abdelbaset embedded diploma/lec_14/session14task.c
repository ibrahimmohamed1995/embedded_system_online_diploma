#include <stdio.h>
#include <stdlib.h>



int ar1[6]={11,2,33,4,5,1};
void array_max(int*ptr,int size,int*pmax1,int*pmax2)
{

    int i;
    *pmax1=ptr[0];
    *pmax2=ptr[0];
    for(i=1;i<size;i++)
    {

        if(ptr[i]>*pmax1)
        {
            *pmax2=*pmax1;
            *pmax1=ptr[i];
        }
         else if (ptr[i] > *pmax2 && ptr[i] < *pmax1){

            *pmax2=ptr[i];

        }
    }
}


int main()
{

    int max1=0,max2=0;
    array_max(ar1,6,&max1,&max2);

    printf("max1 = %d  max2 = %d \n",max1,max2);


   

    return 0;
}
