#include <stdio.h>

int main() {
//Variables are declared
    int n;
    int i;
    int j;
    int count =0;
//The size of the array is asked
    printf("Enter size of array: ");// I ask the user for the amount of numbers he wants to input, if he enters
                                    // anything other than numbers, the program will run, but nothing will be shown.
    scanf("%d", &n);
    double array[n];
//The numbers in the array are asked
    printf("Enter %d elements in the array : ", n);//The user is asked to enter the numbers that they want.
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
//The Array is printed
    printf("\nElements in array are: ");//The array is printed
    for(i=0; i<n; i++)
    {
        printf("%lf ", array[i]);
    }
// The program has 2 loops. One selects each element of the array and checks the following elements
//for duplicates, the other loop finds the first duplicate and continues looking in the following elements.
//When it finishes, the total duplicate count will be displayed.
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(array[i]==array[j]){
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicates in array: %d", count);



    return 0;
}