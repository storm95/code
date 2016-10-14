%{
int count;
void noise();
%}

%%
fly        { count++; noise(); printf("count : %d\n",count); }
dog        { printf("Woof!\n"); }
man        { printf("Hello world!\n"); }
%%
void noise()
{
         printf("Bzzzz!\n");
}
