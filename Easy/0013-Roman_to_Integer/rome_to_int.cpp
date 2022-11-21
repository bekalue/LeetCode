class solution
{
	public:
		int get_roman(char c)
		{
			switch (c)
			{
				case 'I':
					return 1;
				case 'V':
					return 5;
				case 'X':
					return 10;
				case 'L':
					return 50;
				case 'C':
					return 100;
				case 'D':
					return 500;
				case 'M':
					return 1000;
				default:
					return 0;
			}
		}

		int romanToInt(char *s)
		{
			int result = 0, current, next, i;

			for (i = 0; i < s.size(); i++)
			{
				current = get_roman(s[i]);
				next = get_roman(s[i + 1]);

				if (current >= next)
					result += current;
				else
				{
					result += (next - current);
					i++;
				}
			}
			return result;
		}
};
