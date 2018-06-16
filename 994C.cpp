struct Point
{
       int x;
       int y;
};

struct Rectangle
{
       Point topLeft;                       // Denotes the top-left point of the rectangle
       Point bottomRight;                   // Denotes the bottom-right point of the rectangle
};
   void RectIntersect( Rectangle R1 , Rectangle R2 )
    {
    if (  (  R1.topLeft.x  <  R2.bottomRight.x  )  &&  (   R1.bottomRight.x   >  R2.topLeft.x  )  &&
       (  R1.topLeft.y  <  R2.bottomRight.y  )  &&
         (  R1.bottomRight.y  >  R2.topLeft.y  )  )
      {
  cout<<"Intersecting"
      }
      else
      {
  cout<<"  Non - Intersecting";   
}
    }

int main(int argc, char const *argv[])
{
	RectIntersect(0,6,)
	return 0;
}