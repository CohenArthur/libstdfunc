project('stdfunc', 'c',
  default_futures: [
  'warning_level=3',
  'debug=true',
  'c_std=c11',
  'b_sanitize=address',
  ])

src = [
]

tests = [
  'test_map.c',
  'test_option.c',
  'test_pair.c',
  'test_result.c',
]

stdfunc_so = library('stdfunc', src)

stdfunc_dep = declare_dependency(link_with: stdfunc_so)

foreach test_src: tests
  bin = executable('bin' + test_src, 'tests/' + test_src,
    dependencies: [
      stdfunc_dep
      ])
  test('bin' + test_src, bin)
endforeach
