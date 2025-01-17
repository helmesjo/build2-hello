# libwhat - A C++ library

The `libwhat` C++ library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libwhat` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libwhat ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libwhat%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libwhat.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
