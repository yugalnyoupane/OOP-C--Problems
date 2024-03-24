#include <iostream>

template <typename T, int MaxSize = 100>
class ArrayList {
private:
    T array[MaxSize];
    int size;

public:
    ArrayList() : size(0) {}

    // Function to add an element to the list
    void add(const T& element) {
        if (size < MaxSize) {
            array[size++] = element;
            std::cout << "Element added to the list.\n";
        } else {
            std::cout << "List is full. Cannot add more elements.\n";
        }
    }

    // Function to remove an element from the list
    void remove(const T& element) {
        int foundIndex = -1;
        for (int i = 0; i < size; ++i) {
            if (array[i] == element) {
                foundIndex = i;
                break;
            }
        }
        if (foundIndex != -1) {
            for (int i = foundIndex; i < size - 1; ++i) {
                array[i] = array[i + 1];
            }
            --size;
            std::cout << "Element removed from the list.\n";
        } else {
            std::cout << "Element not found in the list.\n";
        }
    }

    // Function to display the elements of the list
    void display() const {
        std::cout << "Elements in the list:\n";
        for (int i = 0; i < size; ++i) {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Creating an ArrayList of integers with default size 100
    ArrayList<int> myList;

    // Adding elements to the list
    myList.add(10);
    myList.add(20);
    myList.add(30);

    // Displaying elements
    myList.display();

    // Removing an element
    myList.remove(20);

    // Displaying elements after removal
    myList.display();

    return 0;
}
