/**
 * _memcpy - copies n bytes from memory area 'src' to memory area 'dest'
 * @dest: destination memory  area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: returns a pointer to dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
