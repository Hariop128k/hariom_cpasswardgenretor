 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int i, j, num_passwords, length;
  char password[20];
  const char *characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";

  printf("Enter number of passwords to generate: ");
  scanf("%d", &num_passwords);
  printf("Enter password length: ");
  scanf("%d", &length);

  srand(time(0));
  for (i = 0; i < num_passwords; i++) {
    for (j = 0; j < length; j++) {
      password[j] = characters[rand() % strlen(characters)];
    }
    password[length] = '\0';
    printf("Random password %d: %s\n", i+1, password);
  }

  return 0;
}
