#include <iostream>

using namespace std;

void MergeSort (int *arr, int left, int right) 
{    
    
    if (left<right) {
        if (right-left==1){
            int temp=0;
            temp = arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
        }
        else {


        MergeSort(arr, left, (left+right)/2);
        MergeSort(arr, (left+right)/2+1, right);

        int lidx=left, ridx=(left+right)/2+1, idx=0;

        int temp_arr[right];

        while (lidx<=(left+right)/2 && ridx<=right)
        {
            if (arr[lidx]<arr[ridx])
            {
            temp_arr[idx++]=arr[lidx]; lidx++;
            }
            else 
            {
            temp_arr[idx++]=arr[ridx]; ridx++;
            }
        }

        while (lidx<=(left+right)/2)
        {
            temp_arr[idx++]=arr[lidx]; lidx++;
        }

        while (ridx<=right)
        {
            temp_arr[idx++]=arr[ridx]; ridx++;
        }

        for (int j=0; j<idx; j++) {
            arr[j]=temp_arr[j];
        }

        }
    }
    

}

void Fib(int N) {
    int i=0, f1=0, f2=1, temp=0;
    cout << 1 << endl;
    while (i<N-1) {
        temp = f1;
        f1=f2;
        f2=temp+f2;
        i++;
        cout << f2 << endl; 
    } 

}

void Fac(int x) {
    int p = 1, i=0;
    while (i<x) {
        i++;
        p*=i;
        
    }
    cout << "Ответ: " << p << endl;
}


int main() 
{
    int array[] = {20, 12, 5, 31, 0}, n = 5, N, x;
    MergeSort(array, 0, n-1);
    for (int i; i<n; i++) {
        cout << array[i] << ", ";
    }
    cout << endl;
    cout << "Введите N для последовательности Фибоначчи: "; 
    cin >> N;
    Fib(N);
    cout << "Введите число x: ";
    cin >> x;
    Fac(x); 
    
}