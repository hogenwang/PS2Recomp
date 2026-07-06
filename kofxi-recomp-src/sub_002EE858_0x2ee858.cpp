#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EE858
// Address: 0x2ee858 - 0x2ee8d8
void sub_002EE858_0x2ee858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE858_0x2ee858");
#endif

    switch (ctx->pc) {
        case 0x2ee88cu: goto label_2ee88c;
        case 0x2ee8a0u: goto label_2ee8a0;
        case 0x2ee8a4u: goto label_2ee8a4;
        case 0x2ee8a8u: goto label_2ee8a8;
        case 0x2ee8b8u: goto label_2ee8b8;
        default: break;
    }

    ctx->pc = 0x2ee858u;

    // 0x2ee858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee85c: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ee85cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ee860: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ee860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ee864: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2ee864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ee868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee86c: 0x25f1eca8  addiu       $s1, $t7, -0x1358
    ctx->pc = 0x2ee86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ee870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ee870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ee874: 0x8e2e005c  lw          $t6, 0x5C($s1)
    ctx->pc = 0x2ee874u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2ee878: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x2ee878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2ee87c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2ee87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ee880: 0xce3023  subu        $a2, $a2, $t6
    ctx->pc = 0x2ee880u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x2ee884: 0xc08909c  jal         func_224270
    ctx->pc = 0x2EE884u;
    SET_GPR_U32(ctx, 31, 0x2EE88Cu);
    ctx->pc = 0x2EE888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE884u;
            // 0x2ee888: 0xae2821  addu        $a1, $a1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224270u;
    if (runtime->hasFunction(0x224270u)) {
        auto targetFn = runtime->lookupFunction(0x224270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE88Cu; }
        if (ctx->pc != 0x2EE88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224270_0x224270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE88Cu; }
        if (ctx->pc != 0x2EE88Cu) { return; }
    }
    ctx->pc = 0x2EE88Cu;
label_2ee88c:
    // 0x2ee88c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee890: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EE890u;
    {
        const bool branch_taken_0x2ee890 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2EE894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE890u;
            // 0x2ee894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee890) {
            ctx->pc = 0x2EE8B8u;
            goto label_2ee8b8;
        }
    }
    ctx->pc = 0x2EE898u;
    // 0x2ee898: 0xc0bb75c  jal         func_2EDD70
    ctx->pc = 0x2EE898u;
    SET_GPR_U32(ctx, 31, 0x2EE8A0u);
    ctx->pc = 0x2EDD70u;
    if (runtime->hasFunction(0x2EDD70u)) {
        auto targetFn = runtime->lookupFunction(0x2EDD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE8A0u; }
        if (ctx->pc != 0x2EE8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EDD70_0x2edd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE8A0u; }
        if (ctx->pc != 0x2EE8A0u) { return; }
    }
    ctx->pc = 0x2EE8A0u;
label_2ee8a0:
    // 0x2ee8a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ee8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ee8a4:
    // 0x2ee8a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee8a8:
    // 0x2ee8a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee8ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ee8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8B0u;
            // 0x2ee8b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EE8B8u;
label_2ee8b8:
    // 0x2ee8b8: 0x5200fffb  beql        $s0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EE8B8u;
    {
        const bool branch_taken_0x2ee8b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee8b8) {
            ctx->pc = 0x2EE8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8B8u;
            // 0x2ee8bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EE8A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee8a8;
        }
    }
    ctx->pc = 0x2EE8C0u;
    // 0x2ee8c0: 0x8e2f005c  lw          $t7, 0x5C($s1)
    ctx->pc = 0x2ee8c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2ee8c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ee8c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee8c8: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x2ee8c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x2ee8cc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x2EE8CCu;
    {
        const bool branch_taken_0x2ee8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE8CCu;
            // 0x2ee8d0: 0xae2f005c  sw          $t7, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee8cc) {
            ctx->pc = 0x2EE8A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee8a4;
        }
    }
    ctx->pc = 0x2EE8D4u;
    // 0x2ee8d4: 0x0  nop
    ctx->pc = 0x2ee8d4u;
    // NOP
    ctx->pc = 0x2ee8d8u;
}
