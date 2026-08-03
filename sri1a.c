#include<stdio.h>
#define MAX_SIZE 100
void createArray(int arr[],int *size);
void insertElement(int arr[],int *size,int element,int position);
int searchElement(int arr[],int size,int element);
void deleteElement(int arr[],int *size,int position);
void displayArray(int arr[],int size);
int main(){
int arr[MAX_SIZE];
int size=0;
int choice,element,position,result;
while(1){
printf("\nArray Operations Menu:\n");
printf("1.create Array\n");
printf("2.insert Element\n");
printf("3.search Element\n");
printf("4.delete Element\n");
printf("5.display Array\n");
printf("6.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
createArray(arr,&size);
break;
case 2:
printf("Enter element to insert:");
scanf("%d",&element);
printf("Enter position to insert(0 to %d):",size);
scanf("%d",&position);
insertElement(arr,&size,element,position);
break;
case 3:
printf("Enter element to search:");
scanf("%d",&element);
result=searchElement(arr,size,element);
if(result!=-1)
printf("Element fount at position:%d\n",result);
else
printf("Element not found in the array.\n");
break;
case 4:
printf("enter position to delete(0 to %d):",size-1);
scanf("%d",&position);
deleteElement(arr,&size,position);
break;
case 5:
displayArray(arr,size);
break;
case 6:
return 0;
default:
printf("invalid choice!please enter a valid option.\n");
}
}
return 0;
}
void createArray(int arr[],int *size){
int n,i;
printf("enter the number of elements:");
scanf("%d",&n);
if(n>MAX_SIZE){
printf("error:number of elements exceeds the maximum array size.\n");
return;
}
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
*size=n;
printf("array created successfully.\n");
}
void insertElement(int arr[],int *size,int element,int position){
if(*size>=MAX_SIZE){
printf("error:array is full.cannot insert element.\n");
return;
}
if(position,0||position> *size){
printf("errror:invalid position.\n");
return;
}
for(int i= *size;i>position;i--){
arr[i]=arr[i-1];
}
arr[position]=element;
(*size)++;
printf("element inserted successfully.\n");
}
int searchElement(int arr[],int size,int element){
for(int i=0;i<size;i++){
if(arr[i]==element){
return i;
}
}
return -1;
}
void deleteElement(int arr[],int *size,int position){
if(position<0||position>= *size){
printf("error:invalid position.\n");
return;
}
for(int i=position;i< *size-1;i++){
arr[i]=arr[i+1];
}
(*size)--;
printf("element deleted successfully.\n");
}
void displayArray(int arr[], int size){
if(size==0){
printf("array is empty.\n");
return;
}
printf("array elements:");
for(int i=0;i<size;i++){
printf("%d",arr[i]);
}
printf("\n");
}


























































