#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct book Book;
struct book
{
    char *name;
    int price;
    Book *next;
};

int num_books = 0;

void menu()
{
    printf("0) Exit Progrm.\n\n");
    printf("1) Clear Screen.\n\n");
    printf("2) Print all books\n\n");
    printf("3) Push a book .\n\n");
    printf("4) Pop a book .\n\n");
    printf("5) Print number of book .\n\n");
    printf("6) Print top of stck .\n\n");
    printf("7) Print end of stck .\n\n");
}

// Top of stack -> head

void exit_prog()
{
    exit(EXIT_SUCCESS);
}

void clrscrn()
{
    system("clear");
}

void print(Book **top)
{
    Book *current = *top;

    while (current != NULL)
    {
        printf("%s, %d\n", current->name, current->price);
        current = current->next;
    }
}

void push(Book **top)
{

    num_books++;

    char *name = malloc(sizeof(char) * 1024);
    int price;

    printf("Enter the Name and the Price of the book : ");
    scanf("%s%d", name, &price);

    Book *new_book = calloc(1, sizeof(Book));
    new_book->name = malloc(sizeof(strlen(name)) + 1);
    new_book->price = price;
    strcpy(new_book->name, name);

    // actual push (at top)
    new_book->next = *top;
    *top = new_book;
}

void pop(Book **top)
{
    if(num_books == 0){
        printf("No Book to pop !\n");
        return;
    }
    num_books--;

    // actual pop (at top)
    Book *temp = *top;
    *top = (*top)->next;
    temp->next = NULL;
    free(temp);
}

void print_top(Book **top)
{
    if(num_books == 0){
        printf("No Book to print !\n");
        return;
    }
    printf("%s, %d\n", (*top)->name, (*top)->price);
}

void print_end(Book **top)
{
    if(num_books == 0){
        printf("No Book to print !\n");
        return;
    }

    Book *current = *top;
    Book *prev = NULL;

    while (current != NULL)
    {
        prev = current;
        current = current->next;
    }

    // prev has the last node on the stack
    printf("%s, %d\n", prev->name, prev->price);
}

void number_books()
{
    printf("Total number of books : %d.\n", num_books);
}

int main()
{

    Book *top = NULL;
    int ch;
    menu();

    while (1)
    {
        printf("\nEnter a choice.\n");

        scanf("%d", &ch);

        printf("\n");

        switch (ch)
        {
        case 0:
            exit_prog();
            break;
        case 1:
            clrscrn();
            menu();
            break;
        case 2:
            print(&top);
            break;
        case 3:
            push(&top);
            break;
        case 4:
            pop(&top);
            break;
        case 5:
            number_books();
            break;
        case 6:
            print_top(&top);
            break;
        case 7:
            print_end(&top);
            break;
        default:
            printf("ERROR : Choice not available !\n");
        }
    }
}

// Algorithm Preorder(tree)
//    1. Visit the root.
//    2. Traverse the left subtree, i.e., call Preorder(left-subtree)
//    3. Traverse the right subtree, i.e., call Preorder(right-subtree) 
// 50, 30, 20, 17, 25, 35, 32, 38, 70, 60, 56, 62, 78, 72

// Algorithm Inorder(tree)
//    1. Traverse the left subtree, i.e., call Inorder(left-subtree)
//    2. Visit the root.
//    3. Traverse the right subtree, i.e., call Inorder(right-subtree)
// 17 20 25 30 32 35 38 50 56 60 62 70 72 78

// Post Order :
// 17 25 20 32 38 35 30 56 62 60 72 78 70 50


//20
//20, 30
//20, 30, 5
// 20, 30, 5, 50
// 20, 30, 5
//20, 30, 5, 8
// 20, 30, 5, 8, 10
//20, 30, 5, 8
// 8
// 20, 30, 5, 8