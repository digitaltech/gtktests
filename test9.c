#include<gtk/gtk.h>
int main(int argc, char *argv[])
{
GtkWidget *window;
GtkWidget *button;
GtkWidget *file;
GtkWidget *filemenu;
GtkWidget *menubar;
GtkWidget *quit;
GtkWidget *grid;
gtk_init(&argc , &argv);
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
menubar=gtk_menu_bar_new();
filemenu=gtk_menu_new();
grid=gtk_grid_new();
gtk_container_add(GTK_CONTAINER(window),grid);
file=gtk_menu_item_new_with_label("file");
quit=gtk_menu_item_new_with_label("quit");
gtk_menu_item_set_submenu(GTK_MENU_ITEM(file),filemenu);
gtk_menu_shell_append(GTK_MENU_SHELL(filemenu),quit);
gtk_menu_shell_append(GTK_MENU_SHELL(menubar),file);
gtk_grid_attach(GTK_GRID(grid),menubar,0,1,1,1);
gtk_widget_show_all(window);
gtk_main();
return 0;
}