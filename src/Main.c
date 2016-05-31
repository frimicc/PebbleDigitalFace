#include <pebble.h>

static Window *s_main_window;

static void main_window_load(Window *window) {
  s_main_window = window_create();
  window_set_window_handlers(s_main_window, (WindowHandlers){
    .load = main_window_load,
    .unload = main_window_unload
  });
  
}

static void main_window_unload(Window *window) {
  
}

static void init() {
  
}

static void deinit() {
  
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}