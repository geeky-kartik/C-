#include <stdio.h>
#include <string.h>
int main()
{
    char queue[10][20];
    int i, j, k, front = 0, rear = 0, match = 0, max = 0;
    char name1[20], name2[20];
    //Enter radha , arvind and bhuvan
    front = 1;
    rear = 1;
    strcpy(queue[rear], "Radha");
    rear = rear + 1;
    strcpy(queue[rear], "Aravind");
    rear = rear + 1;
    strcpy(queue[rear], "Bhuvan");
    
    for (i = front; i < rear; i++)
    {
        for (j = i + 1; j <= rear; j++)
        {
            //compare
            k = 0;
            while (queue[i][k] != '\0')
            {
                if (queue[i][k] == queue[j][k])
                {
                    match++;
                    //matched char
                    printf("Matched - %d '%c' ", match, queue[i][k]);
                }
                k++;
            }
            //no match
            if (match == 0)
                printf("Not Matched");
            if (max < match)
            {
                max = match;
                strcpy(name1, queue[i]);
                strcpy(name2, queue[j]);
            }
            match = 0;
            printf("\n");
        }
    }
    //hughest match
    printf("\nHighly matched characters %d : %s %s", max, name1, name2);
    return 0;
}