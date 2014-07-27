#include<gtk/gtk.h>
int main(int argc,char *argv[])
{

GtkWidget *window;
GtkWidget  *fixed;
GtkWidget *button1;
GtkWidget *button2;
GtkWidget *textbox1;
GtkWidget *grid;

gtk_init(&argc,&argv);
grid=gtk_grid_new();
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
fixed=gtk_fixed_new();
button1=gtk_button_new_with_label("1");
button2=gtk_button_new_with_label("2");
textbox1=gtk_entry_new();
gtk_container_add(GTK_CONTAINER(window),fixed);
gtk_fixed_put(GTK_FIXED(fixed),button1,50,50);
gtk_fixed_put(GTK_FIXED(fixed),button2,100,100);
gtk_fixed_put(GTK_FIXED(fixed),textbox1,150,100);
gtk_widget_show_all(window);
gtk_main();
return 0;
}