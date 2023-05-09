#include <stdio.h>

int main() {
    int a = 5, b = 2, c = 1;
    int result1, result2, result3;
    
    result1 = a + b * c;  // addition and multiplication have equal precedence, multiplication is evaluated first
    result2 = (a + b) * c;  // parentheses have the highest precedence, addition is evaluated first
    result3 = a * b / c;  // multiplication and division have equal precedence, left to right evaluation
    
    printf("a + b * c = %d\n", result1);
    printf("(a + b) * c = %d\n", result2);
    printf("a * b / c = %d\n", result3);
    
    return 0;
}
