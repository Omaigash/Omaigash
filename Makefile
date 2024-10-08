all: menu.o index_first_even.o index_last_odd.o sum_between_even_odd.o sum_before_even_and_after_odd.o
	gcc menu.o index_first_even.o index_last_odd.o sum_between_even_odd.o sum_before_even_and_after_odd.o -o menu

menu: index_first_even.h index_last_odd.h sum_between_even_odd.h sum_before_even_and_after_odd.h
	gcc -c menu.c

index_first_even: index_first_even.h
	gcc -c index_first_even.c

index_last_odd: index_last_odd.h
	gcc -c index_last_odd.c

sum_between_even_odd: sum_between_even_odd.h
	gcc -c sum_between_even_odd.c

sum_before_even_and_after_odd: sum_before_even_and_after_odd.h
	gcc -c sum_before_even_and_after_odd.c
