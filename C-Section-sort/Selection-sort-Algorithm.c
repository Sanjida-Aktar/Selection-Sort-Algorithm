
#include<stdio.h>
void print_array(int arr[],int size);
void selection_sort(int arr[], int size);

int main()
{
    int arr[]= {12,11,10,5,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array:\n");
    print_array(arr,size);

    selection_sort(arr,size);

    printf("Shorted Array:\n");
    print_array(arr,size);

}
void print_array(int arr[],int size)
{
    for(int i=0 ; i<size ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
}

void selection_sort(int arr[], int size)
{
    int i,j,min_value;

    for(int i=0; i<size-1;i++)
    {
        min_value= i;
        for(j=i+1; j<size; j++)
        {
            if(arr[j]<arr[min_value])
                min_value= j;
        }
        int temp= arr[min_value];
        arr[min_value]= arr[i];
        arr[i]= temp;
    }
}
