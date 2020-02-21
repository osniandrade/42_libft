#include "libft.h"
#include <stdio.h>

int		main(void)
{
	// *** ft_substr
	// char	str[] = "lorem ipsum dolor sit amet";
	// char	*result;

	// result = ft_substr(str, 400, 20);
	// printf("%s", result);

	// *** ft_strtrim
	// char 	s1[] = "          ";
	// char	*result;
	// result = ft_strtrim(s1, " ");
	// ft_putstr_fd(result, 1);

	// *** ft_split
	// char	**tabstr;
	// tabstr = ft_split("          ", ' ');
	// ft_putstr_fd(tabstr[0], 1);
	// tabstr = ft_split("lorem ipsum ", ' ');
	// while (tabstr)
	// {
	// 	printf("%s\n", *tabstr++);
	// }
	// tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	// ft_putstr_fd(tabstr[0], 1);
	// ft_putchar_fd('\n', 1);
	// tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	// ft_putstr_fd(tabstr[0], 1);
	// ft_putchar_fd('\n', 1);
	// tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	// ft_putstr_fd(tabstr[0], 1);
	// ft_putchar_fd('\n', 1);
	// tabstr = ft_split("", 'z');
	// ft_putstr_fd(tabstr[0], 1);

	// *** ft_lstnew
	t_list		*elem;

	elem = NULL;
	ft_lstnew("lorem ipsum dolor sit");
	free(elem);
	
	return (0);
}
