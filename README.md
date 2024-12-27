# 📃 **ArrayList Implementation in C++**

This repository contains an implementation of a dynamic **ArrayList** in C++, which supports various operations such as insertion, removal, updating elements, searching, and printing the list.

---

## 🌟 **Features**

- **isEmpty()**: Checks if the list is empty.
- **isFull()**: Checks if the list is full.
- **getSize()**: Returns the current size of the list.
- **print()**: Prints the elements in the list.
- **removeAtPos(int pos)**: Removes an element at a specified position.
- **addAtPos(int pos, int element)**: Adds an element at a specified position.
- **insertAtEnd(int element)**: Inserts an element at the end of the list.
- **search(int element)**: Searches for an element and returns its index or `-1` if not found.
- **updateAt(int pos, int element)**: Updates the element at a specified position.
- **getElement(int pos)**: Returns the element at a specified position.

---

## 📜 **Code Explanation**

### **ArrayList Class - `arrayList`**

The `arrayList` class supports the following methods:

- **`isEmpty()`**: Returns true if the list is empty.
- **`isFull()`**: Returns true if the list is full.
- **`getSize()`**: Returns the current number of elements in the list.
- **`print()`**: Prints all elements in the list.
- **`removeAtPos(int pos)`**: Removes the element at the specified position.
- **`addAtPos(int pos, int element)`**: Adds an element at the specified position in the list.
- **`insertAtEnd(int element)`**: Adds an element to the end of the list.
- **`search(int element)`**: Searches for an element in the list and returns its index.
- **`updateAt(int pos, int element)`**: Updates the element at a specific position.
- **`getElement(int pos)`**: Retrieves the element at a specified position.

### **Memory Management**

The class dynamically allocates memory for the array using `new` and releases it using `delete[]` in the destructor.

---

## 📋 **Example Usage**



int main() {
    arrayList arr(50);

    arr.addAtPos(0, 10);
    arr.addAtPos(1, 20);
    arr.insertAtEnd(30);
    arr.updateAt(0, 5);

    cout << arr.getSize() << "\n";
    arr.print();

    return 0;
}

🧑‍💻 Example Output

3

5 20 30
