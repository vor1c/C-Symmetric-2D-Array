#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void read_array_elements(int n, int a[n][n]);
void print_2d_array(int n, int a[n][n]);
int is_symmetric(int n, int a[n][n]);


int main(){
    int n = 0;
    printf("Wie groß soll das Array sein? \n");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Die Größe des Arrays muss größer als 0 sein.\n");
        return 1;
    }
    int a[n][n];
     read_array_elements(n, a);
    print_2d_array(n, a);
    if (is_symmetric(n, a)) {
        printf("Symmetrisch: Ja\n");
    } else {
        printf("Symmetrisch: Nein\n");
    }
}

void read_array_elements(int n, int a[n][n]){
 
    int help = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &help);
            a[i][j] = help;
        }
    }
    
}
void print_2d_array(int n, int a[n][n]){
    for(int i = 0;  i < n; ++i){
        for (int j = 0; j < n; ++j)
        {
           printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int is_symmetric(int n, int a[n][n]){
    for(int i= 0; i < n; ++i){
        for (int j = 0; j < i; ++j)
        {
            if (a[i][j] != a[j][i]) {
                return 0;
            }
        }
    }
    return 1;
    
}
