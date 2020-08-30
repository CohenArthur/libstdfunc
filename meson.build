project('std_func', 'c',
  default_futures: [
  'warning_level=3',
  'debug=true',
  'c_std=c11',
  'b_sanitize=address',
  ])

src = [
]

tests = [
  'test_option.c',
  'test_result.c',
]

std_func_so = library('std_func', src)

std_func_dep = declare_dependency(link_with: std_func_so)

foreach test_src: tests
  bin = executable('bin' + test_src, 'tests/' + test_src,
    dependencies: [
      std_func_dep]
      )
  test('bin' + test_src, bin, args: [
    '--gtest_color=yes',
    ])
endforeach
