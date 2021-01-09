lex lex2.l
yacc yacc4.y
cc p.c part3.c -o p y.tab.c -w -ll -Ly
./p <input.t 