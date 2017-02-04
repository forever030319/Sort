#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int a[], int n){
    int small;
    for(int i=0; i<n; i++){
        small = i;
        for(int j=i+1; j<n; j++){
            if(a[small]>a[j]){
                small = j;
            }
        }
        if(small!=i)
            swap(a[i], a[small]);
    }
}

int main()
{
    int length = 5;
    int input[5] = {2,5,1,4,3};

    cout << "排序前: ";
    for(int i=0; i<length; i++)
        cout << input[i] << " ";
    cout << endl;

    selectionSort(input, length);

    cout << "排序後: ";
    for(int i=0; i<length; i++)
        cout << input[i] << " ";

    return 0;
}
