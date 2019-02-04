//quick sort 
#include<iostream>

using namespace std;

void quickSort(int * , int, int);
int partition(int * , int, int);
void printf(int * , int);

int main() {
    int array[] = {
        1234,
        52,
        3254,
        1235,
        0,
        2,
        4,
        5
    }; // size 8

    cout << "array with out sort " << endl;
    printf(array, 8);

    //quick sort

    cout << endl << "quick sort" << endl;
    quickSort(array, 0, 8 - 1);
    printf(array, 8);
    return 0;
}

void printf(int * array, int size) {
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "]" << array[i] << endl;
    }
}

void quickSort(int * array, int low, int high) {
    // cout<<"quicksort"<<endl;
    if (low < high) {
        int p = partition(array, low, high);
if (p > 1) {
				quickSort(array, low, p - 1);
			}
			if (p + 1 < high)
			{
				quickSort(array, p + 1, high);
			}
    }
}


// Hoare partition scheme
//goes into infinte loop 

int partition(int * array, int low, int high) {
    // cout<<"parition"<<endl;

		int pivot = array[low];
		while (true)
		{

			while (array[low] < pivot)
			{
				low++;
			}

			while (array[high] > pivot)
			{
				high--;
			}

			if (low < high)
			{
				if (array[low] == array[high]) return high;

				int temp = array[low];
				array[low] = array[high];
				array[high] = temp;
			}
			else
			{
				return high;
			}



		}
}

/*

int partition(int * array, int low, int high) {
    int pivot = array[(low + high) / 2];
    int i = low - 1;
    int j = high + 1;

    while (true) {
        do {
            i++;
        } while (array[i] < pivot);

        do {
            j--;
        } while (array[j] > pivot);

        if (i >= j) {
            return j;
        }

        std: swap(array[i], array[j]);
    }

}



*/

// Lomuto partition scheme
// didn't work! need to review!
/*
int partition (int *array, int low, int high){
    int pivot = array[high];
    int i = low;
    for(int j = low; j < high - 1; j++){
        if(array[j] < pivot){
            std::swap(array[i], array[j]);
            i++;
        }
    }
    std::swap(array[i], array[high]);
    return i;
}

*/
