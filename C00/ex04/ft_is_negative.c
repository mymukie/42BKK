#include <unistd.h>

void ft_is_negative(int n)
{
	char latter;

	if(n >= 0)
	{
		latter = 'P';

		write(1, &latter, 1);
		
	}
	else
	{
		latter = 'N';

		write(1, &latter, 1);
		
	}

}


int main()
{
	ft_is_negative(-11);

	return(0);
}
