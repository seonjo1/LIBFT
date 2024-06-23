# LIBFT
C에서 사용되는 표준 함수들과 유용한 함수들을 직접 구현한 정적 라이브러리
## 라이브러리 함수
**mandatory 함수**
>```
>ft_isalpha()      ft_isdigit()      ft_isalnum()     ft_isascii()
>ft_isprint()      ft_stelen()       ft_memset()      ft_bzero()
>ft_memcpy()       ft_memmove()      ft_strlcpy()     ft_strlcat()
>ft_toupper()      ft_tolower()      ft_strchr()      ft_strrchr()
>ft_strncmp()      ft_memchr()       ft_memcmp()      ft_strnstr()
>ft_atoi()         ft_calloc()       ft_strdup()      ft_substr()
>ft_substr()       ft_strjoin()      ft_strtrim()     ft_split()
>ft_itoa()         ft_strmapi()      ft_striteri()    ft_putchar_fd()
>ft_putstr_fd()    ft_putendl_fd()   ft_putnbr_fd()  
>```

**bonus 함수**
>
> - 연결리스트 관련 함수들
>```
>ft_lstnew()       ft_lstadd_front() ft_lstsize()     ft_lstlast()
>ft_lstaddback()   ft_lstdelone()    ft_lstclear()    ft_lstiter()
>ft_lstmap()
>```

## 사용법

```
make
```
- mandatory 함수들을 사용할 수 있는 정적 라이브러리 libft.a 생성

```
make bonus
```
- mandatory 함수 + bonus 함수들을 사용할 수 있는 정적 라이브러리 libft.a 생성

```
make clean
```
- make로 인해 만들어진 .o 파일 삭제

```
make fclean
```
- make clean + libft.a 삭제

```
make re
```
- make fclean + make

--- 

<img width="223" alt="스크린샷 2024-06-23 오후 8 41 19" src="https://github.com/seonjo1/LIBFT/assets/127729846/f7fcb1af-d4a0-47cd-a6b8-1d158f47854a">
