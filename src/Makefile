TEST_FLAGS= -lgtest_main -pthread -lgtest
GCC= g++ -Wall -Wextra -Werror -std=c++17
GCO= --coverage

MODEL= Model/Model.cc Model/isValid.cc Model/Parsing.cc Model/Arithmetic.cc Model/PolishNotation.cc Model/Stack.cc

FUNC_SRC := $(wildcard */*.h && */*.tpp && */*.cc)

TEST_LIB= TestCalc/*.cc

RM_RULE= rm -rf main test *.dSYM report res *.info *.gcda *.gcno *.o *.tgz View/*.o build

UNAME := $(shell uname)

FILES= $(wildcard *.cc)
OBJ=$(patsubst %.cc,%.o,${FILES})

all: test gcov_report install

install: uninstall
	@mkdir build
	@cd View/ && qmake && make && rm Makefile
	@cd build && open FrontCalc.app

uninstall:
	rm -rf build

dist: clean
	@mkdir SmartCalcV2
	@cp -R Front Model build Makefile SmartCalcV2/
	@tar cvzf SmartCalcV2.tgz .
	@rm -rf SmartCalcV2

dvi:
	open CalcInfo.md

test: clean
	$(GCC) $(TEST_FLAGS) -g -o test $(MODEL) $(TEST_LIB)
	./test

clean:
	$(RM_RULE)
	clear

gcov_report: clean
	$(GCC) $(TEST_FLAGS) $(GCO) $(MODEL) $(TEST_LIB) -o report
	./report
	lcov -c -d . -o coverage.info --ignore-errors mismatch
	lcov -r coverage.info /usr/local/include/gtest 13 -o filtered_coverage.info
	genhtml filtered_coverage.info --output-directory=res
	open ./res/index.html
	rm -rf *.gcda *.gcno

docker:
	docker build -t my_image .
	docker run -d -p 80:80 --name my_container my_image bash -c "cd /TEST_VALGRIND && make test && valgrind ./test"
	docker logs -f my_container
	docker stop my_container
	docker rm my_container
	docker rmi my_image

style:
	@cp ../materials/linters/.clang-format .
	clang-format -n $(FUNC_SRC)
	clang-format -i $(FUNC_SRC)
	@rm -rf .clang-format
