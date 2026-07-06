#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00262D08
// Address: 0x262d08 - 0x262d70
void sub_00262D08_0x262d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262D08_0x262d08");
#endif

    switch (ctx->pc) {
        case 0x262d2cu: goto label_262d2c;
        case 0x262d58u: goto label_262d58;
        default: break;
    }

    ctx->pc = 0x262d08u;

    // 0x262d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x262d0c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x262d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x262d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262d14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x262d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262d1c: 0x24c675f8  addiu       $a2, $a2, 0x75F8
    ctx->pc = 0x262d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30200));
    // 0x262d20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x262d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262d24: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x262D24u;
    SET_GPR_U32(ctx, 31, 0x262D2Cu);
    ctx->pc = 0x262D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262D24u;
            // 0x262d28: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (runtime->hasFunction(0x2616E0u)) {
        auto targetFn = runtime->lookupFunction(0x2616E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D2Cu; }
        if (ctx->pc != 0x262D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002616E0_0x2616e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D2Cu; }
        if (ctx->pc != 0x262D2Cu) { return; }
    }
    ctx->pc = 0x262D2Cu;
label_262d2c:
    // 0x262d2c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x262d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x262d30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262D30u;
    {
        const bool branch_taken_0x262d30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x262D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D30u;
            // 0x262d34: 0xac621a18  sw          $v0, 0x1A18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d30) {
            ctx->pc = 0x262D40u;
            goto label_262d40;
        }
    }
    ctx->pc = 0x262D38u;
    // 0x262d38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x262D38u;
    {
        const bool branch_taken_0x262d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D38u;
            // 0x262d3c: 0x2410fffe  addiu       $s0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d38) {
            ctx->pc = 0x262D58u;
            goto label_262d58;
        }
    }
    ctx->pc = 0x262D40u;
label_262d40:
    // 0x262d40: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x262d40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x262d44: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x262d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x262d48: 0x2484d780  addiu       $a0, $a0, -0x2880
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956928));
    // 0x262d4c: 0x34a50f80  ori         $a1, $a1, 0xF80
    ctx->pc = 0x262d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3968);
    // 0x262d50: 0xc098af4  jal         func_262BD0
    ctx->pc = 0x262D50u;
    SET_GPR_U32(ctx, 31, 0x262D58u);
    ctx->pc = 0x262D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262D50u;
            // 0x262d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262BD0u;
    if (runtime->hasFunction(0x262BD0u)) {
        auto targetFn = runtime->lookupFunction(0x262BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D58u; }
        if (ctx->pc != 0x262D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262BD0_0x262bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262D58u; }
        if (ctx->pc != 0x262D58u) { return; }
    }
    ctx->pc = 0x262D58u;
label_262d58:
    // 0x262d58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x262d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262d64: 0x3e00008  jr          $ra
    ctx->pc = 0x262D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262D64u;
            // 0x262d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262D6Cu;
    // 0x262d6c: 0x0  nop
    ctx->pc = 0x262d6cu;
    // NOP
    ctx->pc = 0x262d70u;
}
