# Testernette - your test program for 42 projects

> ## “Honor your inner child by losing yourself in simple pleasures.” - Kim del Valle Walker

Especially in the early stages of the 42 Core Curriculum  of 'Testernette' mimics 'moulinette'

<img width="506" alt="RWG - exemplary output" src="https://user-images.githubusercontent.com/121381385/211149329-fc0f9b2a-e804-4a9d-b7dc-0c4acbfbb105.png">

1. `Git clone` the current repository.
      
        git clone https://github.com/lspohle/PRIVATE_rwg.git
2. Replace 'requested_amount' by the amount of words you wish. Run the following command to `compile` and `execute`.
      
        gcc -Wall -Werror -Wextra *.c -o executable && ./executable requested_amount && rm executable

# Opportunities presented by RWG
- You may adjust the amount of words to choose from by modifying RWG's '[library.txt](https://github.com/lspohle/PRIVATE_rwg/blob/main/library.txt)' and the global variable 'MAX_AMOUNT' declared in '[generator.h](https://github.com/lspohle/PRIVATE_rwg/blob/main/generator.h)'.
- You may use a compiler for C of your choice (clang or gcc, for instance).
