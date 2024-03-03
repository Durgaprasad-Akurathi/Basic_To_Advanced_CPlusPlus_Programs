#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool IsBalanced(char *s)
{
    char st[100];
    int top=-1;
    for(int i=0; s[i]; i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        st[++top]=s[i];
        else if(s[i]==')' ||  s[i]=='}' || s[i]==']')
        {
            if(top==-1)
            return false;
            else if(s[i]==')' && st[top]=='(')
            top--;
            else if(s[i]=='}' && st[top]=='{')
            top--;
            else if(s[i]==']' && st[top]=='[')
            top--;
            else return false;
        }
    }
    return top==-1;
}

int main()
{
    char ch[100];
    scanf("%s", ch);
    if(IsBalanced(ch))
    printf("Brackets are Balanced Annaww....\n");
    else printf("Brackets are Not Balanced Annaww....\n");
}
