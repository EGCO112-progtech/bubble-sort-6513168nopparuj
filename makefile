compile: main.c 
	 gcc  main.c -o insertion

runSelection: selection
	  ./selection

run: insertion
	 ./insertion


clean: insertion
	 rm insertion
