// header 42

#ifndef LIBFT_H
#define LIBFT_H

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct	s_list
{
	void	*content;
	size_t	content_size;
	struct s_list	*next;
} 
