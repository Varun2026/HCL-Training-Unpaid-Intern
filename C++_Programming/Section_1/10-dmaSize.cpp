#include <iostream>
#include <stdexcept>

using namespace std;

class DynamicArray {
private:
    int* arr;
    int capacity;
    int current_size;

    // Helper function to double the capacity when full
    void resize() {
        capacity *= 2;
        int* temp = new int[capacity];

        // Copy elements to the new, larger array
        for (int i = 0; i < current_size; i++) {
            temp[i] = arr[i];
        }

        // Delete the old array to prevent memory leaks
        delete[] arr;

        // Point to the new array
        arr = temp;
        
        cout << "--> Array resized. New capacity: " << capacity << endl;
    }

public:
    DynamicArray() {
        capacity = 2;
        current_size = 0;
        arr = new int[capacity];
    }

    // Destructor: Cleans up memory when the object is destroyed
    ~DynamicArray() {
        delete[] arr;
    }

    // Add an element to the end
    void push_back(int value) {
        if (current_size == capacity) {
            resize();
        }
        arr[current_size] = value;
        current_size++;
    }

    // Get an element at a specific index with bounds checking
    int get(int index) {
        if (index < 0 || index >= current_size) {
            throw out_of_range("Index out of bounds!");
        }
        return arr[index];
    }

    // Get current number of elements
    int size() {
        return current_size;
    }

    // Get maximum capacity before the next resize
    int get_capacity() {
        return capacity;
    }

    // Display the array contents
    void display() {
        for (int i = 0; i < current_size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray myArr;

    cout << "Initial capacity: " << myArr.get_capacity() << endl;

    // Adding elements to trigger resizing
    myArr.push_back(10);
    myArr.push_back(20);
    
    // Capacity is 2, adding a 3rd element triggers the first resize
    myArr.push_back(30); 
    
    myArr.push_back(40);
    
    // Capacity is 4, adding a 5th element triggers the second resize
    myArr.push_back(50); 

    cout << "\nFinal array contents: ";
    myArr.display();
    
    cout << "Final size: " << myArr.size() << endl;
    cout << "Final capacity: " << myArr.get_capacity() << endl;

    return 0;
}