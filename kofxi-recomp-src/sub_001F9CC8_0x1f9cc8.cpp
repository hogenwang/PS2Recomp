#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9CC8
// Address: 0x1f9cc8 - 0x1f9d40
void sub_001F9CC8_0x1f9cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9CC8_0x1f9cc8");
#endif

    switch (ctx->pc) {
        case 0x1f9d2cu: goto label_1f9d2c;
        default: break;
    }

    ctx->pc = 0x1f9cc8u;

    // 0x1f9cc8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1f9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1f9ccc: 0x24831368  addiu       $v1, $a0, 0x1368
    ctx->pc = 0x1f9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x1f9cd0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1f9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f9cd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9cd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9ce0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f9ce4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1f9ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9cec: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x1f9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x1f9cf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f9cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9cf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f9cf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9cf8: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x1f9cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x1f9cfc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1f9cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f9d00: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1f9d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f9d04: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1f9d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d08: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x1f9d08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1f9d0c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1f9d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9d10: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9D10u;
    {
        const bool branch_taken_0x1f9d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D10u;
            // 0x1f9d14: 0x8c670008  lw          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9d10) {
            ctx->pc = 0x1F9D30u;
            goto label_1f9d30;
        }
    }
    ctx->pc = 0x1F9D18u;
    // 0x1f9d18: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x1f9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1f9d1c: 0x1282823  subu        $a1, $t1, $t0
    ctx->pc = 0x1f9d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1f9d20: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1f9d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f9d24: 0xc07e750  jal         func_1F9D40
    ctx->pc = 0x1F9D24u;
    SET_GPR_U32(ctx, 31, 0x1F9D2Cu);
    ctx->pc = 0x1F9D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D24u;
            // 0x1f9d28: 0x122280b  movn        $a1, $t1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D40u;
    if (runtime->hasFunction(0x1F9D40u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D2Cu; }
        if (ctx->pc != 0x1F9D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9D40_0x1f9d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9D2Cu; }
        if (ctx->pc != 0x1F9D2Cu) { return; }
    }
    ctx->pc = 0x1F9D2Cu;
label_1f9d2c:
    // 0x1f9d2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f9d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f9d30:
    // 0x1f9d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9d34: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9D34u;
            // 0x1f9d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9D3Cu;
    // 0x1f9d3c: 0x0  nop
    ctx->pc = 0x1f9d3cu;
    // NOP
    ctx->pc = 0x1f9d40u;
}
