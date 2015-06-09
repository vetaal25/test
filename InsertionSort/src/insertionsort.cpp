#include "iostream"

using namespace std;

int main(){

  int input_array[6] = {5, 2, 4, 6, 1, 3};

  int j = 1;

  // Outer loop that manages locking on an element from unsorted array
  for(j; j < 6; j++){
      int key = input_array[j];

     // this loop will insert the key element to the correct position
     // in the sorted array 0 - j-1

     int i = j - 1;

     while(i >= 0 && input_array[i] > key){
        input_array[i + 1] = input_array[i];
        i = i - 1;
     }

    input_array[i + 1] = key;
  }

   for(int k = 0; k < 6; k++){
      cout << input_array[k] << ", ";
   }

   cin.get();

}
