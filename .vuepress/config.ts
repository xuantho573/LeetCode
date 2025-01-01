import { viteBundler } from '@vuepress/bundler-vite'
import { defaultTheme } from '@vuepress/theme-default'
import { defineUserConfig } from 'vuepress'
import tailwindcss from 'tailwindcss'
import autoprefixer from 'autoprefixer'

export default defineUserConfig({
  bundler: viteBundler({
    viteOptions: {
      server: {
        hmr: {
          overlay: false,
        },
      },
      css: {
        postcss: {
          plugins: [
            tailwindcss(),
            autoprefixer(),
          ],
        },
      },
    },
  }),
  theme: defaultTheme({
    sidebar: false,
  }),
  base: '/LeetCode/',
  lang: 'en-US',
  title: 'LeetCode',
})
