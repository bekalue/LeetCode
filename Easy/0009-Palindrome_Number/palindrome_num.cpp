class solution:
{
	public:
		bool isPalindrome(int x)
		{
			size_t n = x, last_digit, reverse = 0;

			while (n > 0)
			{
				last_digit = n % 10;
				reverse = (reverse * 10) + last_digit;
				n /= 10;
			}
			if (x == reverse)
				return true;
			else
				return false;
		}
};
