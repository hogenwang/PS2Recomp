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

// Function: sub_0020F5B0
// Address: 0x20f5b0 - 0x20f658
void sub_0020F5B0_0x20f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F5B0_0x20f5b0");
#endif

    switch (ctx->pc) {
        case 0x20f5c8u: goto label_20f5c8;
        case 0x20f5e4u: goto label_20f5e4;
        case 0x20f5fcu: goto label_20f5fc;
        case 0x20f620u: goto label_20f620;
        case 0x20f640u: goto label_20f640;
        default: break;
    }

    ctx->pc = 0x20f5b0u;

    // 0x20f5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f5b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20f5bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f5c0: 0xc089014  jal         func_224050
    ctx->pc = 0x20F5C0u;
    SET_GPR_U32(ctx, 31, 0x20F5C8u);
    ctx->pc = 0x20F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5C0u;
    // 0x20f5c4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224050u, 0x20F5C0u, 0x20F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5C8u;
label_20f5c8:
    // 0x20f5c8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f5cc: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f5d0: 0x2484fc28  addiu       $a0, $a0, -0x3D8
    ctx->pc = 0x20f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966312));
    // 0x20f5d4: 0x24e7fc40  addiu       $a3, $a3, -0x3C0
    ctx->pc = 0x20f5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966336));
    // 0x20f5d8: 0x240500dd  addiu       $a1, $zero, 0xDD
    ctx->pc = 0x20f5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x20f5dc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F5DCu;
    SET_GPR_U32(ctx, 31, 0x20F5E4u);
    ctx->pc = 0x20F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5DCu;
    // 0x20f5e0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F5DCu, 0x20F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5E4u;
label_20f5e4:
    // 0x20f5e4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f5e8: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x20f5e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20f5ec: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F5ECu;
    {
        const bool branch_taken_0x20f5ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F5ECu;
        // 0x20f5f0: 0x2484fbb8  addiu       $a0, $a0, -0x448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f5ec) {
            ctx->pc = 0x20F608u;
            goto label_20f608;
        }
    }
    ctx->pc = 0x20F5F4u;
    // 0x20f5f4: 0xc089e80  jal         func_227A00
    ctx->pc = 0x20F5F4u;
    SET_GPR_U32(ctx, 31, 0x20F5FCu);
    ctx->pc = 0x20F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F5F4u;
    // 0x20f5f8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A00u, 0x20F5F4u, 0x20F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F5FCu;
label_20f5fc:
    // 0x20f5fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x20f600: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20f600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20f604: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x20f604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_20f608:
    // 0x20f608: 0x8e0f001c  lw          $t7, 0x1C($s0)
    ctx->pc = 0x20f608u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x20f60c: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F60Cu;
    {
        const bool branch_taken_0x20f60c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F60Cu;
        // 0x20f610: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f60c) {
            ctx->pc = 0x20F62Cu;
            goto label_20f62c;
        }
    }
    ctx->pc = 0x20F614u;
    // 0x20f614: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x20f614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x20f618: 0xc089e80  jal         func_227A00
    ctx->pc = 0x20F618u;
    SET_GPR_U32(ctx, 31, 0x20F620u);
    ctx->pc = 0x20F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F618u;
    // 0x20f61c: 0x2484fbc8  addiu       $a0, $a0, -0x438 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227A00u, 0x20F618u, 0x20F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F620u;
label_20f620:
    // 0x20f620: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x20f620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x20f624: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20f624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x20f628: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x20f628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_20f62c:
    // 0x20f62c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x20f62cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20f630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f634: 0xae0f0024  sw          $t7, 0x24($s0)
    ctx->pc = 0x20f634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 15));
    // 0x20f638: 0xc083c8c  jal         func_20F230
    ctx->pc = 0x20F638u;
    SET_GPR_U32(ctx, 31, 0x20F640u);
    ctx->pc = 0x20F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F638u;
    // 0x20f63c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F230u, 0x20F638u, 0x20F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F640u;
label_20f640:
    // 0x20f640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20f644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20f648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F64Cu;
        // 0x20f650: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F654u;
    // 0x20f654: 0x0  nop
    ctx->pc = 0x20f654u;
    // NOP
}
