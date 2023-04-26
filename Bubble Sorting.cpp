# include<iostream>
using namespace std;

void printArray (int A[]){
	for(int i=0;i<6;i++) {
//	printf("%d",A[i]);
cout<<A[i]<<" ";
		
		
}
}

void bubbleSort(int A[],int n){
	int isSorted=1;
	for(int i=0;i<n-1;i++) { //passes numbers which are 5
	printf("Working number of passes are:%d\n",i+1);
	for(int j=0;j<n-1-i;j++) { //for comparison in each pass
	if(A[j]>A[j+1]) {
		int temp=A[j];
		A[j]=A[j+1];
		A[j+1]=temp;
		isSorted=0;
		
}
}
if(isSorted) {
	return;
}
}
}


int main(){
	int A[6]={12,54,65,7,23,9};

//for adaptive
//int A[6]={1,2,3,4,5,6};
	int n=6;
	cout<<"Array list will be:\n";
   printArray(A); //print the array before sorting
   cout<<"\n"<<"Sorted array will be:\n";
	bubbleSort(A,n);//Function to sort the array
	printArray(A);//print the array before sorting
	
		
	
	return 0;
}


