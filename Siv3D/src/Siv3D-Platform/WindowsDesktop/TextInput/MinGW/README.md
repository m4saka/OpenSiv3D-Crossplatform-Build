# MinGW Workaround for Text Services Framework API

## 概要

Text Services Framework APIは主に`msctf.h`で提供されている。MinGW/Wineでもこのヘッダファイルを提供している。

しかしながら、`ITfCandidateListUIElement`, `ITfReadingInformationUIElement` クラスが存在していない。またいくつかのマクロも欠けている。そこでオリジナルのヘッダファイルを改変する必要がある。

MinGW/Wineではこのヘッダーを`msctf.idl`というIDL言語で書かれたファイルから自動生成している。そこでこのファイルに対して変更を加えることで目的を達成する。

つまりこのレポジトリには次のものが含まれる。

- `msctf.idl.diff`: `msctf.idl`に改変を加えたパッチ
- `msctf.h`: MSYS2 MinGW64環境で`msctf.idl.diff`を用いて生成されたヘッダファイル

## 必要なもの

以下MSYS2 MinGW64環境について言及する。

IDL言語で書かれたファイルからヘッダファイルを生成するには`widl`コマンドを用いる。このコマンドは[次のようにして入手できる](https://packages.msys2.org/package/mingw-w64-x86_64-tools)。

```sh
$pacman -S mingw-w64-x86_64-tools-git
```

## ヘッダーファイルの再生成

すでに改変された`msctf.idl`から生成された`msctf.h`が含まれているため、自力で生成する必要はないが、再生成する必要が出たときの方法を示す。

問題の`msctf.idl`はMSYS2環境では`/mingw64/x86_64-w64-mingw32/include/msctf.idl`に確認できる。これをコピーしてパッチを当て、`widl`コマンドでコンパイルすれば良い。

そういうわけでこの作業を行うシェルスクリプトが`generate_headers_from_idls.sh`である。これを実行するだけで再生成される。

なおMSYS2 MinGW64ではない環境ではおそらく動かない。
