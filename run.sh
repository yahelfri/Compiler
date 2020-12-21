lex lex2.l
yacc yacc3.y
cc part2.c -o part2 y.tab.c -ll -Ly
./part2 <input.t