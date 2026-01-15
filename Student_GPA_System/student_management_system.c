#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

// Structure to hold student info
typedef struct {
    char name[50];
    char father_name[50];
    char rollno[20];
    char program[50];
    char semester[20];
    float gpa;
} Student;

Student students[MAX_STUDENTS];
int student_count = 0;

// Widgets for entry fields
GtkWidget *entry_name, *entry_father_name, *entry_roll, *entry_program, *entry_semester, *entry_gpa;
GtkWidget *textview;

// Function to add student
void add_student(GtkWidget *widget, gpointer data) {
    if (student_count >= MAX_STUDENTS) {
        g_print("Max students reached!\n");
        return;
    }

    const char *name = gtk_entry_get_text(GTK_ENTRY(entry_name));
    const char *father_name = gtk_entry_get_text(GTK_ENTRY(entry_father_name));
    const char *roll = gtk_entry_get_text(GTK_ENTRY(entry_roll));
    const char *program = gtk_entry_get_text(GTK_ENTRY(entry_program));
    const char *semester = gtk_entry_get_text(GTK_ENTRY(entry_semester));
    const char *gpa_str = gtk_entry_get_text(GTK_ENTRY(entry_gpa));
    float gpa = atof(gpa_str);

    strcpy(students[student_count].name, name);
    strcpy(students[student_count].father_name, father_name);
    strcpy(students[student_count].rollno, roll);
    strcpy(students[student_count].program, program);
    strcpy(students[student_count].semester, semester);
    students[student_count].gpa = gpa;
    student_count++;

    // Show in TextView
    GtkTextBuffer *buffer = gtk_text_view_get_buffer(GTK_TEXT_VIEW(textview));
    char display[2000] = "";  // Increased size to accommodate more data
    for (int i = 0; i < student_count; i++) {
        char line[300];
        sprintf(line, "Name: %s, Father Name: %s, Roll: %s, Program: %s, Semester: %s, GPA: %.2f\n",
                students[i].name, students[i].father_name, students[i].rollno, students[i].program, students[i].semester, students[i].gpa);
        strcat(display, line);
    }
    gtk_text_buffer_set_text(buffer, display, -1);
}

int main(int argc, char *argv[]) {
    GtkWidget *window, *grid, *button;
    GtkWidget *label_name, *label_father_name, *label_roll, *label_program, *label_semester, *label_gpa;

    gtk_init(&argc, &argv);

    // Window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "FUUAST Student GPA Record System");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_default_size(GTK_WINDOW(window), 600, 400);  // Increased size for more fields

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Grid layout
    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Labels and entries
    label_name = gtk_label_new("Name:");
    entry_name = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), label_name, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry_name, 1, 0, 2, 1);

    label_father_name = gtk_label_new("Father Name:");
    entry_father_name = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), label_father_name, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry_father_name, 1, 1, 2, 1);

    label_roll = gtk_label_new("Roll No:");
    entry_roll = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), label_roll, 0, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry_roll, 1, 2, 2, 1);

    label_program = gtk_label_new("Program:");
    entry_program = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), label_program, 0, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry_program, 1, 3, 2, 1);

    label_semester = gtk_label_new("Semester:");
    entry_semester = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), label_semester, 0, 4, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry_semester, 1, 4, 2, 1);

    label_gpa = gtk_label_new("GPA:");
    entry_gpa = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), label_gpa, 0, 5, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), entry_gpa, 1, 5, 2, 1);

    // Button
    button = gtk_button_new_with_label("Add Student");
    g_signal_connect(button, "clicked", G_CALLBACK(add_student), NULL);
    gtk_grid_attach(GTK_GRID(grid), button, 0, 6, 3, 1);

    // TextView for displaying students
    textview = gtk_text_view_new();
    gtk_text_view_set_editable(GTK_TEXT_VIEW(textview), FALSE);
    gtk_grid_attach(GTK_GRID(grid), textview, 0, 7, 3, 1);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}