bin_PROGRAMS = svaba

svaba_CPPFLAGS = \
	-I$(top_srcdir)/src/SGA/Util \
	-I$(top_srcdir)/src/SGA/Bigraph \
	-I$(top_srcdir)/src/SGA/SuffixTools \
	-I$(top_srcdir)/src/SGA/StringGraph \
	-I$(top_srcdir)/src/SGA/Algorithm \
	-I$(top_srcdir)/src/SGA/SQG \
	-I$(top_srcdir)/src/SGA/SGA \
	-I$(top_srcdir)/SeqLib \
	-I$(top_srcdir)/SeqLib/htslib -Wno-sign-compare

svaba_LDADD = \
	$(top_builddir)/src/SGA/SGA/libsga.a \
	$(top_builddir)/src/SGA/StringGraph/libstringgraph.a \
	$(top_builddir)/src/SGA/Algorithm/libalgorithm.a \
	$(top_builddir)/src/SGA/SuffixTools/libsuffixtools.a \
	$(top_builddir)/src/SGA/Bigraph/libbigraph.a \
	$(top_builddir)/src/SGA/Util/libutil.a \
	$(top_builddir)/src/SGA/SQG/libsqg.a \
	$(top_builddir)/SeqLib/src/libseqlib.a \
	$(top_builddir)/SeqLib/bwa/libbwa.a \
	$(top_builddir)/SeqLib/htslib/libhts.a \
	$(top_builddir)/SeqLib/fermi-lite/libfml.a

##svaba_LDFLAGS = -pthread -std=c++11

svaba_SOURCES = run_svaba.cpp BreakPoint.cpp AlignedContig.cpp AlignmentFragment.cpp \
		DiscordantCluster.cpp DBSnpFilter.cpp PONFilter.cpp \
		svabaUtils.cpp svaba.cpp svabaAssemblerEngine.cpp vcf.cpp \
		DiscordantRealigner.cpp svabaOverlapAlgorithm.cpp svabaASQG.cpp \
		svabaAssemble.cpp KmerFilter.cpp svabaBamWalker.cpp \
		refilter.cpp LearnBamParams.cpp \
		STCoverage.cpp Histogram.cpp BamStats.cpp

install:
	mkdir -p ../../bin && mv svaba ../../bin
