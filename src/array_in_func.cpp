#include <iostream>

double avg_grade(int size, int grades[]);

int main()
{
    int grades[] = {65, 40, 100, 33, 48, 87, 76};
    int size = sizeof(grades) / sizeof(int); //Cal the size of an array
    double get_avg = avg_grade(size, grades);
    std::cout << get_avg << '\n';
    return 0;
}

// To pass an array to function
// Must provide size of the array
double avg_grade(int size, int grades[])
{
    int sum = 0;
    // Cal the sum of the elements
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return double (sum) / size;
}
