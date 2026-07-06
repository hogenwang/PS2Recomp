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

// Function: sub_0028B148
// Address: 0x28b148 - 0x28b208
void sub_0028B148_0x28b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B148_0x28b148");
#endif

    switch (ctx->pc) {
        case 0x28b1a4u: goto label_28b1a4;
        case 0x28b1b8u: goto label_28b1b8;
        case 0x28b1d0u: goto label_28b1d0;
        default: break;
    }

    ctx->pc = 0x28b148u;

    // 0x28b148: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28b14c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x28b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x28b150: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28b154: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28b158: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28b158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b15c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28b15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28b160: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28b160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b164: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28b168: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28b168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b16c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b170: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28b174: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x28b174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b178: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x28b178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b17c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x28b17cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28b180: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28b184: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28b184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x28b188: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x28b188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x28b18c: 0x14a60007  bne         $a1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B18Cu;
    {
        const bool branch_taken_0x28b18c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x28B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B18Cu;
        // 0x28b190: 0x2038821  addu        $s1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b18c) {
            ctx->pc = 0x28B1ACu;
            goto label_28b1ac;
        }
    }
    ctx->pc = 0x28B194u;
    // 0x28b194: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28b194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b19c: 0xc0a2018  jal         func_288060
    ctx->pc = 0x28B19Cu;
    SET_GPR_U32(ctx, 31, 0x28B1A4u);
    ctx->pc = 0x28B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B19Cu;
    // 0x28b1a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288060u, 0x28B19Cu, 0x28B1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1A4u;
label_28b1a4:
    // 0x28b1a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28B1A4u;
    {
        const bool branch_taken_0x28b1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1a4) {
            ctx->pc = 0x28B1B8u;
            goto label_28b1b8;
        }
    }
    ctx->pc = 0x28B1ACu;
label_28b1ac:
    // 0x28b1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1b0: 0xc0a1f22  jal         func_287C88
    ctx->pc = 0x28B1B0u;
    SET_GPR_U32(ctx, 31, 0x28B1B8u);
    ctx->pc = 0x28B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1B0u;
    // 0x28b1b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C88u, 0x28B1B0u, 0x28B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1B8u;
label_28b1b8:
    // 0x28b1b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B1B8u;
    {
        const bool branch_taken_0x28b1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1B8u;
        // 0x28b1bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1b8) {
            ctx->pc = 0x28B1D4u;
            goto label_28b1d4;
        }
    }
    ctx->pc = 0x28B1C0u;
    // 0x28b1c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28b1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1c8: 0xc0a18ea  jal         func_2863A8
    ctx->pc = 0x28B1C8u;
    SET_GPR_U32(ctx, 31, 0x28B1D0u);
    ctx->pc = 0x28B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1C8u;
    // 0x28b1cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863A8u, 0x28B1C8u, 0x28B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1D0u;
label_28b1d0:
    // 0x28b1d0: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x28b1d0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28b1d4:
    // 0x28b1d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b1d8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28b1d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28b1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b1e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28b1e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28b1e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b1e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x28b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28b1ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28b1ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b1f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28b1f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b1f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28b1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b1f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b1f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x28B1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1FCu;
        // 0x28b200: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B204u;
    // 0x28b204: 0x0  nop
    ctx->pc = 0x28b204u;
    // NOP
    if (ctx->pc == 0x28b204u) { ctx->pc = 0x28b208u; }
}
