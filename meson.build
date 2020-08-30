project('future', 'c',
  default_futures: [
  'warning_level=3',
  'debug=true',
  'c_std=c11',
  'b_sanitize=address',
  ])

src = [
]

tests = [
  'test_future.c',
]

future_so = library('future', src)

future_dep = declare_dependency(link_with: future_so)

foreach test_src: tests
  bin = executable('bin' + test_src, 'tests/' + test_src,
    dependencies: [
      future_dep]
      )
  test('bin' + test_src, bin, args: [
    '--gtest_color=yes',
    ])
endforeach
