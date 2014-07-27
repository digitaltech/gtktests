#include<gtk/gtk.h>
#include<stdio.h> //we can use the standard c library in our gtk programs
void button1_click(GtkWidget *event,gpointer data)
{
printf("you have clicked the button1");
}
int main(int argc, char *argv[])
{
printf("welcome to our gtk program");
GtkWidget *window;
GtkWidget *button1;
GtkWidget *button2;
GtkWidget *textbox1;
GtkWidget *grid;
gtk_init(&argc,&argv);
window=gtk_window_new(GTK_WINDOW_TOPLEVEL);

button1=gtk_button_new_with_label("1");
gtk_widget_set_size_request(button1,50,50);

button2=gtk_button_new_with_label("2");//creating a button with a label
gtk_widget_set_size_request(button2,50,50);
g_signal_connect(button1,"clicked",G_CALLBACK(button1_click),NULL);
textbox1=gtk_entry_new(); //creating a textbox
grid=gtk_grid_new();
gtk_container_add(GTK_CONTAINER(window),grid); //adding the grid container to the window other containers are depricated and grid layout is the latest one
gtk_grid_attach(GTK_GRID(grid),button1,0,0,1,1);//the first 2 zeros means place the button in (0,0) cell

gtk_grid_attach(GTK_GRID(grid),button2,0,1,1,1);//this button will be placed at the cell (0,1)
gtk_widget_show_all(window);
gtk_main();

}