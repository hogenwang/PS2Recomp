#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BAF78
// Address: 0x1baf78 - 0x1bafe0
void sub_001BAF78_0x1baf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAF78_0x1baf78");
#endif

    switch (ctx->pc) {
        case 0x1baf98u: goto label_1baf98;
        case 0x1bafa8u: goto label_1bafa8;
        case 0x1bafbcu: goto label_1bafbc;
        case 0x1bafc4u: goto label_1bafc4;
        case 0x1bafccu: goto label_1bafcc;
        default: break;
    }

    ctx->pc = 0x1baf78u;

    // 0x1baf78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1baf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1baf7c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAF7Cu;
    {
        const bool branch_taken_0x1baf7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF7Cu;
            // 0x1baf80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf7c) {
            ctx->pc = 0x1BAF98u;
            goto label_1baf98;
        }
    }
    ctx->pc = 0x1BAF84u;
    // 0x1baf84: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1baf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1baf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baf8c: 0x24848630  addiu       $a0, $a0, -0x79D0
    ctx->pc = 0x1baf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936112));
    // 0x1baf90: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1BAF90u;
    ctx->pc = 0x1BAF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF90u;
            // 0x1baf94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (runtime->hasFunction(0x1AE828u)) {
        auto targetFn = runtime->lookupFunction(0x1AE828u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BAF98u;
label_1baf98:
    // 0x1baf98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1baf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1baf9c: 0xa0850070  sb          $a1, 0x70($a0)
    ctx->pc = 0x1baf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 5));
    // 0x1bafa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFA0u;
            // 0x1bafa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAFA8u;
label_1bafa8:
    // 0x1bafa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bafa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bafac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bafacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bafb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bafb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bafb4: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BAFB4u;
    SET_GPR_U32(ctx, 31, 0x1BAFBCu);
    ctx->pc = 0x1BAFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFB4u;
            // 0x1bafb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFBCu; }
        if (ctx->pc != 0x1BAFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFBCu; }
        if (ctx->pc != 0x1BAFBCu) { return; }
    }
    ctx->pc = 0x1BAFBCu;
label_1bafbc:
    // 0x1bafbc: 0xc06ebf8  jal         func_1BAFE0
    ctx->pc = 0x1BAFBCu;
    SET_GPR_U32(ctx, 31, 0x1BAFC4u);
    ctx->pc = 0x1BAFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFBCu;
            // 0x1bafc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAFE0u;
    if (runtime->hasFunction(0x1BAFE0u)) {
        auto targetFn = runtime->lookupFunction(0x1BAFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFC4u; }
        if (ctx->pc != 0x1BAFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BAFE0_0x1bafe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFC4u; }
        if (ctx->pc != 0x1BAFC4u) { return; }
    }
    ctx->pc = 0x1BAFC4u;
label_1bafc4:
    // 0x1bafc4: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BAFC4u;
    SET_GPR_U32(ctx, 31, 0x1BAFCCu);
    ctx->pc = 0x1BAFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFC4u;
            // 0x1bafc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFCCu; }
        if (ctx->pc != 0x1BAFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD270_0x1ad270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFCCu; }
        if (ctx->pc != 0x1BAFCCu) { return; }
    }
    ctx->pc = 0x1BAFCCu;
label_1bafcc:
    // 0x1bafcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bafccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bafd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bafd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bafd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bafd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAFD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFD8u;
            // 0x1bafdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BAFE0u;
    ctx->pc = 0x1bafe0u;
}
