#include<gtk/gtk.h>
int main(int argc, char *argv[])
{
GtkWidget *window;
GtkWidget *button;
GtkWidget *grid;
gtk_init(&argc,&argv);
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
button=gtk_button_new_with_label("this is a label");
grid=gtk_grid_new();
gtk_container_add(GTK_CONTAINER(window),grid);
gtk_grid_attach(GTK_GRID(grid),button,1,1,1,1);
gtk_widget_show_all(window);
gtk_main();
return 0;

}