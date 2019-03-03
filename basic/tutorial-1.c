#include <gst/gst.h>
#include <stdio.h>

// gcc tutorial-1.c -o tutorial-1 `pkg-config --cflags --libs gstreamer-1.0`

int main(int argc, char *argv[]) {
  GstElement *pipeline;
  GstBus *bus;
  GstMessage *msg;

  /* Initialize GStreamer */
  gst_init (&argc, &argv);

  /* Build the pipeline */
  //pipeline = gst_parse_launch ("playbin uri=https://www.freedesktop.org/software/gstreamer-sdk/data/media/sintel_trailer-480p.webm", NULL);
  pipeline = gst_parse_launch ("playbin uri=file:///Users/frank/workspace/gstreamer/sintel_trailer-480p.mkv", NULL);

  /* Start playing */
  GstStateChangeReturn rst = gst_element_set_state (pipeline, GST_STATE_PLAYING);
  printf("rst : %d\n", rst);


  /* Wait until error or EOS */
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
