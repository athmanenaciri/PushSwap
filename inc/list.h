#ifndef LIST_H
# define LIST_H

typedef struct node
{
	int			data;
	int			position;
	struct node	*next;
}t_list;

t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list	**lst, t_list	*new);
void	ft_lstadd_front(t_list	**lst, t_list	*new);
void	ft_lstclear(t_list **lst);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
t_list	*ft_before_last(t_list *stack);

#endif
