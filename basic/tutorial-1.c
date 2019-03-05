#include <gst/gst.h>
#include <stdio.h>

// gcc tutorial-1.c -o tutorial-1 `pkg-config --cflags --libs gstreamer-1.0`

int main(int argc, char *argv[]) {
  GstElement *pipeline;
  GstBus *bus;
  GstMessage *msg;

  /* Initialize GStreamer */
  // 初始化所有内部数据结构、检查所有可用的插件、运行所有的命令行选项
  gst_init (&argc, &argv);

  /* Build the pipeline */
  //pipeline = gst_parse_launch ("playbin uri=https://www.freedesktop.org/software/gstreamer-sdk/data/media/sintel_trailer-480p.webm", NULL);
  // gst_parse_launch这个函数原本是描述一个pipeline的，但也可以很方便的用来建立一个pipeline。
  pipeline = gst_parse_launch ("playbin uri=file:///home/frank/github/gstreamer/sintel_trailer-480p.mkv", NULL);

  /* Start playing */
  // 设置pipeline为PLAYING状态才能真正开始播放
  GstStateChangeReturn rst = gst_element_set_state (pipeline, GST_STATE_PLAYING);
  printf("rst : %d\n", rst);


  /* Wait until error or EOS */
  // 在等待发生一个错误或者流已经播放结束。
  // gst_element_get_bus()会得到pipeline的总线，然后gst_bus_timed_pop_filtered()会阻塞直到你遇到一个错误或者流播放结束。
  bus = gst_element_get_bus (pipeline);
  msg = gst_bus_timed_pop_filtered (bus, GST_CLOCK_TIME_NONE, GST_MESSAGE_ERROR | GST_MESSAGE_EOS);


  printf("1111\n");

  /* Free resources */
  if (msg != NULL)
    gst_message_unref (msg);
  gst_object_unref (bus);
  gst_element_set_state (pipeline, GST_STATE_NULL);
  gst_object_unref (pipeline);
  return 0;
}
