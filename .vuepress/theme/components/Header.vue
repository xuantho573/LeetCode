  <header class="">
    <h2>AA</h2>
  </header>

<script lang='ts'>
export default {
  name: 'Header',
  components: {
  },
  mounted () {
    console.log(this.$page);
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

<style lang="scss">
@import '../styles/style.css';

</style>
