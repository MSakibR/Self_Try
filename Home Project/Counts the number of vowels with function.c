#include<stdio.h>
#include<string.h>
int find(char str[])
{
    int length = 0;
    int vowelCount = 0;

    while(str[length] != '\0')
    {
        if(str[length]== 'A'|| str[length]== 'E'||str[length]== 'I'||str[length]== 'O'||str[length]== 'U'||str[length]== 'a'||str[length]== 'e'||str[length]== 'i'||str[length]== 'o'||str[length]== 'u')
        {
            vowelCount++;
        }
        length++;
    }
    return vowelCount;
}

int main()
{
    char input[1000];
    fgets(input, sizeof(input), stdin);
    int length = find(input);
    printf("%d", length);
}
