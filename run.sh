lex lex2.l
yacc yacc4.y
cc p.c -o p y.tab.c -ll -Ly
./p <input.t 