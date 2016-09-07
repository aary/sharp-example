`sharp-example`
---------------

This library contains a simple project that uses
[`sharp`](https://github.com/aary/sharp) and builds with buck.  To run the
example first install [Buck](https://github.com/facebook/buck) from the latest
`HEAD` commit with Homebrew

``` shell
brew update
brew install --HEAD facebook/fb/buck
```

then run the following from the root of this project folder

```
git submodule update --init --recursive
buck run example
```
