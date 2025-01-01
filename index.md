# Hello wow
<RedDiv>

_Current count is: {{ count }}_

</RedDiv>

<button @click="count++">Click Me!</button>

<script setup>
import { h, ref } from 'vue'

const RedDiv = (_, ctx) =>
  h(
    'div',
    {
      class: 'red-div',
    },
    ctx.slots.default(),
  )
const msg = 'Vue in Markdown'
const count = ref(0)

</script>

<style>
.red-div {
  color: red;
}
</style>
