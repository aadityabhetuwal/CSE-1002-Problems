#include<stdio.h>

//function to calculate the maximum element of array using pointer
int maxi(int * pointer,int length)
{
    int max= *(pointer + 0);
    for (int i=0; i<length; i++)
    {
        if (max < *(pointer+i))
        {
            max = *(pointer+i);
        } 
    }
    return max;
}

//function to calculate the minimum element from an array using pointer
int mini(int * pointer,int length)
{
    int min= *(pointer + 0);
    for(int i=0; i<length; i++)
    {
        if(min>*(pointer+i))
        {
            min = *(pointer+i);
        }
    }
    return min;
}


//main function starts here
int main()
{
    int length;
    
    scanf("%d",&length);

    int list[length];

    for (int i=0; i<length;i++)
    {
        scanf("%d",&list[i]);
    }

    printf("%d\n", mini(list, length) );
    printf("%d\n", maxi(list, length) );
    return 0;
}