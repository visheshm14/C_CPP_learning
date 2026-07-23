// /two sum
#include <stdio.h>
void main()
{
    int nums[10], target, numslength;
    printf("enter the length of the array");
    scanf("%d", &numslength);
    printf("enter the values of array ");
    for (int i = 1; i <= numslength; i++)
        scanf("%d", &nums[i]);
    printf("enter the value of target");
    scanf("%d", &target);
    for (int i = 0; i <= numslength; i++)
    {
        for (int j = 0; j <= numslength; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("%d%d\n", i, j);
                
            }
            
        }
    }
}