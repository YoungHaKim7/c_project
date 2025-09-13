# Link
- [Java vs C 용량 비교 변수 범위](#java-vs-c-data-represintationsizse-of-objectsin-bytes)
- [c-operator-precedence](#c-operator-precedence)

- C/C++
  - [온라인으로 디버깅 된다. 완전 최고..https://www.onlinegdb.com/online_c++_debugger](https://www.onlinegdb.com/online_c++_debugger)



<hr>

# 여기에 다 정리중.(C23 & C++23&26)

- C23
  - https://github.com/YoungHaKim7/c23_pthread_cmake_just_sample

- C++23 & 26
  - https://github.com/YoungHaKim7/cpp26_pthread_cmake_just_sample

# vim tab setting[[🔝]](#link)

```
set tabstop=2
set shiftwidth=2

# tab 4칸 설정
set tabstop=4
set shiftwidth=4
```

<hr>

# C Operator Precedence[[🔝]](#link)
- The following table lists the precedence and associativity of C operators. Operators are listed top to bottom, in descending precedence.
  - https://en.cppreference.com/w/c/language/operator_precedence

<table class="wikitable">

<tr>
<th style="text-align: left"> Precedence
</th>
<th style="text-align: left"> Operator
</th>
<th style="text-align: left"> Description
</th>
<th style="text-align: left"> Associativity
</th></tr>
<tr>
<th rowspan="6"> 1
</th>
<td style="border-bottom-style: none"> <code>++</code> <code>--</code>
</td>
<td style="border-bottom-style: none"> Suffix/postfix increment and decrement
</td>
<td style="vertical-align: top" rowspan="6"> Left-to-right
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>()</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Function call
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>[]</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Array subscripting
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>.</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Structure and union member access
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>-&gt;</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Structure and union member access through pointer
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>(<i>type</i>){<i>list</i>}</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Compound literal<span class="t-mark-rev t-since-c99">(C99)</span>
</td></tr>
<tr>
<th rowspan="8"> 2
</th>
<td style="border-bottom-style: none"> <code>++</code> <code>--</code>
</td>
<td style="border-bottom-style: none"> Prefix increment and decrement<sup id="cite_ref-1" class="reference"><a href="#cite_note-1">[note 1]</a></sup>
</td>
<td style="vertical-align: top" rowspan="8"> Right-to-left
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>+</code> <code>-</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Unary plus and minus
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>!</code> <code>~</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Logical NOT and bitwise NOT
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>(<i>type</i>)</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Cast
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>*</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Indirection (dereference)
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>&amp;</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Address-of
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>sizeof</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Size-of<sup id="cite_ref-2" class="reference"><a href="#cite_note-2">[note 2]</a></sup>
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>_Alignof</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Alignment requirement<span class="t-mark-rev t-since-c11">(C11)</span>
</td></tr>
<tr>
<th> 3
</th>
<td> <code>*</code> <code>/</code> <code>%</code>
</td>
<td> Multiplication, division, and remainder
</td>
<td style="vertical-align: top" rowspan="11"> Left-to-right
</td></tr>
<tr>
<th> 4
</th>
<td> <code>+</code> <code>-</code>
</td>
<td> Addition and subtraction
</td></tr>
<tr>
<th> 5
</th>
<td> <code>&lt;&lt;</code> <code>&gt;&gt;</code>
</td>
<td> Bitwise left shift and right shift
</td></tr>
<tr>
<th rowspan="2"> 6
</th>
<td style="border-bottom-style: none"> <code>&lt;</code> <code>&lt;=</code>
</td>
<td style="border-bottom-style: none"> For relational operators &lt; and ≤ respectively
</td></tr>
<tr>
<td style="border-top-style: none"> <code>&gt;</code> <code>&gt;=</code>
</td>
<td style="border-top-style: none"> For relational operators &gt; and ≥ respectively
</td></tr>
<tr>
<th> 7
</th>
<td> <code>==</code> <code>!=</code>
</td>
<td> For relational = and ≠ respectively
</td></tr>
<tr>
<th> 8
</th>
<td> <code>&amp;</code>
</td>
<td> Bitwise AND
</td></tr>
<tr>
<th> 9
</th>
<td> <code>^</code>
</td>
<td> Bitwise XOR (exclusive or)
</td></tr>
<tr>
<th> 10
</th>
<td> <code>|</code>
</td>
<td> Bitwise OR (inclusive or)
</td></tr>
<tr>
<th> 11
</th>
<td> <code>&amp;&amp;</code>
</td>
<td> Logical AND
</td></tr>
<tr>
<th> 12
</th>
<td> <code>||</code>
</td>
<td> Logical OR
</td></tr>
<tr>
<th> 13
</th>
<td> <code>?:</code>
</td>
<td> Ternary conditional<sup id="cite_ref-3" class="reference"><a href="#cite_note-3">[note 3]</a></sup>
</td>
<td style="vertical-align: top" rowspan="6"> Right-to-left
</td></tr>
<tr>
<th rowspan="5"> 14<sup id="cite_ref-4" class="reference"><a href="#cite_note-4">[note 4]</a></sup>
</th>
<td style="border-bottom-style: none"> <code>=</code>
</td>
<td style="border-bottom-style: none"> Simple assignment
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>+=</code> <code>-=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Assignment by sum and difference
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>*=</code> <code>/=</code> <code>%=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Assignment by product, quotient, and remainder
</td></tr>
<tr>
<td style="border-bottom-style: none; border-top-style: none"> <code>&lt;&lt;=</code> <code>&gt;&gt;=</code>
</td>
<td style="border-bottom-style: none; border-top-style: none"> Assignment by bitwise left shift and right shift
</td></tr>
<tr>
<td style="border-top-style: none"> <code>&amp;=</code> <code>^=</code> <code>|=</code>
</td>
<td style="border-top-style: none"> Assignment by bitwise AND, XOR, and OR
</td></tr>
<tr>
<th> 15
</th>
<td> <code>,</code>
</td>
<td> Comma
</td>
<td> Left-to-right
</td></tr></table>
<ol class="references">
<li id="cite_note-1"><span class="mw-cite-backlink"><a href="#cite_ref-1">↑</a></span> <span class="reference-text">The operand of prefix <code>++</code> and <code>--</code> can't be a type cast. This rule grammatically forbids some expressions that would be semantically invalid anyway. Some compilers ignore this rule and detect the invalidity semantically.</span>
</li>
<li id="cite_note-2"><span class="mw-cite-backlink"><a href="#cite_ref-2">↑</a></span> <span class="reference-text">The operand of <code>sizeof</code> can't be a type cast: the expression <span class="t-c"><span class="mw-geshi c source-c"><span class="kw4">sizeof</span> <span class="br0">&#40;</span><span class="kw4">int</span><span class="br0">&#41;</span> <span class="sy2">*</span> p</span></span> is unambiguously interpreted as <span class="t-c"><span class="mw-geshi c source-c"><span class="br0">&#40;</span><span class="kw4">sizeof</span><span class="br0">&#40;</span><span class="kw4">int</span><span class="br0">&#41;</span><span class="br0">&#41;</span> <span class="sy2">*</span> p</span></span>, but not <span class="t-c"><span class="mw-geshi c source-c"><span class="kw4">sizeof</span><span class="br0">&#40;</span><span class="br0">&#40;</span><span class="kw4">int</span><span class="br0">&#41;</span><span class="sy2">*</span>p<span class="br0">&#41;</span></span></span>.</span>
</li>
<li id="cite_note-3"><span class="mw-cite-backlink"><a href="#cite_ref-3">↑</a></span> <span class="reference-text">The expression in the middle of the conditional operator (between <code><b>?</b></code> and <code><b>:</b></code>) is parsed as if parenthesized: its precedence relative to <code>?:</code> is ignored.</span>
</li>
<li id="cite_note-4"><span class="mw-cite-backlink"><a href="#cite_ref-4">↑</a></span> <span class="reference-text">Assignment operators' left operands must be unary (level-2 non-cast) expressions. This rule grammatically forbids some expressions that would be semantically invalid anyway. Many compilers ignore this rule and detect the invalidity semantically. For example, <span class="t-c"><span class="mw-geshi c source-c">e <span class="sy1">=</span> a <span class="sy1">&lt;</span> d <span class="sy4">?</span> a<span class="sy2">++</span> <span class="sy4">:</span> a <span class="sy1">=</span> d</span></span> is an expression that cannot be parsed because of this rule. However, many compilers ignore this rule and parse it as <span class="t-c"><span class="mw-geshi c source-c">e <span class="sy1">=</span> <span class="br0">&#40;</span> <span class="br0">&#40;</span><span class="br0">&#40;</span>a <span class="sy1">&lt;</span> d<span class="br0">&#41;</span> <span class="sy4">?</span> <span class="br0">&#40;</span>a<span class="sy2">++</span><span class="br0">&#41;</span> <span class="sy4">:</span> a<span class="br0">&#41;</span> <span class="sy1">=</span> d <span class="br0">&#41;</span></span></span>, and then give an error because it is semantically invalid.</span>
</li>
</ol>
<p>When parsing an expression, an operator which is listed on some row will be bound tighter (as if by parentheses) to its arguments than any operator that is listed on a row further below it. For example, the expression <span class="t-c"><span class="mw-geshi c source-c"><span class="sy2">*</span>p<span class="sy2">++</span></span></span> is parsed as <span class="t-c"><span class="mw-geshi c source-c"><span class="sy2">*</span><span class="br0">&#40;</span>p<span class="sy2">++</span><span class="br0">&#41;</span></span></span>, and not as <span class="t-c"><span class="mw-geshi c source-c"><span class="br0">&#40;</span><span class="sy2">*</span>p<span class="br0">&#41;</span><span class="sy2">++</span></span></span>.
</p><p>Operators that are in the same cell (there may be several rows of operators listed in a cell) are evaluated with the same precedence, in the given direction. For example, the expression <span class="t-c"><span class="mw-geshi c source-c">a<span class="sy1">=</span>b<span class="sy1">=</span>c</span></span> is parsed as <span class="t-c"><span class="mw-geshi c source-c">a<span class="sy1">=</span><span class="br0">&#40;</span>b<span class="sy1">=</span>c<span class="br0">&#41;</span></span></span>, and not as <span class="t-c"><span class="mw-geshi c source-c"><span class="br0">&#40;</span>a<span class="sy1">=</span>b<span class="br0">&#41;</span><span class="sy1">=</span>c</span></span> because of right-to-left associativity.
</p>
<h3><span class="editsection">[<a href="/mwiki/index.php?title=c/language/operator_precedence&amp;action=edit&amp;section=1" title="Edit section: Notes">edit</a>]</span> <span class="mw-headline" id="Notes">Notes</span></h3>
<p>Precedence and associativity are independent from <a href="/w/c/language/eval_order" title="c/language/eval order">order of evaluation</a>.
</p><p>The standard itself doesn't specify precedence levels. They are derived from the grammar.
</p><p>In C++, the conditional operator has the same precedence as assignment operators, and prefix <code>++</code> and <code>--</code> and assignment operators don't have the restrictions about their operands.
</p><p>Associativity specification is redundant for unary operators and is only shown for completeness: unary prefix operators always associate right-to-left (<span class="t-c"><span class="mw-geshi c source-c"><span class="kw4">sizeof</span> <span class="sy2">++*</span>p</span></span> is <span class="t-c"><span class="mw-geshi c source-c"><span class="kw4">sizeof</span><span class="br0">&#40;</span><span class="sy2">++</span><span class="br0">&#40;</span><span class="sy2">*</span>p<span class="br0">&#41;</span><span class="br0">&#41;</span></span></span>) and unary postfix operators always associate left-to-right (<span class="t-c"><span class="mw-geshi c source-c">a<span class="br0">&#91;</span><span class="nu0">1</span><span class="br0">&#93;</span><span class="br0">&#91;</span><span class="nu0">2</span><span class="br0">&#93;</span><span class="sy2">++</span></span></span> is <span class="t-c"><span class="mw-geshi c source-c"><span class="br0">&#40;</span><span class="br0">&#40;</span>a<span class="br0">&#91;</span><span class="nu0">1</span><span class="br0">&#93;</span><span class="br0">&#41;</span><span class="br0">&#91;</span><span class="nu0">2</span><span class="br0">&#93;</span><span class="br0">&#41;</span><span class="sy2">++</span></span></span>). Note that the associativity is meaningful for member access operators, even though they are grouped with unary postfix operators: <span class="t-c"><span class="mw-geshi c source-c">a.<span class="me1">b</span><span class="sy2">++</span></span></span> is parsed <span class="t-c"><span class="mw-geshi c source-c"><span class="br0">&#40;</span>a.<span class="me1">b</span><span class="br0">&#41;</span><span class="sy2">++</span></span></span> and not <span class="t-c"><span class="mw-geshi c source-c">a.<span class="br0">&#40;</span>b<span class="sy2">++</span><span class="br0">&#41;</span></span></span>.
</p>
<h3><span class="editsection">[<a href="/mwiki/index.php?title=c/language/operator_precedence&amp;action=edit&amp;section=2" title="Edit section: References">edit</a>]</span> <span class="mw-headline" id="References">References</span></h3>
<div class="t-ref-std-17">
<ul><li> C17 standard (ISO/IEC 9899:2018): 
</li></ul>
<dl><dd><ul><li> A.2.1 Expressions 
</li></ul>
</dd></dl>
</div>
<div class="t-ref-std-11">
<ul><li> C11 standard (ISO/IEC 9899:2011): 
</li></ul>
<dl><dd><ul><li> A.2.1 Expressions 
</li></ul>
</dd></dl>
</div>
<div class="t-ref-std-c99">
<ul><li> C99 standard (ISO/IEC 9899:1999): 
</li></ul>
<dl><dd><ul><li> A.2.1 Expressions 
</li></ul>
</dd></dl>
</div>
<div class="t-ref-std-c89">
<ul><li> C89/C90 standard (ISO/IEC 9899:1990): 
</li></ul>
<dl><dd><ul><li> A.1.2.1 Expressions 
</li></ul>
</dd></dl>
</div>
<h3><span class="editsection">[<a href="/mwiki/index.php?title=c/language/operator_precedence&amp;action=edit&amp;section=3" title="Edit section: See also">edit</a>]</span> <span class="mw-headline" id="See_also">See also</span></h3>
<p><a href="/w/c/language/eval_order" title="c/language/eval order">Order of evaluation</a> of operator arguments at run time.
</p>
<table class="wikitable">

<tr style="text-align:center">
<th colspan="7"> Common operators
</th></tr>
<tr style="text-align:center">
<td> <a href="/w/c/language/operator_assignment" title="c/language/operator assignment"> assignment</a>
</td>
<td> <a href="/w/c/language/operator_incdec" title="c/language/operator incdec"> increment<br />decrement</a>
</td>
<td> <a href="/w/c/language/operator_arithmetic" title="c/language/operator arithmetic"> arithmetic</a>
</td>
<td> <a href="/w/c/language/operator_logical" title="c/language/operator logical"> logical</a>
</td>
<td> <a href="/w/c/language/operator_comparison" title="c/language/operator comparison"> comparison</a>
</td>
<td> <a href="/w/c/language/operator_member_access" title="c/language/operator member access"> member<br />access</a>
</td>
<td> <a href="/w/c/language/operator_other" title="c/language/operator other"> other</a>
</td></tr>
<tr style="text-align:center">
<td>
<p><span class="t-c"><span class="mw-geshi c source-c">a <span class="sy1">=</span> b<br />
a <span class="sy2">+</span><span class="sy1">=</span> b<br />
a <span class="sy2">-</span><span class="sy1">=</span> b<br />
a <span class="sy2">*</span><span class="sy1">=</span> b<br />
a <span class="sy2">/</span><span class="sy1">=</span> b<br />
a <span class="sy2">%</span><span class="sy1">=</span> b<br />
a <span class="sy3">&amp;</span><span class="sy1">=</span> b<br />
a <span class="sy3">|</span><span class="sy1">=</span> b<br />
a <span class="sy3">^</span><span class="sy1">=</span> b<br />
a <span class="sy1">&lt;&lt;=</span> b<br />
a <span class="sy1">&gt;&gt;=</span> b</span></span>
</p>
</td>
<td>
<p><span class="t-c"><span class="mw-geshi c source-c"><span class="sy2">++</span>a<br />
<span class="sy2">--</span>a<br />
a<span class="sy2">++</span><br />
a<span class="sy2">--</span></span></span>
</p>
</td>
<td>
<p><span class="t-c"><span class="mw-geshi c source-c"><span class="sy2">+</span>a<br />
<span class="sy2">-</span>a<br />
a <span class="sy2">+</span> b<br />
a <span class="sy2">-</span> b<br />
a <span class="sy2">*</span> b<br />
a <span class="sy2">/</span> b<br />
a <span class="sy2">%</span> b<br />
~a<br />
a <span class="sy3">&amp;</span> b<br />
a <span class="sy3">|</span> b<br />
a <span class="sy3">^</span> b<br />
a <span class="sy1">&lt;&lt;</span> b<br />
a <span class="sy1">&gt;&gt;</span> b</span></span>
</p>
</td>
<td>
<p><span class="t-c"><span class="mw-geshi c source-c"><span class="sy3">!</span>a<br />
a <span class="sy3">&amp;&amp;</span> b<br />
a <span class="sy3">||</span> b</span></span>
</p>
</td>
<td>
<p><span class="t-c"><span class="mw-geshi c source-c">a <span class="sy1">==</span> b<br />
a <span class="sy3">!</span><span class="sy1">=</span> b<br />
a <span class="sy1">&lt;</span> b<br />
a <span class="sy1">&gt;</span> b<br />
a <span class="sy1">&lt;=</span> b<br />
a <span class="sy1">&gt;=</span> b</span></span>
</p>
</td>
<td>
<p><span class="t-c"><span class="mw-geshi c source-c">a<span class="br0">&#91;</span>b<span class="br0">&#93;</span><br />
<span class="sy2">*</span>a<br />
<span class="sy3">&amp;</span>a<br />
a<span class="sy2">-</span><span class="sy1">&gt;</span>b<br />
a.<span class="me1">b</span></span></span>
</p>
</td>
<td>
<p><span class="t-c"><span class="mw-geshi c source-c">a<span class="br0">&#40;</span>...<span class="br0">&#41;</span><br />
a, b<br />
<span class="br0">&#40;</span>type<span class="br0">&#41;</span> a<br />
a <span class="sy4">?</span> b <span class="sy4">:</span> c<br />
<span class="kw4">sizeof</span></span></span><br /><br />
<span class="t-c"><span class="mw-geshi c source-c">_Alignof</span></span><br /><span class="t-mark-rev t-since-c11">(since C11)</span>
</p>
</td></tr>
</table>
<table class="t-dsc-begin">

<tr class="t-dsc">
<td colspan="2"> <div class="t-dsc-see"><span><a href="/w/cpp/language/operator_precedence" title="cpp/language/operator precedence">C++ documentation</a></span> for <span class=""><span>C++ operator precedence</span></span></div>
</td></tr>

</table>


<hr>


# C코드를 ll로 변환 후 Assembly ❤️바꾸는 방법(LLVM&Assembly코드는 M1pro arm64기계 기준임macOS)otool활용[[🔝]](#link)

https://economiceco.tistory.com/14882

<hr>

# 유료$paid독하게 되새기는 C 프로그래밍[|🔝|](#link)

https://inf.run/W34T

https://www.inflearn.com/course/%EB%8F%85%ED%95%98%EA%B2%8C-%EB%90%98%EC%83%88%EA%B8%B0%EB%8A%94-c%ED%94%84%EB%A1%9C%EA%B7%B8%EB%9E%98%EB%B0%8D/


# 자습서: VS Code를 사용하여 Mac에서 C 프로그램 디버깅[[🔝]](#link)

https://youtu.be/wKjFVyDbSpA?si=iDI2RC3mMhSeCXSe

- 나도 맥북으로 C언어 개발한다 (feat. VScode)(한국분 자료)
  - https://youtu.be/BzBaqSHisAs?si=IAFC7pwfUinKcdQM

# VS Code에서 C++ 프로젝트 디버그[[🔝]](#link)

https://youtu.be/G9gnSGKYIg4?si=xxmdCBQSWqa0dtSs

# 고생하면서 배우는 C언어 (일본어)苦しんで覚えるＣ言語[[🔝]](#link)

https://9cguide.appspot.com/index.html

# C Programming Full Course for free 🕹️ (4hr)[[🔝]](#link)
https://youtu.be/87SH2Cn0s9A

# C / C++ | freeCodeCamp.org[[🔝]](#link)

https://youtube.com/playlist?list=PLWKjhJtqVAbmUE5IqyfGYEYjrZBYzaT4m

# Microsoft C++, C, and Assembler documentation(C MSDN)[[🔝]](#link)

- Learn how to use C++, C, and assembly language to develop applications, services, and tools for your platforms and devices.

https://learn.microsoft.com/en-us/cpp/?view=msvc-170

# c-language(MS)[[🔝]](#link)

https://learn.microsoft.com/en-us/cpp/c-language/?view=msvc-170

# MicroSoft Learn (Samples C)[[🔝]](#link)

https://learn.microsoft.com/en-us/samples/browse/?languages=c


# Smile Han의 C 언어 프로그래밍[[🔝]](#link)

https://youtube.com/playlist?list=PLJqaIeuL7nuFgbxCyhtZ7xBUNhdV9Qy5R

<hr>

# The LLVM Compiler Infrastructure[[🔝]](#link)

https://llvm.org/

<br>

# Creating the Node of a Single Linked List[[🔝]](#link)

https://youtu.be/DneLxrPmmsw

<br>


## C Programming & Data Structures Series

https://youtube.com/playlist?list=PLBlnK6fEyqRhX6r2uhhlubuF5QextdCSM

<br>

<hr>

<br>

# C Language Tutorials In Hindi __ 1[[🔝]](#link)

https://youtube.com/playlist?list=PLu0W_9lII9aiXlHcLx-mDH1Qul38wD3aR

<br>

# How I program C | Eskil Steenberg ___ 2[[🔝]](#link)

https://youtu.be/443UNeGrFoM

<br>

# Advanced C: The UB and optimizations that trick good programmers. | Eskil Steenberg[[🔝]](#link)

https://youtu.be/w3_e9vZj7D8


<br>

# Modern C and What We Can Learn From It - Luca Sas [ ACCU 2021 ][[🔝]](#link)

https://youtu.be/QpAhX-gsHMs

<br>

# C Language Tutorial Videos[[🔝]](#link)

https://youtube.com/playlist?list=PLVlQHNRLflP8IGz6OXwlV_lgHgc72aXlh

<br>

<hr>

# build.sh[[🔝]](#link)

```
#!/bin/bash

clang -pthread -lm -Wall -Wextra -ggdb -o main main.c

or 

gcc -pthread -lm -Wall -Wextra -ggdb -o main main.c

```

<br>

# delete.sh[[🔝]](#link)

```
#!/bin/bash

rm -rf main main.dSYM

```

<br>

# xxd 명령어 이해하기[[🔝]](#link)

https://www.tutorialspoint.com/unix_commands/xxd.htm

- 예시 exercise/004string/main.c 참고

```
$ ./main "ready" "set" "go" | xxd -g 1

00000000: 61 72 67 76 20 3d 20 30 78 31 36 64 37 30 33 32  argv = 0x16d7032
00000010: 61 30 0a 61 72 67 76 5b 30 5d 20 3d 20 30 78 31  a0.argv[0] = 0x1
00000020: 36 64 37 30 33 34 64 38 0a 2e 2f 6d 61 69 6e 0a  6d7034d8../main.
00000030: 61 72 67 76 5b 31 5d 20 3d 20 30 78 31 36 64 37  argv[1] = 0x16d7
00000040: 30 33 34 64 66 0a 72 65 61 64 79 0a 61 72 67 76  034df.ready.argv
00000050: 5b 32 5d 20 3d 20 30 78 31 36 64 37 30 33 34 65  [2] = 0x16d7034e
00000060: 35 0a 73 65 74 0a 61 72 67 76 5b 33 5d 20 3d 20  5.set.argv[3] =
00000070: 30 78 31 36 64 37 30 33 34 65 39 0a 67 6f 0a     0x16d7034e9.go.
```

<br>

<hr>

# C Program in Hindi: C Tutorial In Hindi[[🔝]](#link)

[Basic Structure of C Program in Hindi](https://www.youtube.com/watch?v=5SIBB589fAg&t=424s)

<br>

# Java vs C Data Represintation(Sizse of objects(in bytes))[[🔝]](#link)


- 출처 Memory & Data, Video 3: Memory addresses
  - https://youtu.be/lzMCuw_5dfM?si=O8haQn_zNYIBMb2r

<table border="1">
    <tr>
    <td colspan="4" align="center">Sizes of objects(in bytes)</td>
    </tr>
    <tr align="center">
        <td>Java<br>data type</td>
        <td>C<br>data type</td>
        <td>Typical<br>32-bit</td>
        <td>x86-64</td>
    </tr>
    <tr align="center">
        <td>boolean</td>
        <td>bool</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr align="center">
        <td>byte</td>
        <td>char</td>
        <td>1</td>
        <td>1</td>
    </tr>
    <tr align="center">
        <td>char</td>
        <td></td>
        <td>2</td>
        <td>2</td>
    </tr>
    <tr align="center">
        <td>short</td>
        <td>short int</td>
        <td>2</td>
        <td>2</td>
    </tr>
    <tr align="center">
        <td>int</td>
        <td>int</td>
        <td>4</td>
        <td>4</td>
    </tr>
    <tr align="center">
        <td>float</td>
        <td>float</td>
        <td>4</td>
        <td>4</td>
    </tr>
    <tr align="center">
        <td></td>
        <td>long int</td>
        <td>4</td>
        <td>8</td>
    </tr>
    <tr align="center">
        <td>double</td>
        <td>double</td>
        <td>8</td>
        <td>8</td>
    </tr>
    <tr align="center">
        <td>long</td>
        <td>long long</td>
        <td>8</td>
        <td>8</td>
    </tr>
    <tr align="center">
        <td></td>
        <td>long double</td>
        <td>8</td>
        <td>16</td>
    </tr>
    <tr align="center">
        <td>(reference)</td>
        <td>pointer *</td>
        <td>4</td>
        <td>8</td>
    </tr>
</table>

<br>

<hr>


# 자료 구조[[🔝]](#link)

https://github.com/YoungHaKim7/c_project/tree/main/exercise/002stack

- 영어 출처
  https://en.wikipedia.org/wiki/Association_list

<table border="1">
    <tr>
    <td colspan="2" align="center">자료 구조(Well-known data structures)</td>
    </tr>
    <tr align="center">
        <td>유형(Type) </td>
        <td> 컬렉션(Collection) , 컨테이너(Container)</td>
    </tr>
    <tr align="center">
        <td> 추상ADT<br>Abstract Data Type </td>
        <td> 연관 배열(Associative array), 우선 순위 덱(Priority Deque), 덱(Deque), 리스트(List),<br> 멀티맵, 우선순위 큐(Priority Queue), 큐(Queue), <br>집합 (멀티셋, 분리 집합),<br> 스택(stack) <br>
Associative array(Multimap, Retrieval Data Structure), List, StackQueue(Double-ended queue), Priority queue(Double-ended priority queue), Set(Multiset, Disjoint-set)
    </td>
    </tr>
    <tr align="center">
        <td>배열(Array) </td>
        <td> 
비트 배열(Bit Array), 환형 배열(Circular array), 동적 배열(Dynamic Array),<br> 해시 테이블(Hash Table), 해시드 어레이 트리(Hashed Array Tree), 희소 배열(Sparse array)
        </td>
    </tr>
    <tr align="center">
        <td>연결형(Linked) </td>
        <td> 연관 리스트(Association list), 
        <br>
        <br>연결 리스트(Linked List) - 단일연결(Singly Linked List), 이중연결(Doubly Linked List), 원형 연결(Circular Linked List)<br><br>Association list,<br> Linked list, Skip list, Unrolled linked list, XOR linked list</td>
    </tr>
    <tr align="center">
        <td>트리(Trees) </td>
        <td>B 트리,<br> 이진 탐색 트리(AA, AVL, 레드-블랙, 자가 균형, splay) <br> 힙(이진 힙, 피보나치) ,<br> R 트리( R*, R+, 힐버트),<br> 트리(해시 트리)<br><br>B-tree, Binary search tree(AA tree, AVL tree, Red–black tree, Self-balancing tree, Splay tree),<br> Heap(Binary heap, Binomial heap, Fibonacci heap),<br> R-tree(R* tree, R+ tree, Hilbert R-tree), Trie Hash tree
    </td>
    </tr>
    <tr align="center">
        <td>그래프(Graphs) </td>
        <td>이진 결정 다이어그램<br>Binary decision diagram, Directed acyclic graph, Directed acyclic word graph </td>
    </tr>
</table>

<br>

<hr>

# Big-O Cheat Sheet(그림으로 이쁘게)[[🔝]](#link)

https://dev.to/deciduously/big-o-cheat-sheet-3i7d

<br>

<br>

<hr>

<br>

<hr>

# C Languages Tutorial[[🔝]](#link)

https://github.com/EbookFoundation/free-programming-books/blob/main/books/free-programming-books-langs.md#c

# C Tutorial 2[[🔝]](#link)

https://www.tutorialspoint.com/cprogramming/

# C 3[[🔝]](#link)

["Let us C - Yashavant Kanetkar (PDF) (🗃️ latest 14th edition)](https://ia903402.us.archive.org/1/items/let-us-c/LET%20US%20C.pdf)

# Compilers[[🔝]](#link)

Use every available and reasonable set of warning options. Some warning options only work with optimizations enabled, or work better the higher the chosen level of optimization is, for example 
```-Wnull-dereference```
 with GCC.

You should use as many compilers as you can for your platform(s). Each compiler implements the standard slightly differently and supporting multiple will help ensure the most portable, most reliable code.

# GCC / Clang[[🔝]](#link)
```-Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic``` 
- use these and consider the following (see descriptions below)

## see descriptions below

- ```-pedantic``` - Warn on language extensions

- ```-Wall -Wextra``` reasonable and standard

- ```-Wshadow``` warn the user if a variable declaration shadows one from a parent context

- ```-Wnon-virtual-dtor``` warn the user if a class with virtual functions has a non-virtual destructor. This helps catch hard to track down memory errors

- ```-Wold-style-cast``` warn for c-style casts

- ```-Wcast-align``` warn for potential performance problem casts
-Wunused warn on anything being unused

- ```-Woverloaded-virtual``` warn if you overload (not override) a virtual function

- ```-Wpedantic``` (all versions of GCC, Clang >= 3.2) warn if non-standard C++ is used

- ```-Wconversion``` warn on type conversions that may lose data

- ```-Wsign-conversion``` (Clang all versions, GCC >= 4.3) warn on sign conversions

- ```-Wmisleading-indentation``` (only in GCC >= 6.0) warn if indentation implies blocks where blocks do not exist

- ```-Wduplicated-cond``` (only in GCC >= 6.0) warn if if / else chain has duplicated conditions

- ```-Wduplicated-branches``` (only in GCC >= 7.0) warn if if / else branches have duplicated code

- ```-Wlogical-op``` (only in GCC) warn about logical operations being used where bitwise were probably wanted

- ```-Wnull-dereference``` (only in GCC >= 6.0) warn if a null dereference is detected

- ```-Wuseless-cast``` (only in GCC >= 4.8) warn if you perform a cast to the same type

- ```-Wdouble-promotion``` (GCC >= 4.6, Clang >= 3.8) warn if float is implicitly promoted to double

- ```-Wformat=2``` warn on security issues around functions that format output (i.e., printf)

- ```-Wlifetime``` (only special branch of Clang currently) shows object lifetime issues

- ```-Wimplicit-fallthrough``` Warns when case statements fall-through. (Included with -Wextra in GCC, not in clang)

Consider using ```-Weverything``` and disabling the few warnings you need to on Clang

- ```-Weffc++``` warning mode can be too noisy, but if it works for your project, use it also.


https://github.com/cpp-best-practices/cppbestpractices/blob/master/02-Use_the_Tools_Available.md
