#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: \n";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}

/*int main(){
    int arr[] = {1,2,3,4,5,6,1,0,20,30};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int smallest = arr[0];
    int indexOfLargest = 0;
    int indexOfSmallest = 0;
    for (int i=0; i<size; i++){
        if(largest < arr[i]){
            largest = arr[i];
            indexOfLargest = i;
            
        }
        if(smallest > arr[i]){
            smallest = arr[i];
            indexOfSmallest = i;

        }
    }
    cout << "Largest element: " << largest << " at index " << indexOfLargest << endl;
    cout << "Smallest element: " << smallest << " at index " << indexOfSmallest << endl;
}*/