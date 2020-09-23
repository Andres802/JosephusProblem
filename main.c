#include <stdio.h>
#include <stdlib.h>
  
int Josephus(int num, int jumps) 
{ 
    int index = 0, i;

    if (num == 1) 
        return 1; 
    for (i = 1; i <= num; i++) 
        index = (index + jumps) % i; 
    return (index + 1); 
} 

int main(int argc, char **argv) 
{ 
    int survivor = 0;
	int survivor_pos = 0;

    if (argc != 3)
    {
        printf("Error, number of arguments invalid\n");
        exit(98);
    }
    survivor_pos = Josephus(atoi(argv[1]), atoi(argv[2]));
    printf("The safe place is %d\n", survivor_pos); 
    return 0; 
}
