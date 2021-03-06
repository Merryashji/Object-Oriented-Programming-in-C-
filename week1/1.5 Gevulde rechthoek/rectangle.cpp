// example:
// definition of the functions of a rectangle object

#include "rectangle.hpp"

rectangle::rectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y ):
   w( w ),
   left(   w, start_x, start_y, start_x,   end_y + 1 ),
   right(  w, end_x,   start_y, end_x,     end_y + 1 ),
   top(    w, start_x, start_y, end_x + 1, start_y ),
   bottom( w, start_x, end_y,   end_x + 1, end_y )
{}


void rectangle::print(){
   left.print();
   right.print();
   top.print();
   bottom.print();
}

void filled_rectangle::print() {
    for(  int i = y_start ; i < end_y + 1  ; ++i){
        for(  int j = x_start ; j < end_x + 1  ; ++j){
            w.write(hwlib::xy(i,j),hwlib::color(0 , 0 , 0 ));
        }
    }
    w.flush();
}
