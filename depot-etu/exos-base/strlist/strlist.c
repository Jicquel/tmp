#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct letter
{
    char val;
    struct letter *suiv;
};

struct string
{
    struct letter *first;
    struct letter *last;
    size_t len;
};

struct string *string_create(const char *word)
{
    size_t word_len = strlen(word);
    if (word_len == 0) {
        return NULL;
    }

    struct string *str = calloc(1, sizeof(struct string));
    struct letter **cur = &str->first;

    for (size_t i = 0; i < word_len; i++) {
        *cur = calloc(1, sizeof(struct letter));
        (*cur)->val = word[i];
        str->len++;
        str->last = *cur;
        cur = &(*cur)->suiv;
    }

    return str;
}

void string_destroy(struct string *str)
{
    struct letter *cur = str->first;
    struct letter *next = NULL;
    while (cur != NULL) {
        next = cur->suiv;
        free(cur);
        cur = next;
    }
    free(str);
}

void string_append(struct string *first, struct string *second)
{
    first->last->suiv = second->first;
    first->last = second->last;
    first->len += second->len;
    second->first = second->last = NULL;
    second->len = 0;
}

void string_print(struct string *str)
{
    if (str == NULL) {
        return;
    }

    struct letter *cur = str->first;
    while (cur != NULL) {
        printf("%c", cur->val);
        cur = cur->suiv;
    }
    printf("\n");
}

int main(void)
{
    /* Chaines de caracteres constantes. */
    const char *hello = "Hello ";
    const char *world = "world!";
    size_t hello_len = strlen(hello);
    size_t world_len = strlen(world);

    /* Les memes, mais version "string". */
    struct string *str_hello = string_create(hello);
    struct string *str_world = string_create(world);

    /* On concatene les deux chaines. */
    char hello_world_char[hello_len + world_len];
    char world_char[world_len];
    strncpy(hello_world_char, hello, hello_len);
    strncpy(world_char, world, world_len);
    strncat(hello_world_char, world_char, world_len);
    printf("%s\n", hello_world_char);

    /* On concatene les deux "string". */
    string_append(str_hello, str_world);
    string_print(str_hello);
    string_destroy(str_hello);
    string_destroy(str_world);

    return EXIT_SUCCESS;
}
