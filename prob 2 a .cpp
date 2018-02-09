#include <iostream>
using namespace std;

void quicksorta(int arr[], int left, int right) {//funtion for sort
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2]; //chooses a pivot

      while (i <= j) {//ensures i and j dont cross each other
            while (arr[i] < pivot) //if element is smaller than pivot it stays on the left
                  i++;
            while (arr[j] > pivot) //if element is larger than pivot it stay son the right
                  j--;
            if (i <= j) {
                  tmp = arr[i]; //sawps elements if they ar e in the wrong place
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      if (left < j) //calls function to work on left side of array
            quicksorta(arr, left, j);

      if (i < right) //calls function to work on right side of array
            quicksorta(arr, i, right);
}
void display(int arr[]){
	for(int i=0;i<6;++i){
		cout<<arr[i];	
	}
}

int main(){
	int arr[6]={7,2,3,4,8,1};
	int left=0;
	int right=5;
	display(arr);
	quicksorta(arr,0,5);
	display(arr);
}
