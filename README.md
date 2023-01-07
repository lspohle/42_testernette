# Testernette - your test program for projects at 42

> ## “In school, you're taught a lesson and then given a test. In life, you're given a test that teaches you a lesson.” - Tom Bodett

In the early stages of the 42 core curriculum, we must submit our projects, complete three evaluations with our peers, and pass `Moulinette`. We all know from experience how strict `Moulinette` can be. `Testernette` presents you therefore the opportunity to test your project by yourself before finally submitting it. Be cautioues, `Testernette` only tests your code if you passed `Norminette`.

1. Git clone the current repository into the directory in which your project is stored.


       git clone https://github.com/lspohle/42_testernette.git
2. Go into the appropraite directory of testernette.
 
      | Your project  | Testernette's directory   |
      |:-------------:|:-------------------------:|
      | Libft         |[testernette_libft](https://github.com/lspohle/42_testernette/tree/main/testernette_libft)   |
      | Printf        |[testernette_printf](https://github.com/lspohle/42_testernette/tree/main/testernette_printf) | 
3. Enter the following command in order to create an alias for `Testernette`. You only need to do it once.

       bash testernette.sh
   If you prefer not having an alias for `Testernette`, just enter the following command in the appropriate directory to run testernette.

         make -s re
4. Run `Testernette` by using the alias you created. Keep in mind that you must be in the aforementioned appropraite directory.

       testernette

https://user-images.githubusercontent.com/121381385/211037598-bea120d8-e6b7-43d0-b782-6eae7dfd2847.mov

# Opportunities presented by `Testernette`
- You may easily modify the tests of `Testernette` by adjusting the code of the tester functions.
- You may add the possibility to refer to the functions you would like to test while using [testernette_libft](https://github.com/lspohle/42_testernette/tree/main/testernette_libft). Go into the [main.c](https://github.com/lspohle/42_testernette/blob/main/testernette_libft/main.c) and adjust the comments.
