#include <stdio.h>

// Function to calculate string length (my_strlen)
int my_strlen(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Function to compare two strings (my_strcmp)
int my_strcmp(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        i++;
    }
    return str1[i] - str2[i];
}

// Function to copy a string (my_strcpy)
void my_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Ensure destination is null-terminated
}

// Function to concatenate two strings (my_strcat)
void my_strcat(char *dest, char *src) {
    int dest_len = my_strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
 }
    dest[dest_len + i] = '\0'; // Ensure concatenated string is null-terminated
}

int main() {
    char storedun[50];
    char userun[50];
    char message[100] = "Status: ";

    my_strcpy(storedun, "varadabhide");

    printf("Enter your username: ");
    scanf("%s",&userun);  

   // Compare the user password with stored password
    if (my_strcmp(storedun, userun) == 0) 
    {
        // Concatenate success message
        my_strcat(message, "username Matched!");
        printf("%s\n", message);

        // Show length of password
        printf("username length: %d characters\n", my_strlen(userun));
    }
    else {
        // Concatenate failure message
       my_strcat(message, "Incorrect username");
        printf("%s\n", message);
    }

    return 0;
}
