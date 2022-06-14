/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 10:39:55 by nopereir          #+#    #+#             */
/*   Updated: 2022/06/14 10:24:30 by nopereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
#include <stdbool.h>

/**
 * @brief 	Checks for an alphabetic character.
 * @param c Param to be tested.
 * @return  The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not.
 */
int		ft_isalpha(int c);

/**
 * @brief	Checks for a digit (0 through 9).
 * @param c Param to be tested.
 * @return 	The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not. 
 */
int		ft_isdigit(int c);

/**
 * @brief	Checks for an alphanumeric character;
 * 			it is equivalent to (isalpha(c) || isdigit(c)).
 * @param c Param to be tested.
 * @return 	The values returned are nonzero  if  the
 *          character c falls into the tested class,
 *          and zero if not.
 */
int		ft_isalnum(int c);

/**
 * @brief	Checks whether c is a 7-bit unsigned char
 * 			value  that fits into the ASCII character set.
 * @param c Param to be tested.
 * @return 	The values returned  are  between  zero and
 *          octal 0177.
 */
int		ft_isascii(int c);

/**
 * @brief	Checks for any printable character
 * 			including space.
 * @param c Param to be tested.
 * @return 	The values returned  are  nonzero  if  the
 *          character  c  falls into the tested class,
 *          and zero if not.
 */
int		ft_isprint(int c);

/**
 * @brief 	convert lowercase letters to uppercase
 * @param c c is the letter to be converted if possible
 * @return 	The value returned is that of the con‐
       		verted letter, or c if the  conversion
       		was not possible.
 */
int		ft_toupper(int c);

/**
 * @brief 	convert uppercase letters to lowercase
 * @param c c is the letter to be converted if possible
 * @return 	The value returned is that of the con‐
       		verted letter, or c if the  conversion
       		was not possible.
 */
int		ft_tolower(int c);

/**
 * @brief	The function calculates  the
 *      	length of the string pointed to by s, excluding
 *			the terminating null byte ('\0').
 * @param str String to be parsed.
 * @return	Returns the number
 *			of bytes in the string pointed to by str. 
 */
size_t	ft_strlen(const char *str);

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
char	*ft_strchr(const char *s, int c);

/**
 * @brief 	Returns  a pointer to
 *      	the last occurrence of the
 *      	character c in the string s.
 * @param s The string to be scanned
 * @param c The character to be searched in s
 * @return	A pointer to the matched char‐
 *			acter or NULL if the character is not
 *			found 
 */
char	*ft_strrchr(const char *s, int c);

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
void	*ft_memset(void *str, int c, size_t n);

/**
 * @brief	Erases the data in the n bytes of the memory
 * 			starting at the location pointed to by s, by writing zeros  (bytes
 * 			containing '\0') to that area.
 * @param s A pointer to the block of memory to erase.
 * @param n Number of bytes to be set to the value.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief		Copies n characters from memory
 * 				area src to memory area dest.
 * @param dest 	Pointer to the destination array
 * 				where the content is to be copied.
 * @param src 	Pointer to the source of data to be copied.
 * @param n 	Number of bytes to be copied.
 * @return 		A pointer to destination, which is dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief 		Copies n bytes from memory area src to memory
 *      		area dest. The memory areas may	overlap.
 * @param dest 	Pointer to the destination array
 * 				where the content is to be copied.
 * @param src 	Pointer to the source of data to be copied.
 * @param n 	Number of bytes to be copied.
 * @return 			A pointer to destination, which is dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

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
size_t	ft_strlcat(char *dst, const char *src, size_t size);

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
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

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
int		ft_strncmp(const char *s1, const char *s2, size_t n);

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
void	*ft_memchr(const void *s, int c, size_t n);

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
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
* @brief           The function locates the first occurrence of the 
*                  null-terminated string little in the null-terminated string big.
*
* @param haystack   This is the main C string to be scanned.

* @param needle     This is the small string to be searched with-in 
*                   haystack string.
* @param len        Number of characteres to be copied.
*
* @return           Returns the string haystack starting from the first 
*                   character of the first occurrence of needle.
*                   If string needle is empty, the whole string 
* 
*                   haystack is returned. Finally if needle is nowhere 
*                   in haystack, NULL is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief			Converts the string argument str to an integer (type int).
 * 
 * @param str 		Pointer to the string to be converted.
 *
 * @return 			The converted integral number as an int value.
 */
int		ft_atoi(const char *str);

#endif
