from abc import ABCMeta, abstractmethod
from collections.abc import Callable
from typing import Generic, List, Optional, TypeVar
from xmlrpc.client import Boolean


T = TypeVar('T')


class SolverTemplate(metaclass=ABCMeta):
    @abstractmethod
    def input(self) -> dict:
        ...

    @abstractmethod
    def solve(self, inputs: dict) -> dict:
        ...

    @abstractmethod
    def output(self, result: dict) -> None:
        ...

    def input_integers(self) -> List[int]:
        return [int(i) for i in input().split(' ')]

    def run(self) -> None:
        inputs = self.input()
        result = self.solve(inputs)
        self.output(result)


def binary_search(
        collection: List[Generic[T]],
        condition: Callable[[T], bool],
        should_go_right: Callable[[T], bool],
        left: int = 1,
        right: int = -1) -> Optional[T]:
    if left > right:
        return None

    mid = left + (right + 1) // 2
    mid_item = collection[mid]
    if condition(mid_item):
        return mid_item

    new_left = left
    new_right = right
    if should_go_right(mid_item):
        new_left = mid + 1
    else:
        new_right = mid - 1

    return binary_search(collection, condition, should_go_right, new_left, new_right)


class YokanParty(SolverTemplate):
    def input(self) -> dict:
        n, l = self.input_integers()
        k = int(input())
        a = self.input_integers()

        return {
            'N': n,
            'L': l,
            'K': k,
            'A': a,
        }

    def solve(self, inputs: dict) -> dict:
        def is_separatable(max_score: int) -> bool:
            ...

        def should_go_right(max_score: int) -> bool:
            return is_separatable(max_score)

        ans = binary_search(
            range(),
            is_separatable,
            should_go_right,
        )

        return {
            'ans': ans,
        }

    def output(self, result: dict) -> None:
        print(result['ans'])


def main():
    yokan_party = YokanParty()
    yokan_party.run()


if __name__ == '__main__':
    main()
