global	_ft_strcpy
section .text

_ft_strcpy:
			mov rax, 0
while:
			cmp byte [rsi + rax], 0
			je return
comparison:
			mov dl, byte [rsi + rax]		;temp = src[0 + i]
			mov byte [rdi + rax], dl
			inc rax
			jmp while
return:
			mov byte [rdi + rax], 0
			mov rax, rdi
			ret