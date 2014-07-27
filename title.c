#include<gtk/gtk.h>
int main(int argc,char *argv[])
{
GtkWidget *window;
GtkWidget *button;
GtkWidget *fixed;
gtk_init(&argc,&argv);

window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
gtk_window_set_title(GTK_WINDOW(window),"this is the title of the window");//this text will appear on the title bar
gtk_window_set_default_size(GTK_WINDOW(window),500,500);
gtk_window_set_position(GTK_WINDOW(window),GTK_WIN_POS_CENTER);//our main window will appear at the center of the screen
//gtk_container_set_border_width(GTK_CONTAINER(window),1000); it increases the with of our application
button=gtk_button_new_with_label("this button");
gtk_widget_set_size_request(button, 100, 20);
fixed=gtk_fixed_new();
gtk_fixed_put(GTK_FIXED(fixed),button,50,50);
//gtk_container_add(GTK_CONTAINER(window),button); //our window will contain the button so it is the container of all buttons and other stuffs

gtk_widget_show_all(window); //to show the main window 
//gtk_widget_show(button);//to show the button
gtk_main();
return 0;
}