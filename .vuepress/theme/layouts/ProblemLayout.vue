<template>
  <article class="grid grid-cols-2 gap-2 h-full overflow-y-hidden">
    <section
      v-html="problemHtml"
      class=""
    />
    <section
      v-html="solutionsHtml"
      class=""
    />
  </article>
</template>

<script lang='ts'>
import { defineComponent } from 'vue'
import { marked } from 'marked'

export default defineComponent({
  name: 'ProblemLayout',
  data() {
    return {
      frontmatter: {},
      problemHtml: '',
      solutionsHtml: '',
    };
  },
  async mounted () {
    const pageData = this.$page;
    const temp = await fetch(`/${pageData.filePathRelative}`);
    const res = await temp.text();
    const re = /.*## Problem\n+([\s\S]*\S+)\n+## Solutions\n+(.*)/s
    const [_, problemHtml, rawSolutions] = re.exec(res);

    this.frontmatter = pageData.frontmatter;
    this.problemHtml = problemHtml;
    this.solutionsHtml = marked.parse(rawSolutions, { async: false });
  },
})
</script>

<style lang="scss" scoped>
@import '../styles/style.css';
section {
  @apply p-4 overflow-y-auto rounded;
  background-color: #ccc;

  * {
    @apply text-wrap;
  }
}

</style>
