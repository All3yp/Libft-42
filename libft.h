/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:39:55 by nopereir          #+#    #+#             */
/*   Updated: 2022/07/01 22:43:58 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief 	Checks for an alphabetic character.
 * @param c Param to be tested.
 * @return  The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not.
 */
int					ft_isalpha(int c);

/**
 * @brief	Checks for a digit (0 through 9).
 * @param c Param to be tested.
 * @return 	The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not. 
 */
int					ft_isdigit(int c);

/**
 * @brief	Checks for an alphanumeric character;
 * 			it is equivalent to (isalpha(c) || isdigit(c)).
 * @param c Param to be tested.
 * @return 	The values returned are nonzero  if  the
 *          character c falls into the tested class,
 *          and zero if not.
 */
int					ft_isalnum(int c);

/**
 * @brief	Checks whether c is a 7-bit unsigned char
 * 			value  that fits into the ASCII character set.
 * @param c Param to be tested.
 * @return 	The values returned  are  between  zero and
 *          octal 0177.
 */
int					ft_isascii(int c);

/**
 * @brief	Checks for any printable character
 * 			including space.
 * @param c Param to be tested.
 * @return 	The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not.
 */
int					ft_isprint(int c);

/**
 * @brief 	convert lowercase letters to uppercase
 * @param c c is the letter to be converted if possible
 * @return 	The value returned is that of the con‐
       		verted letter, or c if the  conversion
       		was not possible.
 */
int					ft_toupper(int c);

/**
 * @brief 	convert uppercase letters to lowercase
 * @param c c is the letter to be converted if possible
 * @return 	The value returned is that of the con‐
       		verted letter, or c if the  conversion
       		was not possible.
 */
int					ft_tolower(int c);

/**
 * @brief	The function calculates  the
 *      	length of the string pointed to by s, excluding
 *			the terminating null byte ('\0').
 * @param str String to be parsed.
 * @return	Returns the number
 *			of bytes in the string pointed to by str. 
 */
size_t				ft_strlen(const char *str);

/**
 * @brief 	The function finds the first 
 *          occurrence of c (converted to a char)
 *          in the string pointed to by s.
 * @param s The string to be scanned
 * @param c The character to be searched in s
 * @return	A pointer to the matched char‐
 *			acter or NULL if the character is not
 *			found.
 */
char				*ft_strchr(const char *s, int c);

/**
 * @brief 	Returns  a pointer to
 *      	the last occurrence of the
 *      	character c in the string s.
 * @param s The string to be scanned
 * @param c The character to be searched in s
 * @return	A pointer to the matched character 
 * 			or NULL if the character is not
 *			found 
 */
char				*ft_strrchr(const char *s, int c);

/**
 * @brief	Fills the first n bytes of the memory area
       		pointed to by s with the constant byte c.
 * @param str	A pointer to the block of memory to fill.
 * @param c the value to be set. The value is passed as an int, 
 * 			but the function fills the block of memory using the unsigned 
 * 			char conversion of this value.
 * @param n Number of bytes to be set to the value.
 * @return	Returns a pointer to the memory area str.
 */
void				*ft_memset(void *str, int c, size_t n);

/**
 * @brief	Erases the data in the n bytes of the memory
 * 			starting at the location pointed to by s, by writing zeros  (bytes
 * 			containing '\0') to that area.
 * @param s A pointer to the block of memory to erase.
 * @param n Number of bytes to be set to the value.
 */
void				ft_bzero(void *s, size_t n);

/**
 * @brief		Copies n characters from memory
 * 				area src to memory area dest.
 * @param dest 	Pointer to the destination array
 * 				where the content is to be copied.
 * @param src 	Pointer to the source of data to be copied.
 * @param n 	Number of bytes to be copied.
 * @return 		A pointer to destination, which is dest.
 */
void				*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief 		Copies n bytes from memory area src to memory
 *      		area dest. The memory areas may	overlap.
 * @param dest 	Pointer to the destination array
 * 				where the content is to be copied.
 * @param src 	Pointer to the source of data to be copied.
 * @param n 	Number of bytes to be copied.
 * @return 			A pointer to destination, which is dest.
 */
void				*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief 		appends the NUL-
 *				terminated string src to the end of dst.
 *				It will append at most size -
 *				strlen(dst) - 1 bytes, NUL-terminating
 *				the result.
 * @param dst 	Pointer to the destination array
 * 				where the string is to be copied.
 * @param src 	Pointer to the source of string to be copied.
 * @param size 	Number of characteres to be copied.
 * @return  	The total length of the string
 *				it tried to create, that means 
 *				the initial length
 * 				of dst plus the length of src.
 */
size_t				ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief 		Copies up to size - 1 characters
 *    			from the NUL-terminated string
 *   			src to dst, NUL-terminating the
 *    			result.
 * @param dst 	Pointer to the destination array
 * 				where the string is to be copied.
 * @param src 	Pointer to the source of string to be copied
 * @param size 	Number of characteres to be copied.
 * @return 		The total length of the string
 *				it tried to create, that means
 *				the length of src.
 */
size_t				ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief		Compares  only the first (at most)
 *				n bytes of the two strings s1 and s2
 * @param s1 	The first string to be compared.
 * @param s2 	The second string to be compared.
 * @param n 	The maximum number of characters to be compared.
 * @return		An integer less than, equal to,
 *      		or greater than zero  if  s1  (or  the
 *      		first  n  bytes thereof) is found, re‐
 *      		spectively, to be less than, to match,
 *      		or be greater than s2 
 */
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief 	the function looks for the first occurrence 
 *          of the character c (an unsigned character)in the 
 *          first n bytes of the pointed string, by the str argument.
 * @param s	Pointer to the memory area to be scanned
 * @param c	The caracter to be searched in s
 * @param n	Number of bytes to be scanned
 * @return	a pointer to the matching byte
 *      	or NULL if the character does not 
 *      	occur in the given memory area. 
 */
void				*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief		Compares the first n bytes
 *      		(each interpreted as unsigned
 *      		char)  of  the memory areas s1 and s2. 
 * @param s1 	First memory area to be compared to s2
 * @param s2 	Second memory area to be compared to s1
 * @param n 	Number of bytes to compare
 * @return			Returns zero if the two strings are identical,
 *              otherwise returns the difference between the first 
 *              two differing bytes.
 */
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/**
* @brief           Locates the first occurrence of the 
*				null-terminated string little in the null-terminated string big.
* @param haystack   This is the main C string to be scanned.
* @param needle     This is the small string to be searched with-in haystack.
* @param len        Number of characteres to be copied.
* @return           Returns the string haystack starting from the first 
*                   character of the first occurrence of needle.
*/
char				*ft_strnstr(const char *haystack, const char *needle,
						size_t len);

/**
 * @brief			Converts the string argument str to an integer (type int).
 * @param str 		Pointer to the string to be converted.
 * @return 			The converted integral number as an int value.
 */
int					ft_atoi(const char *str);

/**
 * @brief 			Allocates the requested memory and returns a pointer to it. 
 * @param nmemb 	The number of elements to be allocated.
 * @param size 		The size of elements.
 * @return			Returns a pointer to the allocated memory, 
 * 					or NULL if the request fails.
 */
void				*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief		Is used to duplicate a string.
 * @param s 	String to be duplicated.
 * @return		Returns a pointer to a null-terminated byte string,
 * 				which is a duplicate of the string pointed to by s.
 */
char				*ft_strdup(const char *s);

/**
 * @brief 		Allocates (with malloc(3)) and returns a substring
 * 				from the string ’s’.
 * 				The substring begins at index ’start’ and is of
 * 				maximum size ’len’.
 * @param s 	The string from which to create the substring.
 * @param start The start index of the substring in the
 *				string ’s’.
 * @param len 	The maximum length of the substring.
 * @return		The substring or NULL if the allocation fails.
 */
char				*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief 		Allocates (with malloc(3)) and returns a new
 * 				string, which is the result of the concatenation
 *				of ’s1’ and ’s2’.
 * @param s1 	The prefix string.
 * @param s2 	The suffix string.
 * @return 		The new string or NULL if the allocation fails.
 */
char				*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief 		Allocates (with malloc(3)) and returns a copy of
 *				’s1’ with the characters specified in ’set’ removed
 *				from the beginning and the end of the string.
 * @param s1 	The string to be trimmed.
 * @param set 	The reference set of characters to trim.
 * @return		The trimmed string or NULL if the allocation fails.
 */
char				*ft_strtrim(char const *s1, char const *set);

/**
 * @brief 	Allocates (with malloc(3)) and returns an array
 * 			of strings obtained by splitting ’s’ using the
 * 			character ’c’ as a delimiter. The array must end
 * 			with a NULL pointer.
 * @param s The string to be splited
 * @param c The delimiter character.
 * @return	The array of new strings resulting from the split
 *			or NULL if the allocation fails.
 */
char				**ft_split(char const *s, char c);

/**
 * @brief 	Allocates (with malloc(3)) and returns a string
 * 			representing the integer received as an argument.
 * 			Negative numbers must be handled.
 * @param n The integer to convert
 * @return	Returns the string representing the integer
 *  		or NULL if the allocation fails.
 */
char				*ft_itoa(int n);

/**
 * @brief Applies the function ’f’ to each character of the string ’s’
 * to create a new string (with malloc(3)) resulting from successive
 * applications of ’f’.
 *
 * @param s The string on which to iterate
 * @param f The function to apply to each characte
 * @return char* The string created from the successive applications of ’f’.
 * Returns NULL if the allocation fails.
 */
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief 	Applies the function ’f’ on each character of
 *			the string passed as argument, passing its index
 *			as first argument. Each character is passed by
 *			address to ’f’ to be modified if necessary.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief 		Outputs the character ’c’ to the given file
 *				descriptor.
 * @param c 	The character to output.
 * @param fd 	The file descriptor on which to write.
 */
void				ft_putchar_fd(char c, int fd);

/**
 * @brief 		Outputs the string ’s’ to the given file
 *				descriptor.
 * @param s 	The string to output.
 * @param fd 	The file descriptor on which to write.
 */
void				ft_putstr_fd(char *s, int fd);

/**
 * @brief 		Outputs the string ’s’ to the given file 
 *				descriptor followed by a newline.
 * @param s 	The string to output.
 * @param fd 	The file descriptor on which to write.
 */
void				ft_putendl_fd(char *s, int fd);

/**
 * @brief 		Outputs the integer ’n’ to the given file
 *				descriptor.
 * @param n		The integer to output.
 * @param fd 	The file descriptor on which to write.
 */
void				ft_putnbr_fd(int n, int fd);

/**
 * @brief Allocates (with malloc(3)) and returns a new element.
 * The variable ’content’ is initialized with the value of the
 * parameter ’content’. The variable ’next’ is initialized to NULL.
 *
 * @param content The content to create the new element with
 * @return t_list* The new element
 */
t_list				*ft_lstnew(void *content);

/**
 * @brief Adds the element ’new’ at the beginning of the list.
 *
 * @param lst The address of a pointer to the first link of a list
 * @param new The address of a pointer to the element to be added to the list
 */
void				ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Adds the `new` element at the end of the list.
 * 
 * @param lst The address of a pointer to the first link of a list
 * @param new The address of a pointer to the element to be
 * added to the list.
 */
void				ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Counts the number of elements in a list.
 *
 * @param lst The beginning of a list
 * @return int Returns the length of a list
 */
int					ft_lstsize(t_list *lst);

/**
 * @brief Returns the last element of the list.
 *
 * @param lst The beginning of the list
 * @return t_list* Returns the last element of the list.
 * Returns NULL if `lst` is empty
 * or is already in the last element.
 */
t_list				*ft_lstlast(t_list *lst);

/**
 * @brief Takes as a parameter an element and frees the
 * memory of the element’s content using the function
 * ’del’ given as a parameter and free the element.
 * The memory of ’next’ must not be freed.
 *
 * @param lst The element to free
 * @param del The address of the function used to delete the content.
 */
void				ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Deletes and frees the given element and every
 * successor of that element, using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 *
 * @param lst The adress of a pointer to an element
 * @param del The adress of the function used to delete
 * the content of the element.
 */
void				ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function
 * ’f’ to the content of each element.
 *
 * @param lst The adress of a pointer to an element
 * @param f The adress of the function used to iterate on the list
 */
void				ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’
 * to the content of each element. Creates a new list resulting
 * of the successive applications of the function ’f’.
 * The ’del’ function is used to delete the content of an element if needed.
 *
 * @param lst	The adress of a pointer to an element
 * @param f		The adress of the function used to iterate on the list
 * @param del	The adress of the function used to delete the
 * content of an element if needed
 * @return t_list* Returns the new list or NULL if the allocation fails.
 */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif
