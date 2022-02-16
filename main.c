/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbulbul <rbulbul@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 12:11:22 by rbulbul       #+#    #+#                 */
/*   Updated: 2022/02/14 19:22:34 by rbulbul       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
    // isalpha
    /* 
    int var1 = 'd';
	int var2 = '2';
	int var3 = '\t';
	int var4 = ' ';

	if (ft_isalpha(var1))
	{
		printf("var1 = |%c| is an alphabet\n", var1);
	}
	else
	{
		printf("var1 = |%c| is not an alphabet\n", var1);
	}

	if (ft_isalpha(var2))
	{
		printf("var2 = |%c| is an alphabet\n", var2);
	}
	else
	{
		printf("var2 = |%c| is not an alphabet\n", var2);
	}

	if (ft_isalpha(var3))
	{
		printf("var3 = |%c| is an alphabet\n", var3);
	}
	else
	{
		printf("var3 = |%c| is not an alphabet\n", var3);
	}
	if (ft_isalpha(var4))
	{
		printf("var4 = |%c| is an alphabet\n", var4);
	}
	else
	{
		printf("var4 = |%c| is not an alphabet\n", var4);
	}
    */

    // isdigit

    /* 
    int var1 = 'd';
	int var2 = '2';

	if (ft_isdigit(var1))
	{
		printf("var1 = |%c| is an digit\n", var1);
	}
	else
	{
		printf("var1 = |%c| is not an digit\n", var1);
	}

	if (ft_isdigit(var2))
	{
		printf("var2 = |%c| is an digit\n", var2);
	}
	else
	{
		printf("var2 = |%c| is not an digit\n", var2);
	}
    */
   
    // isalnum
    
    /* 
    int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( ft_isalnum(var1) ) {
      printf("var1 = |%c| is alphanumeric\n", var1 );
   } else {
      printf("var1 = |%c| is not alphanumeric\n", var1 );
   }
   
   if( ft_isalnum(var2) ) {
      printf("var2 = |%c| is alphanumeric\n", var2 );
   } else {
      printf("var2 = |%c| is not alphanumeric\n", var2 );
   }
   
   if( ft_isalnum(var3) ) {
      printf("var3 = |%c| is alphanumeric\n", var3 );
   } else {
      printf("var3 = |%c| is not alphanumeric\n", var3 );
   }
   
   if( ft_isalnum(var4) ) {
      printf("var4 = |%c| is alphanumeric\n", var4 );
   } else {
      printf("var4 = |%c| is not alphanumeric\n", var4 );
   }
   return(0);
    */

    // isascii
    /* 
    int var1 = 0x80; // «
	int var2 = '2';
	int var3 = '\t';

	if (ft_isascii(var1))
	{
		printf("var1 = |%c| is an ASCII character\n", var1);
	}
	else
	{
		printf("var1 = |%c| is not an ASCII character\n", var1);
	}

	if (ft_isascii(var2))
	{
		printf("var2 = |%c| is an ASCII character\n", var2);
	}
	else
	{
		printf("var2 = |%c| is not an ASCII character\n", var2);
	}

	if (ft_isascii(var3))
	{
		printf("var3 = |%c| is an ASCII character\n", var3);
	}
	else
	{
		printf("var3 = |%c| is not an ASCII character\n", var3);
	}
    */

    // isprint
    
	/* if (ft_isprint('~' + 1))
	{
		printf("var1 = |%c| can be printed\n");
	}
	else
	{
		printf("var1 = |%c| can't be printed\n");
	}

	if (!ft_isprint(' ' - 1))
	{
		printf("var2 = |%c| can be printed\n");
	}
	else
	{
		printf("var2 = |%c| can't be printed\n");
	}

	if (ft_isprint(' '))
	{
		printf("var3 = |%c| can be printed\n");
	}
	else
	{
		printf("var3 = |%c| can't be printed\n");
	}
	if (ft_isprint('~'))
	{
		printf("var4 = |%c| can be printed\n");
	}
	else
	{
		printf("var4 = |%c| can't be printed\n");
	}
   
 */
    // strlen
    /* 
    	printf("%zu\n", ft_strlen("Ramazan"));
    */
   
    // memset
    /*     
    char str[] = "Almost every programmer should know memset";

	puts(str);
	ft_memset(str, '*', 5);
	puts(str); 
    
    */

    // bzero
	/* 
	char str[] = "Memset everything to 0";

	puts(str);
	ft_bzero(str, 5);
	puts(str);
	*/
	
	// memcpy.c
	/* 
	const char src[60] = "This example shows the usage of memcpy() function!";
	char dest[60];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	*/

	// memmove
	/*
	char str1[50] = "I am going from Delhi to Gorakhpur";
    char str2[50] = "I am going from Delhi to Gorakhpur";
    //Use of memmove
    printf( "Function:\tmemmove with overlap\n" );
    printf( "Orignal :\t%s\n",str1);
    printf( "Source:\t\t%s\n", str1 + 5 );
    printf( "Destination:\t%s\n", str1 + 11 );
    ft_memmove( str1 + 11, str1 + 5, 29 );
    printf( "Result:\t\t%s\n", str1 );
    printf( "Length:\t\t%lu characters\n", strlen( str1 ) );
	*/

	// strlcpy
	
	
	char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,0);
    printf("Copied '%s' into '%s', length %d\n",string,buffer,r);
    r = ft_strlcpy(buffer,string,10);
    printf("Copied '%s' into '%s', length %d\n",string,buffer,r);
    r = ft_strlcpy(buffer,string,1);
    printf("Copied '%s' into '%s', length %d\n",string,buffer,r);
    r = ft_strlcpy(buffer,string,0);
    printf("Copied '%s' into '%s', length %d\n",string,buffer,r);
	
	// strlcat: string concanitation
	/* 
	char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    char buffer[16] = "This is ";


    r = ft_strlcat(buffer,last,64);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > 16 )
        puts("String truncated");
    else
        puts("String was fully copied"); */

	// toupper
	/*
	int i = 0;
	char c;
	char str[] = "Hello, Codam!";
   
	while(str[i]) {
	printf("%c",ft_toupper(str[i]));
	i++;
	*/

	// tolower
	/*
	int i = 0;
	char c;
	char str[] = "hELLO, cODAM!";
   
	while (str[i]) 
	{
		printf("%c", ft_tolower(str[i]));
		i++;
	} 
	*/

	// strchr
	
	
/* 	const char	ch = 'z'; 
	char		*p;
	char s[] = "tripouille";
	if (ft_strchr(s, 'z') == 0)
	{
		printf("Character has founded!");
	}
	else
	{
		printf("No character has founded!");
	} */
	

	// strrchr
		
/* 	char s[] = "tripouille";
	const char	ch = 'i'; 

	if (ft_strrchr(s, 't') == s)
	{
		printf("String starting from is: ");
	}
	else
	{
		printf("No character has founded!");
	} */
	

	// strlcmp
	
/* 	
char str1[15];
	char str2[15];
	int ret;

	strcpy(str1, "abcdeF");
	strcpy(str2, "abcdef");
	ret = strncmp(str1, str2, 5);
	if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else
	{
    	printf("str1 is equal to str2");
	} */

	// memchr
	/* 
	char s[] = "Aticleworld";
    char *ptr = ft_memchr(s,'c',sizeof(s));
    if (ptr != NULL)
    {
        printf ("'c' found at position %ld.\n", ptr-s+1);
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    } 
	*/
	

	// memcmp
	
/* 	
char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	int result;
	
	result = ft_memcmp(s2, s, 1);
	if( result < 0 )
	   printf( "First is less than second.\n" );
	else if( result == 0 )
	   printf( "First is equal to second.\n" );
	else
	   printf( "First is greater than second.\n" );	 */
	

	// strnstr
	/*
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "ar";
	char *ptr;
	
	ptr = ft_strnstr(largestring, smallstring, 12);
	printf("%s\n",ptr); */

	// atoi
	
	

	return(0);
}
