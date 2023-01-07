# Testernette - your test program for projects at 42

> ## “In school, you're taught a lesson and then given a test. In life, you're given a test that teaches you a lesson.” - Tom Bodett

In the early stages of the 42 core curriculum, we must submit our projects, complete three evaluations with our peers, and pass `Moulinette`. We all know from experience how strict `Moulinette` can be. `Testernette` presents you therefore the opportunity to test your project by yourself before finally submitting it. Be cautioues, `Testernette` only tests your code if you passed `Norminette`.

<img width="506" alt="RWG - exemplary output" src="https://user-images.githubusercontent.com/121381385/211149329-fc0f9b2a-e804-4a9d-b7dc-0c4acbfbb105.png">

1. `Git clone` the current repository.
      
        git clone https://github.com/lspohle/PRIVATE_rwg.git
2. Replace 'requested_amount' by the amount of words you wish. Run the following command to `compile` and `execute`.
      
        gcc -Wall -Werror -Wextra *.c -o executable && ./executable requested_amount && rm executable

# Opportunities presented by RWG
- You may adjust the amount of words to choose from by modifying RWG's '[library.txt](https://github.com/lspohle/PRIVATE_rwg/blob/main/library.txt)' and the global variable 'MAX_AMOUNT' declared in '[generator.h](https://github.com/lspohle/PRIVATE_rwg/blob/main/generator.h)'.
- You may use a compiler for C of your choice (clang or gcc, for instance).
