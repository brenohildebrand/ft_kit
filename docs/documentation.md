# Introduction

Hey there! How you doing? I've created this kit to help me on my journey at 42. I really dislike solving problems in a language like C and I generally think that programming is just moving data around and doing some operations on them. So... I've created a bunch of modules and each of them represents some kind of data.

This is what a module called **data** looks like:

```c
#ifndef DATA_H
# define DATA_H

typedef struct s_data	*t_data;

struct s_data {
	// ...
};

t_data	data_create(void);
void	data_destroy(t_data data);

#endif
```

All modules contain a struct representing the data and a typedef which is a pointer to that struct. Then after that they contain a bunch of functions that operates on that data. The create and destroy functions will

