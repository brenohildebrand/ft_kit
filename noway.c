/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noway.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:50:54 by marvin            #+#    #+#             */
/*   Updated: 2023/10/14 14:50:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	assign(void **ptr)
{
	int	*number;

	number = malloc(1 * sizeof(int));
	*number = 42;
	(*ptr) = number;
}

// void	another_assign(void *ptr)
// {
// 	int	*number;

// 	number = malloc(1 * sizeof(int));
// 	*number = 21;
// 	ptr = number;
// }

int	main(void)
{
	int	*number;

	assign((void **)&number);
	printf("number: %d\n", *number);
	
	// another_assign(&number);
	// printf("number: %d\n", *number);
	return (0);
}

// #include <stdio.h>

// // Function that receives a generic pointer to pointer
// void modifyPointer(void** genericPtr) {
//     // Here, you can work with the generic pointer and its value
//     int newValue = 100;
//     *genericPtr = &newValue; // Assign the address of a new value to the generic pointer
// }

// int main() {
//     int value = 42;
//     int* intPtr = &value;

//     printf("Original Value: %d\n", *intPtr);

//     // Call the function and pass a pointer to a pointer
//     modifyPointer((void**)&intPtr);

//     printf("Modified Value: %d\n", *intPtr);

//     return 0;
// }
