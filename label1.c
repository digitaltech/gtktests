#include<gtk/gtk.h>
GtkWidget *label;//this is declared in global scope because it should be accessed in many functions
void button_clicked(GtkWidget *widget,gpointer data)
{
g_print("you clicked on the click me button");
gtk_label_set_text(GTK_LABEL(label),"this is a new label that is set");
}
int main(int argc, char *argv[])
{

GtkWidget *window;
GtkWidget *grid;
GtkWidget *button;
gtk_init(&argc,&argv);
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
label=gtk_label_new("labell");
button=gtk_button_new_with_label("click me");
grid=gtk_grid_new();
gtk_container_add(GTK_CONTAINER(window),grid);
gtk_grid_attach(GTK_GRID(grid),label,0,0,1,1);
gtk_grid_attach(GTK_GRID(grid),button,0,1,1,1);
g_signal_connect(G_OBJECT(button),"clicked",G_CALLBACK(button_clicked),NULL);
gtk_widget_show_all(window);
gtk_main();
return 0;
}