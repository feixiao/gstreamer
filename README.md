# gstreamer
gstreamer学习以及资料整理




#### 参考资料

+ [《GStreamer手册中文版》](http://vdisk.weibo.com/s/aCBK5zPhF_0pu)
+ [《GStreamer documentation》](https://gstreamer.freedesktop.org/documentation/)

#### [示例代码](https://gstreamer.freedesktop.org/documentation/tutorials/basic/index.html)
##### 环境准备
```shell
OSX

#安装GStreamer
https://gstreamer.freedesktop.org/data/pkg/osx/

#配置搜索路径
export PKG_CONFIG_PATH=/Library/Frameworks/GStreamer.framework/Versions/Current/lib/pkgconfig/

# 安装XQuartz
https://www.xquartz.org/
brew install gtk+3

export PKG_CONFIG_PATH=/opt/X11/lib/pkgconfig/:${PKG_CONFIG_PATH}

```

##### Basic
+ [tutorial-1 : Hello World](https://blog.csdn.net/sakulafly/article/details/19398257) 自动生成一个pipeline。
+ [tutorial-2 : GStreamer concepts](https://blog.csdn.net/sakulafly/article/details/20862459) 用一个个element来手动搭建一个pipeline.
+ [tutorial-3 : Dynamic pipelines](https://blog.csdn.net/sakulafly/article/details/20936067) 动态创建和销毁pipeline。
+ [tutorial-4 : Time management](https://blog.csdn.net/sakulafly/article/details/20992879) 时间管理。

