<template>
  <div class="flex">
    <h2>{{ frontMatter.title }}</h2>
    <div
      v-html="problemHtml"
      class=""
    />
    <!-- <Content/> -->
    <div>
      {{ solutionsString }}
    </div>
  </div>
</template>

<script lang='ts'>
import { defineComponent } from 'vue'
import { usePageData } from 'vuepress/client'
import { marked } from 'marked'
import MarkdownIt from 'markdown-it'

export default defineComponent({
  name: 'ProblemLayout',
  data() {
    return {
      frontMatter: {},
      problemHtml: '',
      solutionsString: '',
    };
  },
  computed: {
    content () {
      return '';
    },
    // layout () {
    //   if (this.$page.path) {
    //     if (this.$frontmatter.layout) {
    //       return this.$frontmatter.layout
    //     }
    //     if (this.$page.path === '/') return 'HomeLayout'
    //     return 'PostLayout'
    //   }
    //   return 'NotFound'
    // },
    // posts () {
    //   const posts = this.$site.pages
    //     .filter(page => page.path.startsWith('/posts/') && page.path !== '/posts/')
    //     .sort((prev, next) => {
    //       return new Date(next.frontmatter.published_at) - new Date(prev.frontmatter.published_at)
    //     })
    //   return posts
    // },
  },
  methods: {
    getFrontmatter () {},
  },
})
</script>

<style>
@import '../styles/style.css';
</style>
