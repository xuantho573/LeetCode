<template>
  <div class="theme-layout">
    <!-- <Header class="theme-layout__header" /> -->
    <!-- <component :is="layout" class="theme-layout__content" /> -->
    <!-- <Footer class="theme-layout__footer" /> -->
    <h2>AA</h2>
  </div>
</template>

<script lang='ts'>
// import HomeLayout from './HomeLayout'
// import PostLayout from './PostLayout'
// import Header from '@theme/components/Header'
// import Footer from '@theme/components/Footer'

export default {
  name: 'TestLayout',
  components: {
    // HomeLayout,
    // PostLayout,
    // Header,
    // Footer
  },
  provide () {
    return {
      rootLayout: this
    }
  },
  mounted () {
    alert('hey');
  },
  computed: {
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
  }
}
</script>

<style lang="stylus" scoped>
</style>
