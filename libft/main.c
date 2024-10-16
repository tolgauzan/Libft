/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:58:34 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/16 13:58:34 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void	ft_isalpha_check(void)
{
	printf("#include \"libft.h\" ft_isalpha()\n");
	printf("\'a\' :  %d\n", ft_isalpha('a'));
	printf("\'1\' :  %d\n", ft_isalpha('1'));
	printf("5   :  %d\n", ft_isalpha(5));
	printf("#include <ctype.h> isalpha()\n");
	printf("\'a\' :  %d\n", isalpha('a'));
	printf("\'1\' :  %d\n", isalpha('1'));
	printf("5   :  %d\n\n\n", isalpha(5));
}

void	ft_isdigit_check(void)
{
	printf("#include \"libft.h\" ft_isdigit()\n");
	printf("\'5\' :  %d\n", ft_isdigit('5'));
	printf("\'a\' :  %d\n", ft_isdigit('a'));
	printf("\' \' :  %d\n", ft_isdigit(' '));
	printf("#include <ctype.h> isdigit()\n");
	printf("\'5\' :  %d\n", isdigit('5'));
	printf("\'a\' :  %d\n", isdigit('a'));
	printf("\' \' :  %d\n\n\n", isdigit(' '));
}

void	ft_isalnum_check(void)
{
	printf("#include \"libft.h\" ft_isalnum()\n");
	printf("\'5\' :  %d\n", ft_isalnum('5'));
	printf("\'a\' :  %d\n", ft_isalnum('a'));
	printf("\' \' :  %d\n", ft_isalnum(' '));
	printf("#include <ctype.h> isalnum()\n");
	printf("\'5\' :  %d\n", isalnum('5'));
	printf("\'a\' :  %d\n", isalnum('a'));
	printf("\' \' :  %d\n\n\n", isalnum(' '));
}

void	ft_isascii_check(void)
{
	printf("#include \"libft.h\" ft_isascii()\n");
	printf("\'5\' :  %d\n", ft_isascii('5'));
	printf("\'a\' :  %d\n", ft_isascii('a'));
	printf("128 :  %d\n", ft_isascii(128));
	printf("\'\\0\' :  %d\n", ft_isascii('\0'));
	printf("#include <ctype.h> isascii()\n");
	printf("\'5\' :  %d\n", isascii('5'));
	printf("\'a\' :  %d\n", isascii('a'));
	printf("128 :  %d\n", isascii(128));
	printf("\'\\0\' :  %d\n\n\n", isascii('\0'));
}

void	ft_isprint_check(void)
{
	printf("#include \"libft.h\" ft_isprint()\n");
	printf("\' \' :  %d\n", ft_isprint(' '));
	printf("\'~\' :  %d\n", ft_isprint('~'));
	printf("\'a\' :  %d\n", ft_isprint('a'));
	printf("\'\\0\' :  %d\n", ft_isprint('\0'));
	printf("#include <ctype.h> isprint()\n");
	printf("\' \' :  %d\n", isprint(' '));
	printf("\'~\' :  %d\n", isprint('~'));
	printf("\'a\' :  %d\n", isprint('a'));
	printf("\'\\0\' :  %d\n\n\n", isprint('\0'));
}

void 	ft_toupper_check(void)
{
	printf("#include \"libft.h\" ft_toupper(c)\n");
	printf("%c \n",ft_toupper(122));
	printf("#include <ctype.h> toupper(c)\n");
	printf("%c \n\n\n",toupper('z'));
}

void 	ft_tolower_check(void)
{
	printf("#include \"libft.h\" ft_tolower(c)\n");
	printf("%c \n",ft_tolower(65));
	printf("#include <ctype.h> tolower(c)\n");
	printf("%c \n\n\n",tolower('A'));
}

#include <string.h>
void	ft_strlen_check(const char *str)
{
	size_t result_len;

	printf("#include \"libft.h\" ft_strlen(str);\n");
	result_len = ft_strlen(str);
	printf("ft_strlen : %ld \n",result_len);
	printf("#include <string.h> strlen(str);\n");
	result_len = strlen(str);
	printf("strlen : %ld\n\n\n",result_len);
}

void	ft_memset_check()
{
	char myarr[6] = "hello";
	printf("myarr[6] = %s \n", myarr);
	printf("ft_memset(myarr,65,sizeof(myarr)- 1)\n");
	char *pmyarr = (char *)ft_memset(myarr,97,sizeof(myarr) - 1);
	printf("Pointer'a return değeri atananak kullanım pmyarr[6] = %s \n", pmyarr);
	
	printf("myarr[6] = %s \n", myarr);
	int myarr2[5] = {1,2,3,4,5};
	int  *myres_arr2 =(int *) ft_memset(myarr2,0,sizeof(myarr2));
	for (int i = 0; i < 5; i++)
	{
		printf("myres_arr2[%d] = %d\n", i, myres_arr2[i]);
	}
	printf("-------------------------\n");
	char arr[6] = "hello";
	printf("arr[6] = %s \n", arr);
	memset(arr,97,sizeof(arr) - 1);
	printf("memset(arr,65,sizeof(arr)- 1)\n");
	printf("arr[6] = %s \n", arr);
	int arr2[5] = {1,2,3,4,5};
	int  *res_arr2 =(int *) memset(arr2,0,sizeof(arr2));
	for (int i = 0; i < 5; i++)
	{
		printf("res_arr2[%d] = %d\n", i, res_arr2[i]);
	}
	printf("\n\n\n");
}

void	ft_bzero_check()
{
	char myarr[6] = "hello";
	printf("myarr[6] = %s \n", myarr);
	printf("ft_bzero(myarr,sizeof(myarr)- 1)\n");
	ft_bzero(myarr,sizeof(myarr) - 1);
	printf("myarr[6] = %s \n", myarr);

	int myarr2[5] = {1,2,3,4,5};
	ft_bzero(myarr2,sizeof(myarr2));
	for (int i = 0; i < 5; i++)
	{
		printf("myarr2[%d] = %d\n", i, myarr2[i]);
	}
	printf("-------------------------\n");
	char arr[6] = "hello";
	printf("arr[6] = %s \n", arr);
	bzero(arr,sizeof(arr) - 1);
	printf("bzero(arr,sizeof(arr)- 1)\n");
	printf("arr[6] = %s \n", arr);
	int arr2[5] = {1,2,3,4,5};
	bzero(arr2,sizeof(arr2));
	for (int i = 0; i < 5; i++)
	{
		printf("arr2[%d] = %d\n", i, arr2[i]);
	}
	printf("\n\n\n");
}

void	ft_memcpy_check()
{
	char src1[] ="Tolga Uzan";
	char dest1[20];
	printf("ft_memcpy()\n");
	ft_memcpy(dest1, src1, ft_strlen(src1) + 1);
	printf("dest[] = %s\n", dest1);
	char src2[] ="Tolga Uzan";
	char dest2[20];
	printf("memcpy()\n");
	memcpy(dest2, src2, ft_strlen(src2) + 1);
	printf("dest2[] = %s\n\n\n", dest2);
}

void 	ft_memmove_check()
{
	char str[50] = "HelloWorld";
	printf("Orj str %s\n", str);
	ft_memmove(str + 2, str ,ft_strlen(str) + 1);
	printf("ft_memmove result : %s\n\n\n\n", str);
}

void	ft_strlcpy_check()
{
	char dest[10];
	char src[] = "tolga";
	int strlen = ft_strlcpy(dest, src, 4);
	printf("return value srclen: %d \n", strlen);
	printf("dest : %s\n\n\n", dest);
}

void	ft_strlcat_check()
{
	char dest[20] = "tolga";
	char src[] = "uzan";
	int res = ft_strlcat(dest,src,10);
	printf("return : %d\n dest :%s\n\n\n",res, dest);
}

void	ft_strchr_check()
{
	char arr[] = "tolgauzan";
	printf("Arr ilk adresi : %p\n", arr); 
	printf("Null bulunan adresi : %p \n\n\n", ft_strchr(arr,'\0'));
}

void	ft_strrchr_check()
{
	char arr[] = "tolgauzan";
	printf("Sonraki nullterminator'u bul %p\n",&arr[9]);
	printf("Sondan ara %p\n\n\n", ft_strrchr(arr, '\0'));
}

void	ft_strncmp_check()
{
	char arr1[] = "aaabaa";
	char arr2[] = "aaab";
	printf("ft_strncmp() %d \n", ft_strncmp(arr1,arr2,4));
	printf("strncmp() %d\n\n\n",strncmp(arr1,arr2,4));
}

void	ft_memchr_check()
{
	char arr[] = "Tolga Uzan";
	char *result  = (char *)ft_memchr(arr,'a',5);
	if(result != NULL)
		printf("Karakter adresi %p\n", result);
	printf("Manuel erişim : %p\n\n", &arr[4]);
	printf("memchr() : %p\n\n", memchr(arr,'a',5));
}

void	ft_memcmp_check()
{
	char arr1[] = "aaaba";
	char arr2[] = "aaa";
	printf("ft_memcmp : %d\n",ft_memcmp(arr1,arr2,4));
	printf("memcmp():  %d\n\n\n", memcmp(arr1,arr2,4));
}

void	ft_strnstr_check()
{
	char fullstr[]= "tolgauzan hello";
	char substr[]= "uzan";
	char *result = ft_strnstr(fullstr,substr,5);
	printf("Bulunamadı %s \n", ft_strnstr(fullstr,substr,5));
	printf("Bulundu ilk adres %p\n", ft_strnstr(fullstr,substr,9));
	printf("Aranan ilk harfin adresi %p\n", &fullstr[5]);
	printf("Bulundu ilk adres %s\n\n\n", ft_strnstr(fullstr,substr,9));
}

void	ft_strdup_check()
{
	char arr[] = "tolga";
	char *dest = ft_strdup(arr);
	if (dest)
		printf("ft_strdup();\n%s \n\n\n", dest);
	free(dest);
}

#include <stdlib.h>

void	ft_atoi_check()
{
	printf("#include \"ftlib.h\" ft_atoi(str);\n");
	printf("ft_atoi() : %d \n", ft_atoi("\t\n\v\r\f  -+2147483647"));
	printf("#include <stdlib.h> atoi(str);\n");
	printf("atoi() : %d \n", atoi("\t\n\v\r  -+2147483647"));
	printf("#include \"ftlib.h\" ft_atoi(str);\n");
	printf("ft_atoi() : %d \n", ft_atoi("\t\n\v\r\f  -2147483648"));
	printf("#include <stdlib.h> atoi(str);\n");
	printf("atoi() : %d \n", atoi("\t\n\v\r  -2147483648"));
	printf("#include \"ftlib.h\" ft_atoi(str);\n");
	printf("ft_atoi() : %d \n", ft_atoi("\t\n\v\r\f   +2147483647"));
	printf("#include <stdlib.h> atoi(str);\n");
	printf("atoi() : %d \n", atoi("\t\n\v\r\f   +2147483647"));
	printf("#include \"ftlib.h\" ft_atoi(str);\n");
	printf("ft_atoi() : %d \n", ft_atoi("\t\n\v\r\f   +21474836499"));
	printf("#include <stdlib.h> atoi(str);\n");
	printf("atoi() : %d \n\n\n", atoi("\t\n\v\r\f   +21474836499"));
}

void	ft_calloc_check()
{
	int *ptr = (int *)ft_calloc(5,sizeof(int));
	if (ptr)
	{
		printf("calloc () Bellek tahsis edildi ve başlatıldı\n");
		for(int i = 0; i < 5; i++)
		{
			printf("%d\n",ptr[i]);
		}
		free(ptr); //Bellek serbest bırakıldı
	}
	printf("\n\n\n");
}
int	main(void)
{
	char str[] = "Hello World";

	ft_isalpha_check();
	ft_isdigit_check();
	ft_isalnum_check();
	ft_isascii_check();
	ft_isprint_check();
	ft_strlen_check(str);
	ft_toupper_check();
	ft_tolower_check();
	ft_atoi_check();
	ft_memset_check();
	ft_bzero_check();
	ft_memcpy_check();
	ft_memmove_check();
	ft_strlcpy_check();
	ft_strlcat_check();
	ft_strchr_check();
	ft_strrchr_check();
	ft_strncmp_check();
	ft_memchr_check();
	ft_memcmp_check();
	ft_strnstr_check();
	ft_calloc_check();
	ft_strdup_check();
	return (0);
}
