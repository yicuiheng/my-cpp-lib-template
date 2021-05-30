## これはなに？

易 翠衡 (@yicuiheng) が C++ のプロジェクトを作るときのためのテンプレートです．
あなたが易翠衡でなくても自由に使って頂いて構いません．
改善点などあれば教えてください．

## 使い方

GNU Make を使ってビルドします。生成物は `./build` 以下に生成されます。


プロジェクト、テスト、examples をビルドしてテストを実行する:
```
$ make
```

デバッグモードでビルドする
```
$ make debug
```

リリースモードでビルドする
```
$ make release
```

生成物をクリーンする
```
$ make clean
```

テストをビルドし、実行する
```
$ make test
```

examples をビルドする
```
$ make example
```

## License

These codes are licensed under CC0.

[![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png "CC0")](http://creativecommons.org/publicdomain/zero/1.0/deed)
