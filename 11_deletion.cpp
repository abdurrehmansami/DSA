


#include<iostream>

using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int deletion(int arr[], int n, int index){
    if(n==0){      //or if(index>=n){  cout<<"Index not found!!" }
        cout<<"Sorry!! Empty array, deletion not possible";
        return -1;
    }
    for(int i=index; i<n-1;i++){
        arr[i]=arr[i+1];
    }
    return 1;

}

int main(){
    int arr[100]={10,20,23,30,40};
    int index, size=5;
    cout<<"Enter the index value of element to be deleted"<<endl;
    cin>>index;
    display(arr, size);
    int c=deletion(arr, size, index);
    cout<<"After deletion"<<endl;
    size-=1;
    if(c==1){
        cout<<"Successfully deleted"<<endl;
        display(arr, size);
    }
    else{
    cout<<"Could't delete element";
    }
    
}