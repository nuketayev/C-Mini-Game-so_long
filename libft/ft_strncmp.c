#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*unc1;
	const unsigned char	*unc2;
	unsigned int		i;

	if (!s1 || !s2)
		return (0);
	unc1 = (const unsigned char *)s1;
	unc2 = (const unsigned char *)s2;
	i = 0;
	while ((unc1[i] || unc2[i]) && i < n)
	{
		if (unc1[i] != unc2[i])
			return (unc1[i] - unc2[i]);
		i++;
	}
	return (0);
}
