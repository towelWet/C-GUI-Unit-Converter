#include <gtk/gtk.h>
#include "unit_converter.h"

typedef struct {
    GtkWidget *entry;
    GtkWidget *result_label;
    GtkWidget *combo_box;
} UserData;

void convert(GtkWidget *widget, UserData *data) {
    const char *entry_text = gtk_entry_get_text(GTK_ENTRY(data->entry));
    double value = atof(entry_text);
    double result = 0;
    int index = gtk_combo_box_get_active(GTK_COMBO_BOX(data->combo_box));

    switch (index) {
        case 0: // C to F
            result = celsius_to_fahrenheit(value);
            gtk_label_set_text(GTK_LABEL(data->result_label), g_strdup_printf("%.2f Fahrenheit", result));
            break;
        case 1: // F to C
            result = fahrenheit_to_celsius(value);
            gtk_label_set_text(GTK_LABEL(data->result_label), g_strdup_printf("%.2f Celsius", result));
            break;
        case 2: // KG to LBS
            result = kg_to_lbs(value);
            gtk_label_set_text(GTK_LABEL(data->result_label), g_strdup_printf("%.2f Pounds", result));
            break;
        case 3: // LBS to KG
            result = lbs_to_kg(value);
            gtk_label_set_text(GTK_LABEL(data->result_label), g_strdup_printf("%.2f Kilograms", result));
            break;
    }
}

void setup_combo_box(GtkWidget *combo_box) {
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_box), "Convert Celsius to Fahrenheit");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_box), "Convert Fahrenheit to Celsius");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_box), "Convert Kilograms to Pounds");
    gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT(combo_box), "Convert Pounds to Kilograms");
    gtk_combo_box_set_active(GTK_COMBO_BOX(combo_box), 0);  // Set the default option
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Unit Converter");
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    GtkWidget *entry = gtk_entry_new();
    GtkWidget *convert_button = gtk_button_new_with_label("Convert");
    GtkWidget *result_label = gtk_label_new("Result");
    GtkWidget *combo_box = gtk_combo_box_text_new();

    setup_combo_box(combo_box);

    UserData data = {entry, result_label, combo_box};

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    g_signal_connect(convert_button, "clicked", G_CALLBACK(convert), &data);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_box_pack_start(GTK_BOX(vbox), combo_box, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), entry, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), convert_button, FALSE, FALSE, 0);
    gtk_box_pack_start(GTK_BOX(vbox), result_label, FALSE, FALSE, 0);

    gtk_container_add(GTK_CONTAINER(window), vbox);
    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}
