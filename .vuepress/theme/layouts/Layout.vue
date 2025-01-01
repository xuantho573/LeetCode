<template>
  <main class="container-fluid h-screen p-2 flex flex-col">
    <Header class="" />
    <component :is="layout" class="h-full" />
    <!-- <Footer class="theme-layout__footer" /> -->
  </main>
</template>

<script>
// import Home from '@theme/components/Home'
import Header from '../components/Header.vue'
import ProblemLayout from './ProblemLayout.vue'

export default {
  name: 'Layout',
  components: {
    Header,
    ProblemLayout,
  },
  mounted() {
    console.log(1);
    (this.layout)
  },
  computed: {
    layout () {
      console.log(this.$page);
      if (this.$page.path) {
        if (this.$frontmatter.layout) {
          return this.$frontmatter.layout
        }
        if (this.$page.path === '/') return 'HomeLayout'
        return 'ProblemLayout'
      }
      return 'NotFound'
    },
  },
}
</script>
