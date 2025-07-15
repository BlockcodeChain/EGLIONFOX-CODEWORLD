// Selection sort in ascending order

#include<iostream>
using namespace std;
void Selection_sort(int n,int array[]){
for(int i=0;i<n-1;i++){
    // last wall toh sort ho hi gya usko need hi nhi hai isliye sirf i<n-1
    int min=i;
    for(int j=i+1;j<n;j++){
        if(array[min]>array[j])
        {
            min=j;
        }
      
    }
    swap(array[min],array[i]);
    // Selection sort should only swap once per outer loop, after the correct min is found.
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