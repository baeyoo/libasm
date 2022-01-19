global	_ft_strdup
extern	_malloc
extern	_ft_strlen
extern	___error
section	.text

_ft_strdup:
			mov rbx, 0
			mov rax, 0
ft_strlen:
			call _ft_strlen
			inc rax
			push rdi
			mov rdi, rax
			call _malloc 					; rax = s2
			pop rdi
			cmp rax, 0 						; rdi = s1
			je error
while:
			mov dl, byte [rdi + rbx]
			mov byte [rax + rbx], dl
			inc rbx	
			cmp dl, 0
			je return
			jmp while
error:
			ret
return:
			mov byte [rax + rbx], 0
			ret