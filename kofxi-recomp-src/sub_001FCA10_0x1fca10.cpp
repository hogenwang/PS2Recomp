#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCA10
// Address: 0x1fca10 - 0x1fca60
void sub_001FCA10_0x1fca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCA10_0x1fca10");
#endif

    switch (ctx->pc) {
        case 0x1fca2cu: goto label_1fca2c;
        case 0x1fca38u: goto label_1fca38;
        case 0x1fca4cu: goto label_1fca4c;
        default: break;
    }

    ctx->pc = 0x1fca10u;

    // 0x1fca10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fca14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fca18: 0x24900d88  addiu       $s0, $a0, 0xD88
    ctx->pc = 0x1fca18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1fca1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fca20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fca24: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FCA24u;
    SET_GPR_U32(ctx, 31, 0x1FCA2Cu);
    ctx->pc = 0x1FCA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA24u;
            // 0x1fca28: 0x8e0402e0  lw          $a0, 0x2E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC718u;
    if (runtime->hasFunction(0x1DC718u)) {
        auto targetFn = runtime->lookupFunction(0x1DC718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA2Cu; }
        if (ctx->pc != 0x1FCA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC718_0x1dc718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA2Cu; }
        if (ctx->pc != 0x1FCA2Cu) { return; }
    }
    ctx->pc = 0x1FCA2Cu;
label_1fca2c:
    // 0x1fca2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fca2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca30: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1FCA30u;
    SET_GPR_U32(ctx, 31, 0x1FCA38u);
    ctx->pc = 0x1FCA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA30u;
            // 0x1fca34: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA38u; }
        if (ctx->pc != 0x1FCA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA38u; }
        if (ctx->pc != 0x1FCA38u) { return; }
    }
    ctx->pc = 0x1FCA38u;
label_1fca38:
    // 0x1fca38: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1fca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1fca3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca40: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fca40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fca44: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1FCA44u;
    SET_GPR_U32(ctx, 31, 0x1FCA4Cu);
    ctx->pc = 0x1FCA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA44u;
            // 0x1fca48: 0xae0202dc  sw          $v0, 0x2DC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA4Cu; }
        if (ctx->pc != 0x1FCA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCA4Cu; }
        if (ctx->pc != 0x1FCA4Cu) { return; }
    }
    ctx->pc = 0x1FCA4Cu;
label_1fca4c:
    // 0x1fca4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fca50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fca50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fca54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fca54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fca58: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA58u;
            // 0x1fca5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCA60u;
    ctx->pc = 0x1fca60u;
}
