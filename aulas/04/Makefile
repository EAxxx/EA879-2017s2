
PDFLATEX = pdflatex
BIBTEX = bibtex
SLIDES_TEX = slides.tex
SLIDES_PDF = $(SLIDES_TEX:.tex=.pdf)
SRCS := $(shell find ./ -name '*.tex')

DOTSRC := $(shell find ./dot -name '*.dot')
DOTPDF = $(DOTSRC:.dot=.pdf)
DOT = dot

FIGDIR = ./fig/
FIGS := $(shell find $(FIGFIR) -name '*.*')

all:$(DOTPDF) $(SLIDES_PDF)

$(DOTPDF):$(DOTSRC)
	$(DOT) -Tpdf < $(@:.pdf=.dot) > $@

$(SLIDES_PDF):$(SRCS) $(DOTPDF)
	$(PDFLATEX) $(SLIDES_TEX)

clean:
	rm *.aux *.log *.nav *.out *.snm $(DOTPDF)
