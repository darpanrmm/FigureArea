#include <stdio.h>
#include <math.h>
#include <iostream>
struct coords{
    int x;
    int y;
};
using namespace std;

int main() {
    int num;
    double S = 0;
    coords c[10];
    printf("Input numb of vertex: ");
    scanf("%i", &num);
    char vertex = 'A' - 1;
    for (int i = 0; i < num; i++) {
        printf("Input coordinates %c %i:", ++vertex, i+1);
        scanf("%i", &c[i].x);
        scanf("%i", &c[i].y);
    }
    c[num] = c[0];
    for (int i = 0; i < num; i++) {
        S = S + (c[i].x * c[i+1].y - c[i].y * c[i+1].x);
    }
    S = abs(S/2);
    printf("\nS=%f", S);

    system("pause");
    cout<<"Print any key...";
    cin.get();
	return 0;
}

