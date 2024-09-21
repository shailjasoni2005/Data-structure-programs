#include <bits/stdc++.h>
using namespace std;

class Array {
    private:
        int *A;
        int size;
        int length;

    public:
        Array() {
            size = 10;
            length = 0;
            A = new int[size];
        }

        Array(int sz) {
            size = sz;
            length = 0;
            A = new int[size];
        }

        ~Array() {
            delete[] A;
        }

        void Display() {
            int i;
            cout << "Elements are: ";
            for (i = 0; i < length; i++) {
                cout << A[i] << " ";
            }
            cout << endl;
        }

        void Append(int x) {
            if (length < size)
                A[length++] = x;
        }

        void Insert(int index, int x) {
            if (index >= 0 && index <= length) {
                for (int i = length; i > index; i--)
                    A[i] = A[i - 1];
                A[index] = x;
                length++;
            }
        }

        int Delete(int index) {
            int x = 0;
            if (index >= 0 && index < length) {
                x = A[index];
                for (int i = index; i < length - 1; i++)
                    A[i] = A[i + 1];
                length--;
                return x;
            }
            return 0;
        }

        void swap(int *x, int *y) {
            int temp = *x;
            *x = *y;
            *y = temp;
        }

        int LinearSearch(int key) {
            for (int i = 0; i < length; i++) {
                if (key == A[i]) {
                    swap(&A[i], &A[0]);  // Move to head for efficiency
                    return i;
                }
            }
            return -1;
        }

        int Sum() {
            int s = 0;
            for (int i = 0; i < length; i++)
                s += A[i];
            return s;
        }

        Array* Union(Array arr2) {
            int i, j, k;
            i = j = k = 0;

            Array *arr3 = new Array(length + arr2.length);

            while (i < length && j < arr2.length) {
                if (A[i] < arr2.A[j])
                    arr3->A[k++] = A[i++];
                else if (arr2.A[j] < A[i])
                    arr3->A[k++] = arr2.A[j++];
                else {
                    arr3->A[k++] = A[i++];
                    j++;
                }
            }
            for (; i < length; i++)
                arr3->A[k++] = A[i];
            for (; j < arr2.length; j++)
                arr3->A[k++] = arr2.A[j];

            arr3->length = k;  // Correct the length
            return arr3;
        }

        Array* Intersection(Array arr2) {
            int i, j, k;
            i = j = k = 0;

            Array *arr3 = new Array(length + arr2.length);

            while (i < length && j < arr2.length) {
                if (A[i] < arr2.A[j])
                    i++;
                else if (arr2.A[j] < A[i])
                    j++;
                else {
                    arr3->A[k++] = A[i++];
                    j++;
                }
            }

            arr3->length = k;  // Correct the length
            return arr3;
        }

        Array* Difference(Array arr2) {
            int i, j, k;
            i = j = k = 0;

            Array *arr3 = new Array(length + arr2.length);

            while (i < length && j < arr2.length) {
                if (A[i] < arr2.A[j])
                    arr3->A[k++] = A[i++];
                else if (arr2.A[j] < A[i])
                    j++;
                else {
                    i++;
                    j++;
                }
            }
            for (; i < length; i++)
                arr3->A[k++] = A[i];

            arr3->length = k;  // Correct the length
            return arr3;
        }
};

int main() {
    int sz;
    cout << "Enter Size of Array: ";
    cin >> sz;
    Array arr1(sz);

    int ch, x, index;

    do {
        cout << "\n\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter an element and index: ";
                cin >> x >> index;
                arr1.Insert(index, x);
                break;
            case 2:
                cout << "Enter index: ";
                cin >> index;
                x = arr1.Delete(index);
                cout << "Deleted Element is " << x << endl;
                break;
            case 3:
                cout << "Enter element to search: ";
                cin >> x;
                index = arr1.LinearSearch(x);
                cout << "Element index: " << index << endl;
                break;
            case 4:
                cout << "Sum is " << arr1.Sum() << endl;
                break;
            case 5:
                arr1.Display();
                break;
        }
    } while (ch < 6);

    return 0;
}
