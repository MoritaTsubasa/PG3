#include <stdio.h>

template <typename Type1, typename Type2>
Type1 min(Type1 a, Type2 b)
{
	if (a < b)
	{
		return a;
	}
	return b;
}

template<>
char min(char a, char b)
{
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");

	return 0;
}

int main()
{
	printf("%d\n", min<int>(114,514));
	printf("%f\n", min<float>(11.4f, 51.4f));
	printf("%f\n", min<double>(11.4f, 51.4f));
	min('a','b');
	
	return 0;
}