#include <iostream>
#include <algorithm>

using namespace std;

void inputGrades(int grades[], int size) {
    cout << "Մուտքագրեք " << size << " ուսանողների գնահատականները (0-100 միջակայքում)։" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Ուսանող " << i + 1 << ": ";
        cin >> grades[i];
        while (grades[i] < 0 || grades[i] > 100) {
            cout << "Գնահատականը պետք է լինի 0-100 միջակայքում։ Նորից մուտքագրեք։" << endl;
            cin >> grades[i];
        }
    }
}

void displayGrades(const int grades[], int size) {
    cout << "Ուսանողների գնահատականները։" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Ուսանող " << i + 1 << ": " << grades[i] << endl;
    }
}

double calculateAverage(const int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += grades[i];
    }
    return static_cast<double>(sum) / size;
}

int findHighestGrade(const int grades[], int size) {
    int highest = grades[0];
    for (int i = 1; i < size; ++i) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

int findLowestGrade(const int grades[], int size) {
    int lowest = grades[0];
    for (int i = 1; i < size; ++i) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

void sortGrades(int grades[], int size) {
    sort(grades, grades + size);
}

int main() {
    const int SIZE = 30;
    int grades[SIZE];

   
    inputGrades(grades, SIZE);

    displayGrades(grades, SIZE);

    double average = calculateAverage(grades, SIZE);
    cout << "Միջին գնահատականը։ " << average << endl;

    int highest = findHighestGrade(grades, SIZE);
    cout << "Ամենաբարձր գնահատականը։ " << highest << endl;

    int lowest = findLowestGrade(grades, SIZE);
    cout << "Ամենացածր գնահատականը։ " << lowest << endl;

    sortGrades(grades, SIZE);
    cout << "Դասավորված գնահատականները աճման կարգով։" << endl;
    displayGrades(grades, SIZE);

    return 0;
}
