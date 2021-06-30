#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    print_str("""                ###\n               #   ###\n        ###  #     #\n       #    ##     #\n      #           ##\n       ####         ###\n         ###         #\n        #   ####     #\n       #       ######\n      #       #\n     #       #\n    #       #\n   #       #\n   #      #\n    #    #\n     ####\n");
    print_str("\n\n    Welcome to welkOS\n");

    int i = 0;
    int j = 0;
    while(i < 1000000000){
        while(j < 10000000){
            j++;
        }
        i++;
    }
    print_str("\n\n    BITE !! :D");

}