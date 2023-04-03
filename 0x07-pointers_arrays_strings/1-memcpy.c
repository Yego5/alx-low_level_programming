/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char* _ memcpy (char* dest, const char* src, size_t n)
   {
    char* pDest = dest;
    const char* pSrc = src;
    while (n-- > 0) 
    {
        *pDest++ = *pSrc++;
    }
     return dest;
   }
}
