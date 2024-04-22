#include <stdio.h>
#include <glib.h>

gboolean timer_callback(gpointer data) {
    printf("Hello, World!\n");
    return TRUE; // Returning TRUE ensures that the timer will continue to run
}

int main() {
    GMainLoop *loop;
    guint timer_id;

    loop = g_main_loop_new(NULL, FALSE);

    // Create a timer that fires every second
    timer_id = g_timeout_add_seconds(1, timer_callback, NULL);

    // Run the main loop
    g_main_loop_run(loop);

    // Cleanup
    g_source_remove(timer_id);
    g_main_loop_unref(loop);

    return 0;
}
