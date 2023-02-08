# stdio.h はどこにあるの？

```sh
gcc -v hello.c
```

こちらを実行すると、次のような出力が得られる。これをみると、`stdio.h` がどのパスを探索してインクルードしているかがわかる。

```txt
#include "..." search starts here:
#include <...> search starts here:
 /usr/local/include
 /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/14.0.0/include
 /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include
 /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include
 /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/System/Library/Frameworks (framework directory)
```

`#include "..."` で書くと、そのソースと同じディレクトリを最優先にヘッダファイルを探索するらしい。

自分で作ったヘッダファイルを読み込むためには、`#include /absolute/path/to/some.h` のように絶対パスをかくといいが、これは環境に依存してしまうためよろしくない。
`gcc -I /absolute/path/to/ hello.c` で実行すると、`#include <some.h>` のように書くことができる。

ヘッダファイルをどのように記載するかは、ch20で扱うことにする。
