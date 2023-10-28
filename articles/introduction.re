= はじめに

//flushright{

2023年11月
mochikoAsTech

//}

この本を手に取ってくださったあなた、こんにちは、あるいははじめまして。「届ける工夫 ～欲しい誰かに見つけてもらえる50の方法～」の筆者、mochikoAsTechです。

筆者は2018年に技術書典4で「DNSをはじめよう」を出して以来、さまざまな技術書を書いてきました。今回の「届ける工夫」は記念すべき10冊目@<fn>{tbf}となります。ぱちぱち！

//footnote[tbf][改訂第2版も2度出しているので、「〆切までにまとまった量の原稿を書く」は過去に11回体験しているはずなのですが、12回目もフレッシュに苦しかったです。毎回「誰だよ、本を書くなんて言ったやつ……私だ！」とおののいています。 @<href>{https://techbookfest.org/organization/12790004}]

本書には、私が技術書典で本を出すとき実際にやっていることを元にして、あなたが「もっとたくさんの人に知ってもらって、本がいっぱい売れて欲しい」と思ったら目的達成のためにこういうことをするといいですよ、という工夫をぎゅぎゅっと詰め込みました。題材は技術書典ですが、それぞれの工夫は汎用的なものなので、たとえば同人誌即売会で自作の小説を売っている人や、ハンドメイドのアクセサリーをマルシェで売っている人など、自分の作ったものを自分で販売している人にはきっと共通して有益な内容だと思います。

第1章から第6章まではやるべきことが時系列で並んでいるので、通して読むと一通りの流れが把握できます。あとは技術書典の開催直前になったら@<chapref>{before-event}を読み返してみる、というように、「いまの時期には何をすべきか」の参考にするのもいいでしょう。

販売部数という数字を積極的に追い求めることを、拝金主義のように感じてしまう人もいると思います。また、謙虚さゆえに、自著の告知や宣伝を控えめにしている著者も多いと思います。ですが「販売部数」の向こう側には、その本を手に取って、価値を感じ、お金を払って買ってくれたひとりひとりが居ます。必要としている人の元まで届いて欲しいという気持ちで頑張って告知すること、そして届いた結果の数字を喜ぶこと、果たしてそこにネガティブな要素はあるのでしょうか？それに読者の立場で思い返してみると「こんな本あったの？早く言ってほしかった！あー、もっと前にこれを知っていたら……！」という気持ちにはきっと覚えがあるはずです。

流れていく情報の量が多い現代において、困りごとで調べ物をしたときに「まさにこれが知りたかった！」という情報に辿り着くのは至難の業です。良いものを作れば黙っていても見つけてもらえる、という時代ではないのです。必要としてくれているどこかの誰かにあなたの本を届けるには、ちゃんと見つけてもらうための情報発信が必要です。

本書には、欲しい人に存在を知ってもらい、手に取ってもらうための実践的な工夫が詰め込まれています。「せっかく書いた良い技術書が、存在自体を知ってもらえていないせいで売れていない。この本を必要としてる人はたくさん居るはずなのになんで届かないんだ……」という悔しい思いをしたことがある著者の方にとって、きっと本書はお役に立つと思います。

本書を書くにあたって改めて数えてみたところ、「DNSをはじめよう」の販売部数は単体で6,000部、「AWSをはじめよう」と「SSLをはじめよう」もあわせた、はじめようシリーズ全体では12,000部を超えていました@<fn>{date}。はじめようシリーズ以外の本についても、有難いことに販売部数はだいたいコンスタントに1,000部を超えています。

//footnote[date][2023年11月時点の販売部数です。]

「たくさん売れて欲しい」という気持ちを、気持ちだけで終わらせず行動に移せたら素晴らしいことです。それと同時に、書き手が「好き」を早口で詰め込んだ本は、販売部数に関わらずどれも等しく尊いということは忘れずにいてください。販売部数が少ないことは、決して本の価値が低いということを意味しません。

本書は「みなさん、たくさん売れることを目的にしましょう！」という話ではないので、読み進めていって「こんなに売れ行きのことばかり気にしてたら楽しくないな」と思ったら、書いてあることなど無視して心の赴くまま好きなようにやりましょう。

価値のないものを無理矢理売るための広告や宣伝ではなく、折角の良書を「必要としている誰か」へちゃんと届けるための工夫を少しずつ試してみませんか？

== 想定する読者層

本書は、こんな人に向けて書かれています。

 * 技術書典の出展サークル
 * 技術書の著者や編集者
 * 必要としている誰かに本を届けたい人
 * 本が思っていたより売れず「爆死…！」となったことがある人
 * 本があんまり売れずに悩んでいる人
 * 宣伝や告知のコツが知りたい人
 * 人に見つけてもらえる上手な情報発信がしたい人
 * 自分の作ったものを自分で販売している人
 * 作ったものの存在や良さをつたえたい人

== マッチしない読者層

本書は、こんな人が読むと恐らく「not for meだった…（私向けじゃなかった）」となります。

 * 本を書くのは好きだが、書いた本が読まれるか読まれないかには興味がない人
 * 販売部数なんか気にせず心の赴くまま技術同人誌を作りたい人

== 本書のゴール

本書を読み終わると、このような状態になっています。

 * 「欲しい」と思っている層に本を届けるための方法を知っている
 * 存在に気付いてもらうための情報発信の仕方が分かっている
 * 「宣伝」や「告知」に対して前向きになっている
 * 以前よりも本がたくさん売れる（具体的な効能効果、販売部数、および安全性を保証するものではありません）

== 免責事項

本書に記載された社名、製品名およびサービス名は、各社の登録商標または商標です。

本書に記載されている内容は筆者の所属する組織の公式見解ではありません。

また本書はできるだけ正確を期すように努めましたが、筆者が内容を保証するものではありません。よって本書の記載内容に基づいて読者が行なった行為、及び読者が被った損害について筆者は何ら責任を負うものではありません。

不正確あるいは誤認と思われる箇所がありましたら、必要に応じて適宜改訂を行いますのでGitHubのIssueやPull Requestで筆者までお知らせいただけますと幸いです。

@<href>{https://github.com/mochikoAsTech/make-the-book-known}
