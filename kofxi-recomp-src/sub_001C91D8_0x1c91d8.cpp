#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C91D8
// Address: 0x1c91d8 - 0x1c92a0
void sub_001C91D8_0x1c91d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C91D8_0x1c91d8");
#endif

    switch (ctx->pc) {
        case 0x1c9214u: goto label_1c9214;
        case 0x1c9264u: goto label_1c9264;
        default: break;
    }

    ctx->pc = 0x1c91d8u;

    // 0x1c91d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c91dc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c91dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c91e0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
    // 0x1c91e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c91e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c91e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c91e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c91ec: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C91ECu;
    {
        const bool branch_taken_0x1c91ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C91F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91ECu;
        // 0x1c91f0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91ec) {
            ctx->pc = 0x1C9204u;
            goto label_1c9204;
        }
    }
    ctx->pc = 0x1C91F4u;
    // 0x1c91f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c91f8: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
    // 0x1c91fc: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C91FCu;
    {
        const bool branch_taken_0x1c91fc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C91FCu;
        // 0x1c9200: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c91fc) {
            ctx->pc = 0x1C9294u;
            goto label_1c9294;
        }
    }
    ctx->pc = 0x1C9204u;
label_1c9204:
    // 0x1c9204: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c9204u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c9208: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c920c: 0xc06f818  jal         func_1BE060
    ctx->pc = 0x1C920Cu;
    SET_GPR_U32(ctx, 31, 0x1C9214u);
    ctx->pc = 0x1C9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C920Cu;
    // 0x1c9210: 0x2484b5b0  addiu       $a0, $a0, -0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE060u, 0x1C920Cu, 0x1C9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9214u;
label_1c9214:
    // 0x1c9214: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c9214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c9218: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1c9218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c921c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9220: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c9220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9224: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1c9224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c9228: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c922c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C922Cu;
    {
        const bool branch_taken_0x1c922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C922Cu;
        // 0x1c9230: 0x24705368  addiu       $s0, $v1, 0x5368 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 21352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c922c) {
            ctx->pc = 0x1C9240u;
            goto label_1c9240;
        }
    }
    ctx->pc = 0x1C9234u;
    // 0x1c9234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9234u;
    {
        const bool branch_taken_0x1c9234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9234u;
        // 0x1c9238: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9234) {
            ctx->pc = 0x1C9244u;
            goto label_1c9244;
        }
    }
    ctx->pc = 0x1C923Cu;
    // 0x1c923c: 0x0  nop
    ctx->pc = 0x1c923cu;
    // NOP
label_1c9240:
    // 0x1c9240: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x1c9240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_1c9244:
    // 0x1c9244: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c9244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c9248: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c9248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c924c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c924cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c9250: 0x9449537c  lhu         $t1, 0x537C($v0)
    ctx->pc = 0x1c9250u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 21372)));
    // 0x1c9254: 0x9462537e  lhu         $v0, 0x537E($v1)
    ctx->pc = 0x1c9254u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 21374)));
    // 0x1c9258: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1c9258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1c925c: 0xc07096e  jal         func_1C25B8
    ctx->pc = 0x1C925Cu;
    SET_GPR_U32(ctx, 31, 0x1C9264u);
    ctx->pc = 0x1C9260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C925Cu;
    // 0x1c9260: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C25B8u, 0x1C925Cu, 0x1C9264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9264u;
label_1c9264:
    // 0x1c9264: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x1c9264u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1c9268: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c9268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1c926c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1c926cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9270: 0x24635360  addiu       $v1, $v1, 0x5360
    ctx->pc = 0x1c9270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21344));
    // 0x1c9274: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c9274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c9278: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x1c9278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x1c927c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c927cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c9280: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1c9280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1c9284: 0xac805354  sw          $zero, 0x5354($a0)
    ctx->pc = 0x1c9284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 21332), GPR_U32(ctx, 0));
    // 0x1c9288: 0xaca05358  sw          $zero, 0x5358($a1)
    ctx->pc = 0x1c9288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 21336), GPR_U32(ctx, 0));
    // 0x1c928c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1c928cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1c9290: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c9290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c9294:
    // 0x1c9294: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c9294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c9298: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9298u;
        // 0x1c929c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C92A0u;
}
