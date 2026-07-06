#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FC9A8
// Address: 0x1fc9a8 - 0x1fca10
void sub_001FC9A8_0x1fc9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC9A8_0x1fc9a8");
#endif

    switch (ctx->pc) {
        case 0x1fc9ccu: goto label_1fc9cc;
        case 0x1fc9d8u: goto label_1fc9d8;
        case 0x1fc9f8u: goto label_1fc9f8;
        default: break;
    }

    ctx->pc = 0x1fc9a8u;

    // 0x1fc9a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc9ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fc9b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fc9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fc9b4: 0x24900d88  addiu       $s0, $a0, 0xD88
    ctx->pc = 0x1fc9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3464));
    // 0x1fc9b8: 0x8c4416fc  lw          $a0, 0x16FC($v0)
    ctx->pc = 0x1fc9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5884)));
    // 0x1fc9bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fc9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fc9c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fc9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fc9c4: 0xc0771c6  jal         func_1DC718
    ctx->pc = 0x1FC9C4u;
    SET_GPR_U32(ctx, 31, 0x1FC9CCu);
    ctx->pc = 0x1DC718u;
    if (runtime->hasFunction(0x1DC718u)) {
        auto targetFn = runtime->lookupFunction(0x1DC718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC9CCu; }
        if (ctx->pc != 0x1FC9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC718_0x1dc718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC9CCu; }
        if (ctx->pc != 0x1FC9CCu) { return; }
    }
    ctx->pc = 0x1FC9CCu;
label_1fc9cc:
    // 0x1fc9cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9d0: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1FC9D0u;
    SET_GPR_U32(ctx, 31, 0x1FC9D8u);
    ctx->pc = 0x1FC9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC9D0u;
            // 0x1fc9d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC9D8u; }
        if (ctx->pc != 0x1FC9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC9D8u; }
        if (ctx->pc != 0x1FC9D8u) { return; }
    }
    ctx->pc = 0x1FC9D8u;
label_1fc9d8:
    // 0x1fc9d8: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1fc9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x1fc9dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9e0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1fc9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1fc9e4: 0xae0302a8  sw          $v1, 0x2A8($s0)
    ctx->pc = 0x1fc9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
    // 0x1fc9e8: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x1fc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x1fc9ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fc9f0: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1FC9F0u;
    SET_GPR_U32(ctx, 31, 0x1FC9F8u);
    ctx->pc = 0x1FC9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC9F0u;
            // 0x1fc9f4: 0xae0202cc  sw          $v0, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC9F8u; }
        if (ctx->pc != 0x1FC9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC9F8u; }
        if (ctx->pc != 0x1FC9F8u) { return; }
    }
    ctx->pc = 0x1FC9F8u;
label_1fc9f8:
    // 0x1fc9f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fc9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc9fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fc9fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fca00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fca00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fca04: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCA04u;
            // 0x1fca08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCA0Cu;
    // 0x1fca0c: 0x0  nop
    ctx->pc = 0x1fca0cu;
    // NOP
    ctx->pc = 0x1fca10u;
}
