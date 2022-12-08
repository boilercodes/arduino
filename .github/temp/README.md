# [{title}](./README.md) &middot; [![GitHub license]](./LICENSE) ![Test Action]

<!-- Table of Contents -->

- [Installation](#installation)
- [Usage](#usage)
- [License](#license)

## Installation

The requirements are [Python] and [Poetry].

1. Clone the repo
   ```shell
   git clone https://github.com/{repo}.git
   ```

2. Install the dependencies
   ```shell
   poetry install
   ```

## Usage

You can build the project using
```shell
poetry run task build
```

Then upload it to your micro-controller using
```shell
poetry run task start
```

## License

Distributed under the MIT License. See [LICENSE](./LICENSE) for more information.

<!-- Packages Links -->

[poetry]: https://python-poetry.org/docs
[python]: https://www.python.org/downloads


<!-- Shields.io links -->

[gitHub license]: https://img.shields.io/badge/license-MIT-blue.svg
[test action]: https://github.com/{repo}/actions/workflows/test.yaml/badge.svg
