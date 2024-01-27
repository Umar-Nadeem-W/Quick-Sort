#include <iostream>
using namespace std;

void swap(int arr[] , int p1, int p2){
	int temp;
	temp = arr[p1];
	arr[p1] = arr[p2];
	arr[p2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while( i <= high){
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
	int pivot = arr[high];
	
    int pos = partition(arr, low, high, pivot);
	quickSort(arr, low, pos-1);
	quickSort(arr, pos+1, high);
	}
}

int main()
{
int List[]={5,3,8,1,4,6,2,7};
quickSort(List,0,7);
cout<<"Sorted array is below"<<endl;
for (int i = 0; i<8; i++){cout<<List[i]<<" ";}
return 0;
}
	