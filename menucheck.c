#include<gtk/gtk.h>
int main(int argc, char *argv[])
{
GtkWidget *file;
GtkWidget *menubar;
GtkWidget *filemenu;
GtkWidget *window;
GtkWidget *grid;
GtkWidget *new;
gtk_init(&argc,&argv);
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
grid=gtk_grid_new();
gtk_container_add(GTK_CONTAINER(window),grid);
menubar=gtk_menu_bar_new();
filemenu=gtk_menu_new();
file=gtk_menu_item_new_with_label("file");
new=gtk_check_menu_item_new_with_label("new");//brings check to our label

gtk_menu_item_set_submenu(GTK_MENU_ITEM(file),filemenu);
gtk_menu_shell_append(GTK_MENU_SHELL(filemenu),new);
gtk_menu_shell_append(GTK_MENU_SHELL(menubar),file);
gtk_grid_attach(GTK_GRID(grid),menubar,0,1,1,1);
gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(new),TRUE);
gtk_widget_show_all(window);
gtk_main();
return 0;
}