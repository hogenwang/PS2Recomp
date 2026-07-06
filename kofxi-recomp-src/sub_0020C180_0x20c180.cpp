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

// Function: sub_0020C180
// Address: 0x20c180 - 0x20c2e0
void sub_0020C180_0x20c180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C180_0x20c180");
#endif

    switch (ctx->pc) {
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b4u: goto label_20c1b4;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c20cu: goto label_20c20c;
        case 0x20c214u: goto label_20c214;
        case 0x20c220u: goto label_20c220;
        case 0x20c230u: goto label_20c230;
        case 0x20c244u: goto label_20c244;
        case 0x20c268u: goto label_20c268;
        case 0x20c2b0u: goto label_20c2b0;
        default: break;
    }

    ctx->pc = 0x20c180u;

    // 0x20c180: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x20c180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x20c184: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c188: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x20c188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x20c18c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20c18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20c190: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20c190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20c194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20c194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20c198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20c19c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c1a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20c1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1a4: 0xc083044  jal         func_20C110
    ctx->pc = 0x20C1A4u;
    SET_GPR_U32(ctx, 31, 0x20C1ACu);
    ctx->pc = 0x20C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C1A4u;
    // 0x20c1a8: 0xac40a498  sw          $zero, -0x5B68($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943896), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C110u, 0x20C1A4u, 0x20C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1ACu;
label_20c1ac:
    // 0x20c1ac: 0xc08303c  jal         func_20C0F0
    ctx->pc = 0x20C1ACu;
    SET_GPR_U32(ctx, 31, 0x20C1B4u);
    ctx->pc = 0x20C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C1ACu;
    // 0x20c1b0: 0x26140400  addiu       $s4, $s0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C0F0u, 0x20C1ACu, 0x20C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1B4u;
label_20c1b4:
    // 0x20c1b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20c1b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20c1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c1bc:
    // 0x20c1bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20c1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20c1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1c4: 0x0  nop
    ctx->pc = 0x20c1c4u;
    // NOP
label_20c1c8:
    // 0x20c1c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1cc: 0xc040454  jal         func_101150
    ctx->pc = 0x20C1CCu;
    SET_GPR_U32(ctx, 31, 0x20C1D4u);
    ctx->pc = 0x20C1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C1CCu;
    // 0x20c1d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x20C1CCu, 0x20C1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C1D4u;
label_20c1d4:
    // 0x20c1d4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c1d8: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x20c1d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20c1dc: 0x8c42a498  lw          $v0, -0x5B68($v0)
    ctx->pc = 0x20c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943896)));
    // 0x20c1e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20c1e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x20c1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c1e8: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x20c1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x20c1ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20c1ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20c1f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20c1f8: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x20c1f8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c1fc: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x20c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x20c200: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x20c200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x20c204: 0xc040532  jal         func_1014C8
    ctx->pc = 0x20C204u;
    SET_GPR_U32(ctx, 31, 0x20C20Cu);
    ctx->pc = 0x20C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C204u;
    // 0x20c208: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x20C204u, 0x20C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C20Cu;
label_20c20c:
    // 0x20c20c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C20Cu;
    SET_GPR_U32(ctx, 31, 0x20C214u);
    ctx->pc = 0x20C210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C20Cu;
    // 0x20c210: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20C20Cu, 0x20C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C214u;
label_20c214:
    // 0x20c214: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20c214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20c218: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x20C218u;
    SET_GPR_U32(ctx, 31, 0x20C220u);
    ctx->pc = 0x20C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C218u;
    // 0x20c21c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x20C218u, 0x20C220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C220u;
label_20c220:
    // 0x20c220: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c228: 0xc040454  jal         func_101150
    ctx->pc = 0x20C228u;
    SET_GPR_U32(ctx, 31, 0x20C230u);
    ctx->pc = 0x20C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C228u;
    // 0x20c22c: 0x26940400  addiu       $s4, $s4, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x20C228u, 0x20C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C230u;
label_20c230:
    // 0x20c230: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20c234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c238: 0x8c46a498  lw          $a2, -0x5B68($v0)
    ctx->pc = 0x20c238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943896)));
    // 0x20c23c: 0xc082ef4  jal         func_20BBD0
    ctx->pc = 0x20C23Cu;
    SET_GPR_U32(ctx, 31, 0x20C244u);
    ctx->pc = 0x20C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C23Cu;
    // 0x20c240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BBD0u, 0x20C23Cu, 0x20C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C244u;
label_20c244:
    // 0x20c244: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20c244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20c248: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c24c: 0x8c85a498  lw          $a1, -0x5B68($a0)
    ctx->pc = 0x20c24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943896)));
    // 0x20c250: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x20c250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20c254: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x20c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x20c258: 0x14a40007  bne         $a1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C258u;
    {
        const bool branch_taken_0x20c258 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x20C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C258u;
        // 0x20c25c: 0xac65a498  sw          $a1, -0x5B68($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943896), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c258) {
            ctx->pc = 0x20C278u;
            goto label_20c278;
        }
    }
    ctx->pc = 0x20C260u;
    // 0x20c260: 0xc083010  jal         func_20C040
    ctx->pc = 0x20C260u;
    SET_GPR_U32(ctx, 31, 0x20C268u);
    ctx->pc = 0x20C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C040u, 0x20C260u, 0x20C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C268u;
label_20c268:
    // 0x20c268: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c26c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c270: 0xac60a498  sw          $zero, -0x5B68($v1)
    ctx->pc = 0x20c270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943896), GPR_U32(ctx, 0));
    // 0x20c274: 0x0  nop
    ctx->pc = 0x20c274u;
    // NOP
label_20c278:
    // 0x20c278: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20c278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20c27c: 0x2a43000f  slti        $v1, $s2, 0xF
    ctx->pc = 0x20c27cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x20c280: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x20C280u;
    {
        const bool branch_taken_0x20c280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C280u;
        // 0x20c284: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c280) {
            ctx->pc = 0x20C1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c1c8;
        }
    }
    ctx->pc = 0x20C288u;
    // 0x20c288: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20c288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x20c28c: 0x2a630014  slti        $v1, $s3, 0x14
    ctx->pc = 0x20c28cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x20c290: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x20C290u;
    {
        const bool branch_taken_0x20c290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C290u;
        // 0x20c294: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c290) {
            ctx->pc = 0x20C1BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c1bc;
        }
    }
    ctx->pc = 0x20C298u;
    // 0x20c298: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x20c298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x20c29c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20c29cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x20c2a0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C2A0u;
    {
        const bool branch_taken_0x20c2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2a0) {
            ctx->pc = 0x20C2A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C2A0u;
            // 0x20c2a4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C2BCu;
            goto label_20c2bc;
        }
    }
    ctx->pc = 0x20C2A8u;
    // 0x20c2a8: 0xc083010  jal         func_20C040
    ctx->pc = 0x20C2A8u;
    SET_GPR_U32(ctx, 31, 0x20C2B0u);
    ctx->pc = 0x20C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C040u, 0x20C2A8u, 0x20C2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2B0u;
label_20c2b0:
    // 0x20c2b0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c2b4: 0xac60a498  sw          $zero, -0x5B68($v1)
    ctx->pc = 0x20c2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943896), GPR_U32(ctx, 0));
    // 0x20c2b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x20c2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_20c2bc:
    // 0x20c2bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20c2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20c2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20c2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20c2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20c2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x20C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2D0u;
        // 0x20c2d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C2D8u;
    // 0x20c2d8: 0x0  nop
    ctx->pc = 0x20c2d8u;
    // NOP
    // 0x20c2dc: 0x0  nop
    ctx->pc = 0x20c2dcu;
    // NOP
    if (ctx->pc == 0x20c2dcu) { ctx->pc = 0x20c2e0u; }
}
