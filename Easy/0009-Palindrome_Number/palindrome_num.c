/**
 * isPalindrome - checks if the given number is a palindrome.
 * @num: a given number.
 *
 * Return: true or false.
 */
bool isPalindrome(int num)
{
	size_t revNum = 0, last_digit, temp = num;

	while (temp > 0)
	{
		last_digit = temp % 10;
		revNum = (revNum * 10) + last_digit;
		temp /= 10;
	}
	if (revNum == num)
		return (true);
	else
		return (false);
}
