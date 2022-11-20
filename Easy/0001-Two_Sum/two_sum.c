/**
 * twosum - a function that returns indices of the two numbers
 * 		such that they add up to the target.
 * @nums: given array of integers
 * @target: an integer that equals to the possible sum of
 * 		two elements of an array.
 * @numsSize: size of an array.
 * @returnSize: size of return array.
 *
 * Return: an array of index(indices) of the element
 * 	   that add up to the target.
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int i, j;
	int *index = malloc(sizeof(int) * 2);

	if (!index)
		return (NULL);
	for (i = 0; i < numsSize; i++)
	{
		for (j = i + 1; j < numsSize; j++)
		{
			if (nums[i] + nums[j] == target)
			{
				*returnSize = 2;
				index[0] = i;
				index[1] = j;
				return (index);
			}
		}
	}
	*returnSize = 0;
	return (NULL);
}
