#include <iostream>
using namespace std;
int min_index(int arr[],int s,int e){
    int mini=s;
    for(int i=s;i<e;i++)
    if(arr[i]<arr[mini])
    mini=i;
    
    return mini;
}
void selection_sort(int arr[],int s,int e){
    if(s==e)return;
    int mini=min_index(arr,s,e);
    swap(arr[s],arr[mini]);
    
    selection_sort(arr,s+1,e);
}
int main(){
    int n;
    cout<<"Enter array size : ";
    cin>>n;
    
    int* arr=new int[n];
    
    cout<<"Enter "<<n<<" elements of array : ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<"\n before sorting : ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    
    selection_sort(arr,0,n);
    
    cout<<"\n after sorting : ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    
    return 0;
}
