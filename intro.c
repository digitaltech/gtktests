#include<gtk/gtk.h>
int main(int argc, char *argv[])
{
GtkWidget *window;
GtkWidget *button;
GtkWidget *fixed;
gtk_init(&argc,&argv);
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
fixed=gtk_fixed_new(); //here we are using fixed view to position the elements inside it.It is a kind of container that is invisible.It is a kind of layout.This layout is deprecated
gtk_window_set_title(GTK_WINDOW(window),"this is the title of the window");
gtk_container_add(GTK_CONTAINER(window),fixed);//we are adding this invisible container to the window.We normally don't used fixed layout all the time

button=gtk_button_new_with_label("this is a ");
gtk_fixed_put(GTK_FIXED(fixed),button,00,100);//gtk_fixed_put is used to position the element inside the fixed container
gtk_widget_show_all(window);//shows all the elements inside main window
gtk_main();
return 0;

}