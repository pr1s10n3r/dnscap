#include <uv.h>
#include <csignal>
#include <iostream>

void term_signal_handler(uv_signal_t* handle, int signum);

int main(void)
{
  uv_loop_t* loop = uv_default_loop();

  uv_signal_t sigint;
  uv_signal_init(loop, &sigint);
  uv_signal_start(&sigint, term_signal_handler, SIGTERM);
  
  uv_run(loop, UV_RUN_DEFAULT);
  uv_loop_close(loop);
  
  return 0;
}

void term_signal_handler(uv_signal_t* handle, int signum)
{
  uv_loop_t* loop = uv_handle_get_loop(reinterpret_cast<uv_handle_t*>(handle));
  if (signum == SIGTERM) {
    std::cout << "Bye!" << std::endl;
    uv_signal_stop(handle);
    uv_stop(loop);
  }
}
