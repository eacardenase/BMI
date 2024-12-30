//
//  main.c
//  BMI
//
//  Created by Edwin Cardenas on 12/30/24.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bodyMassIndex(Person *p)
{
    return p->weightInKilos / (p->heightInMeters * p->heightInMeters);
}

int main(int argc, const char * argv[]) {
    // Allocate memory for one Person struct
    Person *edwin = (Person *)malloc(sizeof(Person));
    
    // Fill in two members of the struct
    edwin->heightInMeters = 1.8;
    edwin->weightInKilos = 96;
    
    // Print out the BMI of the original Person
    float edwinBmi = bodyMassIndex(edwin);
    printf("Edwin has a BMI of %.2f\n", edwinBmi);
    
    // Let the memory be recycled
    free(edwin);
    
    // Forget where it was
    edwin = NULL;
    
    return 0;
}
