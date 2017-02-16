# czCrashAvoide
This demo can prevent the collapse of arrays and dictionaries caused by errors

//将文件拖入工程中，在AppDelegate的didFinishLaunchingWithOptions方法中调用：[CZCrashAvoid crashAvoidBecomeEffective]
//当数组和字典出现错误操作的时候，控制台会打印出崩溃信息和崩溃发生的控制器，方便定位.
//后续其他数据类型的防崩溃处理会陆续加上.

Drag the file into the project, in the AppDelegate.m find method 'didFinishLaunchingWithOptions' and add code '[CZCrashAvoid crashAvoidBecomeEffective]' inside
When the array and dictionary error operation, the console will print out the crash information and the crash occurred in the controller, easy to locate.
Follow the other data types of anti-crash processing will be added.
