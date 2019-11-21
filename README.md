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
+ CentOS
    ```sh
    yum install gstreamer*
    
    rpm -ivh http://download1.rpmfusion.org/free/fedora/rpmfusion-free-release-stable.noarch.rpm

    yum install gstreamer-plugins-bad gstreamer-plugins-ugly xine-lib-extras-nonfree gstreamer-ffmpeg

    yum -y install http://li.nux.ro/download/nux/dextop/el7/x86_64/nux-dextop-release-0-5.el7.nux.noarch.rpm

    yum install libdvdcss gstreamer{,1}-plugins-ugly gstreamer-plugins-bad-nonfree gstreamer1-plugins-bad-freeworld
    ```

#### Basic
+ [tutorial-1:Hello World](https://blog.csdn.net/sakulafly/article/details/19398257) 自动生成一个pipeline。
+ [tutorial-2:GStreamer concepts](https://blog.csdn.net/sakulafly/article/details/20862459) 用一个个element来手动搭建一个pipeline.
+ [tutorial-3:Dynamic pipelines](https://blog.csdn.net/sakulafly/article/details/20936067) 动态创建和销毁pipeline。
+ [tutorial-4:Time management](https://blog.csdn.net/sakulafly/article/details/20992879) 时间管理。
+ [tutorial-5:GUI toolkit integration](https://blog.csdn.net/sakulafly/article/details/21186641) 集成GUI工具。
+ [tutorial-6:Media formats and Pad Capabilities](https://blog.csdn.net/sakulafly/article/details/21299519) 媒体格式和pad的Capabilities。
+ [tutorial-7:Multithreading and Pad Availability](https://blog.csdn.net/sakulafly/article/details/21318313) 多线程和Pad的有效性。
+ [tutorial-8:Short-cutting the pipeline](https://blog.csdn.net/sakulafly/article/details/21318313) pipeline的快捷访问。
+ [tutorial-9:Media information gathering](https://blog.csdn.net/sakulafly/article/details/21399039) 收集媒体信息。
+ [tutorial-10:GStreamer tools](https://blog.csdn.net/sakulafly/article/details/21318313) 多线程和Pad的有效性。
+ [tutorial-11:Debugging tools](https://blog.csdn.net/sakulafly/article/details/21455637) 調試工具。
+ [tutorial-12:Streaming](https://blog.csdn.net/sakulafly/article/details/21611539) 流。
+ [tutorial-13:Playback speed](https://blog.csdn.net/sakulafly/article/details/21648155) 播放速度。
+ [tutorial-14:Handy elements](https://blog.csdn.net/sakulafly/article/details/21748777) 常用的element。
+ [tutorial-16:Debugging tools](https://blog.csdn.net/sakulafly/article/details/21825383) 平台相关的element。



#### 参考资料
+ [Ubuntu安装GStreamer](http://lifestyletransfer.com/how-to-install-gstreamer-on-ubuntu/)
+ [《GStreamer手册中文版》](http://vdisk.weibo.com/s/aCBK5zPhF_0pu)
+ [《GStreamer documentation》](https://gstreamer.freedesktop.org/documentation/)
+ [《Ubuntu安装gstreamer开发环境》](https://www.cnblogs.com/xiaojianliu/articles/9418398.html)
