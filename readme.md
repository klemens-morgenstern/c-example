# C examples


| Branch | Travis | report.ci [cmocka] | report.ci [criterion] | report.ci [unity] |
|--------|--------|--------------------|-----------------------|-------------------|
| develop | [![Build Status](https://travis-ci.com/report-ci/c-example.svg?branch=develop)](https://travis-ci.com/report-ci/c-example) | [![Report Status](https://api.report.ci/status/report-ci/c-example/badge.svg?branch=develop&level=cases&build=cmocka)](https://api.report.ci/status/report-ci/c-example?branch=develop&build=cmocka) | [![Report Status](https://api.report.ci/status/report-ci/c-example/badge.svg?branch=develop&level=cases&build=criterion)](https://api.report.ci/status/report-ci/c-example?branch=develop&build=criterion) | [![Report Status](https://api.report.ci/status/report-ci/c-example/badge.svg?branch=develop&level=cases&build=unity)](https://api.report.ci/status/report-ci/c-example?branch=develop&build=unity) |
| master | [![Build Status](https://travis-ci.com/report-ci/c-example.svg?branch=master)](https://travis-ci.com/report-ci/c-example) | [![Report Status](https://api.report.ci/status/report-ci/c-example/badge.svg?branch=master&level=cases&build=cmocka)](https://api.report.ci/status/report-ci/c-example?branch=master&build=cmocka) | [![Report Status](https://api.report.ci/status/report-ci/c-example/badge.svg?branch=master&level=cases&build=criterion)](https://api.report.ci/status/report-ci/c-example?branch=master&build=criterion) | [![Report Status](https://api.report.ci/status/report-ci/c-example/badge.svg?branch=master&level=cases&build=unity)](https://api.report.ci/status/report-ci/c-example?branch=master&build=unity) |


See the [pull requests](https://github.com/report-ci/c-example/pulls) for examples.

This repository demonstrates how to use report.ci with some c examples 

```yml
after_script:
  - python <(curl -s https://report.ci/upload.py)
  - curl -s https://report.ci/upload.py | python - --framework unity --include *.unity.log
```

Note that *unity* does not have autodetection.