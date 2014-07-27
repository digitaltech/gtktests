#include<gtk/gtk.h>
int main(int argc, char *argv[])
{
GtkWidget *button;
GtkWidget *window;
GtkWidget *fixed;
gtk_init(&argc,&argv);
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
button=gtk_button_new_with_label("test label");
fixed=gtk_fixed_new();
gtk_container_add(GTK_CONTAINER(window),fixed);
gtk_widget_set_size_request(button,100,100);
gtk_fixed_put(GTK_FIXED(fixed),button,50,50);
gtk_widget_show_all(window);
//gtk_widget_show(button);
gtk_main();
return 0;
}