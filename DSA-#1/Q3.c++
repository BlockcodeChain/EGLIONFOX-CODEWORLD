// 3: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 

#include<iostream>
using namespace std;
void Selection_sort(int n,int array[]){
    for(int i=0;i<n-1;i++){
       int max=0;
        for(int j=1;j<n-i;j++){
            if(array[max]<array[j]){
                max=j;
            }
        }
        swap(array[max],array[n-1-i]);
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