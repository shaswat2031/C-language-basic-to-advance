// //code of differnet pattern using switch case
// 1)Square star pattern
// 2)Hollow square star pattern
// 3)Rectangle star pattern
// 4)Hollow rectangle star pattern
// 5)Right triangle star pattern
// 6)Mirrored right triangle star pattern
// 7)priyamd triangle star pattern
// 8)number priyamd triangle star pattern
// 9) diamond star pattern
// 10) fibbonaci series on right triangle star pattern
// 11) fibbonaci series on mirrored right triangle star pattern
// 12) pascal triangle star pattern numbers
// 13)inveted star pattern

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void square_star_pattern(int n);
void hollow_square_star_pattern(int n);
void rectangle_star_pattern(int row, int col);
void hollow_rectangle_star_pattern(int row, int col);
void right_triangle_star_pattern(int n);
void mirrored_right_triangle_star_pattern(int n);
void pyramid_star_pattern(int n);
void number_pyramid_star_pattern(int n);
void diamond_star_pattern(int n);
void fibbonaci_series_on_right_triangle_star_pattern(int n);
void fibbonaci_series_on_mirrored_right_triangle_star_pattern(int n);
void pascal_triangle_star_pattern_numbers(int n);
void inverted_star_pattern(int n);

int main(){
    int choice, n, row, col;
    while(1){
        printf("\n1)Square star pattern\n");
        printf("2)Hollow square star pattern\n");
        printf("3)Rectangle star pattern\n");
        printf("4)Hollow rectangle star pattern\n");
        printf("5)Right triangle star pattern\n");
        printf("6)Mirrored right triangle star pattern\n");
        printf("7)priyamd triangle star pattern\n");
        printf("8)number priyamd triangle star pattern\n");
        printf("9) diamond star pattern\n");
        printf("10) fibbonaci series on right triangle star pattern\n");
        printf("11) fibbonaci series on mirrored right triangle star pattern\n");
        printf("12) pascal triangle star pattern numbers\n");
        printf("13)inveted star pattern\n");
        printf("14)Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                square_star_pattern(n);
                break;
            case 2:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                hollow_square_star_pattern(n);
                break;
            case 3:
                printf("Enter the number of rows and columns: ");
                scanf("%d %d", &row, &col);
                rectangle_star_pattern(row, col);
                break;
            case 4:
                printf("Enter the number of rows and columns: ");
                scanf("%d %d", &row, &col);
                hollow_rectangle_star_pattern(row, col);
                break;
            case 5:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                right_triangle_star_pattern(n);
                break;
            case 6:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                mirrored_right_triangle_star_pattern(n);
                break;
            case 7:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                pyramid_star_pattern(n);
                break;
            case 8:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                number_pyramid_star_pattern(n);
                break;
            case 9:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                diamond_star_pattern(n);
                break;
            case 10:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                fibbonaci_series_on_right_triangle_star_pattern(n);
                break;
            case 11:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                fibbonaci_series_on_mirrored_right_triangle_star_pattern(n);
                break;
            case 12:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                pascal_triangle_star_pattern_numbers(n);
                break;
            case 13:
                printf("Enter the number of rows: ");
                scanf("%d", &n);
                inverted_star_pattern(n);
                break;
            case 14:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

void square_star_pattern(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void hollow_square_star_pattern(int n){
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void rectangle_star_pattern(int row, int col){
    int i, j;
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void hollow_rectangle_star_pattern(int row, int col){
    int i, j;
    for(i=1; i<=row; i++){
        for(j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

void right_triangle_star_pattern(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void mirrored_right_triangle_star_pattern(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf("  ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void pyramid_star_pattern(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void number_pyramid_star_pattern(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("%d ", i);
        }
        printf("\n");
    }
}

void diamond_star_pattern(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1; i>=1; i--){
        for(j=1; j<=n-i; j++){
            printf("  ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void fibbonaci_series_on_right_triangle_star_pattern(int n){
    int i, j, a=0, b=1, c;
    for(i=1; i<=n; i++){
        a=0;
        b=1;
        for(j=1; j<=i; j++){
            printf("%d ", a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }
}

void fibbonaci_series_on_mirrored_right_triangle_star_pattern(int n){
    int i, j, a=0, b=1, c;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i; j++){
            printf("  ");
        }
        a=0;
        b=1;
        for(j=1; j<=i; j++){
            printf("%d ", a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }
}

void pascal_triangle_star_pattern_numbers(int n){
    int i, j, k, val;
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            printf("  ");
        }
        for(k=0; k<=i; k++){
            if(k==0 || i==0){
                val=1;
            }
            else{
                val=val*(i-k+1)/k;
            }
            printf("%d   ", val);
        }
        printf("\n");
    }
}

void inverted_star_pattern(int n){
    int i, j;
    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

