//
//  main.c
//  BMI
//
//  Created by Edwin Cardenas on 12/30/24.
//

#include <stdio.h>

typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

int main(int argc, const char * argv[]) {
    Person edwin;
    edwin.heightInMeters = 1.8;
    edwin.weightInKilos = 96;
    
    Person aaron;
    aaron.heightInMeters = 1.97;
    aaron.weightInKilos = 84;
    
    printf("edwin is %.2f meters tall\n", edwin.heightInMeters);
    printf("edwin weighs %d kilograms\n", edwin.weightInKilos);
    printf("aaron is %.2f meters tall\n", aaron.heightInMeters);
    printf("aaron weighs %d kilograms\n", aaron.weightInKilos);
    
    return 0;
}
