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

3. Initialize the project
   ```shell
   poetry run task init --ide {ide}
   ```

## Usage

You can build the project using
```shell
poetry run task build -e {environment}
```

Then upload it to your micro-controller using
```shell
poetry run task start -e {environment}
```

The available environments are:
- `uno`
- `megaatmega2560`

## License

Distributed under the MIT License. See [LICENSE](./LICENSE) for more information.

<!-- Packages Links -->

[poetry]: https://python-poetry.org/docs
[python]: https://www.python.org/downloads


<!-- Shields.io links -->

[gitHub license]: https://img.shields.io/badge/license-MIT-blue.svg
[test action]: https://github.com/{repo}/actions/workflows/test-build.yaml/badge.svg
