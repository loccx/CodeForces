%: %.c
	gcc $< -o $(basename $@)
	./$(basename $@) < input.in
	rm $(basename $@)
