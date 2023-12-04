// #include <stdio.h>

// void merge(int arr[],int low, int mid, int high)
// {
//     int i,j,k;
//     int n1=mid-low+1,n2=high-mid;
//     int x[n1],y[n2];
//     for(i=0;i<n1;i++)
//     {
//         x[i]=arr[i];
//     }
//     for(i=n2;i<high+1;i++)
//     {
//         y[i-n2]=arr[i];
//     }
//     // for(i=n2;i<high+1;i++)
//     // {
//     //     printf("%d ",y[i-n2]);
//     // }
//     i=0,j=0,k=low;
//     for(k=0;i<n1 && j<n2;k++)
//     {
//         if(x[i]<y[i])
//         {
//             arr[k]=x[i];
//             i++;
//         }
//         else
//         {
//             arr[k]=y[i];
//             j++;
//         }
//     }
    
// }

// int main()
// {
//     int a[8]={4,5,10,12,6,8,11,15};
//     int n=8;
//     int l=0,h=n-1,m=(l+h)/2;
//     merge(a,l,m,h);
//     return 0;
// }

#include <stdio.h>  
void merge(int a[], int l, int mid, int r)    
{    
    int n1 = mid - l + 1;    
    int n2 = r - mid;    
    int i, j, k; 
    int x[n1], y[n2];   
    for (int i = 0; i < n1; i++){    
    x[i] = a[l + i];    
    }
    for (int j = 0; j < n2; j++){    
    y[j] = a[mid + 1 + j];    }
      
    i = 0;  
    j = 0;   
    k = l;    
      
    while (i < n1 && j < n2)    
    {    
        if(x[i] <= y[j])    
        {    
            a[k] = x[i];    
            i++;    
        }    
        else    
        {    
            a[k] = y[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = x[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = y[j];    
        j++;    
        k++;    
    }    
}
  
void mergeSort(int a[], int l, int r)  
{  
    if (l < r)   
    {  
        int mid = (l + r) / 2;  
        mergeSort(a, l, mid);  
        mergeSort(a, mid + 1, r);  
        merge(a, l, mid, r);  
    }  
}  
  
int main()  
{  
    int a[] = { 4, 5,10 ,12, 6, 8, 11,15  };  
    int n = sizeof(a) / sizeof(a[0]);  
    mergeSort(a, 0, n - 1); 
    for ( int i = 0; i < n; i++)  
        printf("%d ", a[i]);  
   
      
    return 0;  
}