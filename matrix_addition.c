    #include <stdio.h>  
    int main() {  
        // Declare two matrices with 3 rows and 4 columns  
        int matrix1[3][4], matrix2[3][4];  
          
        // Assign values to the first matrix  
        for (int i = 0; i < 3; i++) {  
            for (int j = 0; j < 4; j++) {  
                matrix1[i][j] = i * 4 + j;  
            }  
        }  
          
        // Assign values to the second matrix  
        for (int i = 0; i < 3; i++) {  
            for (int j = 0; j < 4; j++) {  
                matrix2[i][j] = i * 4 + j + 12;  
            }  
        }  
          
        // Declare a new matrix to store the result of the addition  
        int result[3][4];  
          
        // Add the two matrices and store the result in the new matrix  
        for (int i = 0; i < 3; i++) {  
            for (int j = 0; j < 4; j++) {  
                result[i][j] = matrix1[i][j] + matrix2[i][j];  
            }  
        }  
          
        // Print the result  
        for (int i = 0; i < 3; i++) {  
            for (int j = 0; j < 4; j++) {  
                printf("%d ", result[i][j]);  
            }  
            printf("\n");  
        }  
          
        return 0;  
    }  
