// Selection Sort Algorithm to sort the array of integers in decreasing order. descending order
#include<iostream>
using namespace std;
void Selection_sort(int n,int array[]){
    for(int i=0;i<n-1;i++){
       int max=i;
        for(int j=i+1;j<n;j++){
            if(array[max]<array[j]){
                max=j;
            }
        }
        swap(array[max],array[i]);
    }
}
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    int array[30];
    for(int i=0;i<num;i++){
        cout<<"Enter "<<i+1<<" Element: ";
        cin>>array[i];
    }
Selection_sort(num,array);
cout<<"Sorted Array: ";
for(int i=0;i<num;i++){
    cout<<array[i]<<" ";
}
}