void reverse_dig(int &a,int &b)
{
    //Add your code here.
    int rev_a = 0;
    while(a>0)
    {
        rev_a=rev_a*10+a%10;
        a=a/10;
    }
    
    a=rev_a;
    
    int rev_b = 0;
    while(b>0)
    {
        rev_b=rev_b*10+b%10;
        b=b/10;
        
    }
    b=rev_b;
}
void swap(int &a,int &b)
{
    //Add your code here.
    int c;
    c=a;
    a=b;
    b=c;
}
