CODE
PROC
 p1 
 (ARGS 
  (  INTEGER     a1      a2   )
   (  BOOLEAN     b   )
 (BODY
	         (WHILE
   (   (==   a1    a2 )   )
   (BLOCK
                       (=     a1      15 
)        (=     a2      (*     a1      3 )
)        (=    b     (<     a1      a2 )
)       )
)  )
)
)
)
