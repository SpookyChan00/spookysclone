char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && n > 0)
	{
		dest[count] = src[count];
		count++;
		n--;
	}
	while (n > 0)
	{
		dest[count] = '\0';
		count++;
		n--;
	}
	return (dest);
}