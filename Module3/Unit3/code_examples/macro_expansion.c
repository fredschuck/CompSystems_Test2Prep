
#define ABSDIFF(a,b) \
((a)>(b) ? (a)-(b) : (b)-(a))

int main()
{
   int x;

   x = ABSDIFF(5, 35);

   x = ABSDIFF(70, ABSDIFF(5, 35));

   return 0;
}
