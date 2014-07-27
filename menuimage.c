#include<gtk/gtk.h>
int main(int argc, char *argv[])
{
GtkWidget *window;
GtkWidget *file;
GtkWidget *quit;
GtkWidget *new;
GtkWidget *menu;
GtkWidget *menubar;
GtkWidget *grid;
GtkWidget *filemenu;
gtk_init(&argc,&argv);
menubar=gtk_menu_bar_new();
filemenu=gtk_menu_new();
file=gtk_menu_item_new_with_label();
quit=gtk_menu_item_new_from_stock(GTK_STOCK_NEW,NULL);
new=gtk_menu_item_new_from_stock(GTK_STOCK_OPEN,NULL);
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
gtk_menu_item_set_submenu(GTK_MENU_ITEM(file),filemenu);
gtk_menu_shell_append(GTK_MENU_SHELL(filemenu),new);
gtk_menu_shell_append(GTK_MENU_SHELL(filemenu),quit);
gtk_menu_shell_append(GTK_MENU_SHELL(menubar),file);
grid=gtk_grid_new();
gtk_container_add(GTK_CONTAINER(window),grid);
gtk_grid_attach(GTK_GRID(grid),menubar,0,1,1,1);
gtk_widget_show_all(window);
gtk_main();
return 0;
}