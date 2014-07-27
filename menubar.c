#include<gtk/gtk.h>
int main(int argc, char *argv[])
{
GtkWidget *window;
GtkWidget *grid;
GtkWidget *menubar;
GtkWidget *file;
GtkWidget *filemenu;
GtkWidget *quit;
GtkWidget *button;
gtk_init(&argc,&argv);
menubar=gtk_menu_bar_new();//this is our main menu bar

filemenu=gtk_menu_new(); //this is our one of main menu items

file=gtk_menu_item_new_with_label("file");//this item will be used as label for the drop down list of times

quit=gtk_menu_item_new_with_label("quit");

gtk_menu_item_set_submenu(GTK_MENU_ITEM(file),filemenu);

gtk_menu_shell_append(GTK_MENU(filemenu),quit);

gtk_menu_shell_append(GTK_MENU(menubar),file);

window=gtk_window_new(GTK_WINDOW_TOPLEVEL);

grid=gtk_grid_new();

button=gtk_button_new_with_label("ok tested");

gtk_container_add(GTK_CONTAINER(window),grid);

//gtk_grid_attach(GTK_GRID(grid),button,0,0,1,1);

gtk_grid_attach(GTK_GRID(grid),menubar,0,1,1,1);

gtk_widget_show_all(window);

gtk_main();

return 0;

}