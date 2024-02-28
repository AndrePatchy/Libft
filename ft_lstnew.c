#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	char	*s;
	t_list	*element;

	s = (char *)malloc(6 * sizeof(char));
	s = "Andre";
	element = ft_lstnew((void *)s);
	printf("%s\n", (char *)element->content);
	free(element->content);
	return (0);
}*/
