q2)
#include <stdio.h>
int main(){
  int n,i;
  float sum[100],sum=0.0,avg=0;
  prinf("enter the number of elements: ");
  scanf("%d",&n);
  for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
  avg=sum/n;
  printf("Average = %.2f", avg);
  return 0;
}
q3)
#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
