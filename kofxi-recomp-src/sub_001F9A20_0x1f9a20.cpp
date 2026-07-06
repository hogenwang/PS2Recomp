#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9A20
// Address: 0x1f9a20 - 0x1f9a80
void sub_001F9A20_0x1f9a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9A20_0x1f9a20");
#endif

    switch (ctx->pc) {
        case 0x1f9a3cu: goto label_1f9a3c;
        case 0x1f9a60u: goto label_1f9a60;
        default: break;
    }

    ctx->pc = 0x1f9a20u;

    // 0x1f9a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9a28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9a30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9a34: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F9A34u;
    SET_GPR_U32(ctx, 31, 0x1F9A3Cu);
    ctx->pc = 0x1F9A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A34u;
            // 0x1f9a38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A3Cu; }
        if (ctx->pc != 0x1F9A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9A3Cu; }
        if (ctx->pc != 0x1F9A3Cu) { return; }
    }
    ctx->pc = 0x1F9A3Cu;
label_1f9a3c:
    // 0x1f9a3c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f9a40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9A40u;
    {
        const bool branch_taken_0x1f9a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A40u;
            // 0x1f9a44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9a40) {
            ctx->pc = 0x1F9A60u;
            goto label_1f9a60;
        }
    }
    ctx->pc = 0x1F9A48u;
    // 0x1f9a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9a4c: 0x34a50139  ori         $a1, $a1, 0x139
    ctx->pc = 0x1f9a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)313);
    // 0x1f9a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9a58: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F9A58u;
    ctx->pc = 0x1F9A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A58u;
            // 0x1f9a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F9A60u;
label_1f9a60:
    // 0x1f9a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9a68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9a70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9a74: 0x807a972  j           func_1EA5C8
    ctx->pc = 0x1F9A74u;
    ctx->pc = 0x1F9A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9A74u;
            // 0x1f9a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA5C8u;
    {
        auto targetFn = runtime->lookupFunction(0x1EA5C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1F9A7Cu;
    // 0x1f9a7c: 0x0  nop
    ctx->pc = 0x1f9a7cu;
    // NOP
    ctx->pc = 0x1f9a80u;
}
