#define CATCH_CONFIG_MAIN // ��� ������ ���� tests.cpp ������� ��� Catch2
#include <catch.hpp> // �������� ������������ ���� Catch2

#include "LinkedList.h" // �������� ������������ ���� ������ ����������� ������

TEST_CASE("Empty returns true on newly created list", "[LinkedList]") {
    List list;
    REQUIRE(list.Empty());
}

TEST_CASE("Size returns correct number of elements in the list", "[LinkedList]") {
    List list;
    REQUIRE(list.Size() == 0);

    list.PushBack(5);
    list.PushBack(10);
    REQUIRE(list.Size() == 2);

    list.PushFront(3);
    REQUIRE(list.Size() == 3);
}

TEST_CASE("Clear empties the list", "[LinkedList]") {
    List list;
    list.PushBack(5);
    list.PushBack(10);
    REQUIRE(list.Size() == 2);

    list.Clear();
    REQUIRE(list.Size() == 0);
    REQUIRE(list.Empty());
}
