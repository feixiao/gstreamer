# gstreamer
gstreamer学习以及资料整理






#### [示例代码](https://gstreamer.freedesktop.org/documentation/tutorials/basic/index.html)
##### 环境准备
+ OSX
    ```shell
    #安装GStreamer
    https://gstreamer.freedesktop.org/data/pkg/osx/

    #配置搜索路径
    export PKG_CONFIG_PATH=/Library/Frameworks/GStreamer.framework/Versions/Current/lib/pkgconfig/

    # 安装XQuartz
    https://www.xquartz.org/
    brew install gtk+3

    export PKG_CONFIG_PATH=/opt/X11/lib/pkgconfig/:${PKG_CONFIG_PATH}
    ```
+ Ubuntu
    ```sh
    # 安装GStreamer
    sudo apt-get install libgstreamer1.0-0 gstreamer1.0-plugins-base gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly gstreamer1.0-libav gstreamer1.0-doc gstreamer1.0-tools
    sudo apt-get install libgstreamer-plugins-base1.0-dev

    # 安装GTK
    sudo apt-get install libgtk-3-dev 

    ```


#### Basic
+ [tutorial-1 : Hello World](https://blog.csdn.net/sakulafly/article/details/19398257) 自动生成一个pipeline。
+ [tutorial-2 : GStreamer concepts](https://blog.csdn.net/sakulafly/article/details/20862459) 用一个个element来手动搭建一个pipeline.
+ [tutorial-3 : Dynamic pipelines](https://blog.csdn.net/sakulafly/article/details/20936067) 动态创建和销毁pipeline。
+ [tutorial-4 : Time management](https://blog.csdn.net/sakulafly/article/details/20992879) 时间管理。


#### 参考资料
+ [《GStreamer手册中文版》](http://vdisk.weibo.com/s/aCBK5zPhF_0pu)
+ [《GStreamer documentation》](https://gstreamer.freedesktop.org/documentation/)
+ [《Ubuntu安装gstreamer开发环境》](https://www.cnblogs.com/xiaojianliu/articles/9418398.html)