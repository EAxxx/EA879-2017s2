
PDFLATEX = pdflatex
BIBTEX = bibtex
SLIDES = slides.tex
SRCS := $(shell find ./ -name '*.tex')

FIGDIR = ./fig/
FIGS := $(shell find $(FIGFIR) -name '*.*')

all:slides

slides:$(SRCS)
	$(PDFLATEX) $(SLIDES)

