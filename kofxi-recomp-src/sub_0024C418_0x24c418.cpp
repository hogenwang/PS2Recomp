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

// Function: sub_0024C418
// Address: 0x24c418 - 0x24c4c0
void sub_0024C418_0x24c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C418_0x24c418");
#endif

    switch (ctx->pc) {
        case 0x24c448u: goto label_24c448;
        case 0x24c474u: goto label_24c474;
        case 0x24c498u: goto label_24c498;
        case 0x24c4a8u: goto label_24c4a8;
        default: break;
    }

    ctx->pc = 0x24c418u;

    // 0x24c418: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24c41c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x24c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x24c420: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24c424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c428: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x24c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x24c42c: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x24c42cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x24c430: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x24C430u;
    {
        const bool branch_taken_0x24c430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C430u;
        // 0x24c434: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c430) {
            ctx->pc = 0x24C4ACu;
            goto label_24c4ac;
        }
    }
    ctx->pc = 0x24C438u;
    // 0x24c438: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x24c438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x24c43c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c440: 0xc048c96  jal         func_123258
    ctx->pc = 0x24C440u;
    SET_GPR_U32(ctx, 31, 0x24C448u);
    ctx->pc = 0x24C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C440u;
    // 0x24c444: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x24C440u, 0x24C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C448u;
label_24c448:
    // 0x24c448: 0x26220024  addiu       $v0, $s1, 0x24
    ctx->pc = 0x24c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x24c44c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24c450: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x24c450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x24c454: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24c454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24c458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c45c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x24c45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x24c460: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x24c460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x24c464: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x24c464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24c468: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x24c468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x24c46c: 0xc091502  jal         func_245408
    ctx->pc = 0x24C46Cu;
    SET_GPR_U32(ctx, 31, 0x24C474u);
    ctx->pc = 0x24C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C46Cu;
    // 0x24c470: 0x8e060034  lw          $a2, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245408u, 0x24C46Cu, 0x24C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C474u;
label_24c474:
    // 0x24c474: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x24c474u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x24c478: 0x31020010  andi        $v0, $t0, 0x10
    ctx->pc = 0x24c478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x24c47c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C47Cu;
    {
        const bool branch_taken_0x24c47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C47Cu;
        // 0x24c480: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c47c) {
            ctx->pc = 0x24C4A0u;
            goto label_24c4a0;
        }
    }
    ctx->pc = 0x24C484u;
    // 0x24c484: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x24c484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x24c488: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x24c488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24c48c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24c48cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c490: 0xc090d8e  jal         func_243638
    ctx->pc = 0x24C490u;
    SET_GPR_U32(ctx, 31, 0x24C498u);
    ctx->pc = 0x24C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C490u;
    // 0x24c494: 0x8e060030  lw          $a2, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x24C490u, 0x24C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C498u;
label_24c498:
    // 0x24c498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24C498u;
    {
        const bool branch_taken_0x24c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C498u;
        // 0x24c49c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c498) {
            ctx->pc = 0x24C4ACu;
            goto label_24c4ac;
        }
    }
    ctx->pc = 0x24C4A0u;
label_24c4a0:
    // 0x24c4a0: 0xc090c4c  jal         func_243130
    ctx->pc = 0x24C4A0u;
    SET_GPR_U32(ctx, 31, 0x24C4A8u);
    ctx->pc = 0x24C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4A0u;
    // 0x24c4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x24C4A0u, 0x24C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4A8u;
label_24c4a8:
    // 0x24c4a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24c4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24c4ac:
    // 0x24c4ac: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x24c4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c4b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x24c4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4B4u;
        // 0x24c4b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C4BCu;
    // 0x24c4bc: 0x0  nop
    ctx->pc = 0x24c4bcu;
    // NOP
    if (ctx->pc == 0x24c4bcu) { ctx->pc = 0x24c4c0u; }
}
