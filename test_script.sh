EXIT_STATUS=0
make testrun || EXIT_STATUS=$?
cat test/test.out || EXIT_STATUS=$?
exit $EXIT_STATUS
