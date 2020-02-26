#include "libft.h"
//#include <stdio.h>

int		main(void)
{
// *** ft_memset
	// char	*vmemset = (char *)malloc(15);
	// ft_memset(vmemset, '0', 5);
	// free(vmemset);
// *** ft_bzero
	// char	*vbzero = (char *)malloc(15);
	// ft_bzero(vbzero, 15);
	// free(vbzero);
// *** ft_memcpy
	// char	*vmemcpy1 = "bolinhooo";
	// char	*vmemcpy2 = (char *)malloc(15);
	// ft_memcpy(vmemcpy2, vmemcpy1, 15);
	// free(vmemcpy1);
	// free(vmemcpy2);
// *** ft_memccpy
	// char	*vmemccpy1 = (char *)malloc(15);
	// ft_memcpy(vmemccpy1, "bolinho", 7);
	// char	*vmemccpy2 = (char *)malloc(15);
	// ft_memccpy(vmemccpy2, vmemccpy1, 'i', 15);
	// free(vmemccpy2);
	// free(vmemccpy1);
// *** ft_memmove
	// char	*vmemmove1 = (char *)malloc(15);
	// ft_memcpy(vmemmove1, "bolinho", 7);
	// char	*vmemmove2 = (char *)malloc(15);
	// ft_memmove(vmemmove2, vmemmove1, 15);
	// free(vmemmove2);
	// free(vmemmove1);
// *** ft_memchr
	// char	*vmemchr = (char *)malloc(15);
	// ft_memcpy(vmemchr, "bolinho", 7);
	// ft_memchr(vmemchr, 'c', 7);
	// free(vmemchr);
// *** ft_memcmp
	// char	*vmemcmp1 = (char *)malloc(15);
	// ft_memcpy(vmemcmp1, "bolinho", 7);
	// char	*vmemcmp2 = (char *)malloc(15);
	// ft_memcpy(vmemcmp2, "bolinha", 7);
	// ft_memcmp(vmemcmp1, vmemcmp2, 7);
	// free(vmemcmp2);
	// free(vmemcmp1);
// *** ft_strlen
	// char	*vstrlen = (char *)malloc(15);
	// ft_memcpy(vstrlen, "bolinho", 7);
	// vstrlen[7] = '\0';
	// ft_strlen(vstrlen);
	// free(vstrlen);
// *** ft_strlcpy
	// char	*vstrlcpy1 = (char *)malloc(15);
	// char	*vstrlcpy2 = (char *)malloc(15);
	// ft_memcpy(vstrlcpy1, "bolinho", 7);
	// vstrlcpy1[7] = '\0';
	// ft_strlcpy(vstrlcpy2, vstrlcpy1, 4);
	// free(vstrlcpy1);
	// free(vstrlcpy2);
// *** ft_strlcat
	// char	*vstrlcat1 = (char *)malloc(15);
	// char	*vstrlcat2 = (char *)malloc(30);
	// ft_memcpy(vstrlcat1, "bolinho", 7);
	// ft_memcpy(vstrlcat2, "super", 5);
	// vstrlcat1[7] = '\0';
	// vstrlcat2[5] = '\0';
	// ft_strlcat(vstrlcat2, vstrlcat1, 15);
	// free(vstrlcat1);
	// free(vstrlcat2);
// *** ft_strchr
	// char	*vstrchr = (char *)malloc(15);
	// ft_strlcpy(vstrchr, "teste", 5);
	// ft_strchr(vstrchr, 's');
	// free(vstrchr);
// *** ft_strrchr
	// char	*vstrrchr = (char *)malloc(15);
	// ft_strlcpy(vstrrchr, "teste", 5);
	// ft_strrchr(vstrrchr, 't');
	// free(vstrrchr);
// *** ft_strnstr
	// char	*vstrnstr1 = (char *)malloc(15);
	// char	*vstrnstr2 = (char *)malloc(15);
	// ft_strlcpy(vstrnstr1, "teste", 5);
	// ft_strlcpy(vstrnstr2, "st", 2);
	// ft_strnstr(vstrnstr1, vstrnstr2, 5);
	// free(vstrnstr1);
	// free(vstrnstr2);
// *** ft_strncmp
	char	*vstrncmp1 = (char *)malloc(15);
	char	*vstrncmp2 = (char *)malloc(15);
	ft_strlcpy(vstrncmp1, "teste", 5);
	ft_strlcpy(vstrncmp2, "testa", 5);
	ft_strncmp(vstrncmp1, vstrncmp2, 5);
	free(vstrncmp1);
	free(vstrncmp2);

	return (0);
}
