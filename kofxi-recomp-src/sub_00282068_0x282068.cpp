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

// Function: sub_00282068
// Address: 0x282068 - 0x282228
void sub_00282068_0x282068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282068_0x282068");
#endif

    switch (ctx->pc) {
        case 0x2820b8u: goto label_2820b8;
        case 0x2820ecu: goto label_2820ec;
        case 0x28210cu: goto label_28210c;
        case 0x282130u: goto label_282130;
        case 0x28214cu: goto label_28214c;
        case 0x282160u: goto label_282160;
        case 0x282188u: goto label_282188;
        case 0x282198u: goto label_282198;
        case 0x2821c8u: goto label_2821c8;
        case 0x2821d4u: goto label_2821d4;
        default: break;
    }

    ctx->pc = 0x282068u;

    // 0x282068: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x282068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28206c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x28206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x282070: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x282070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x282074: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x282074u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282078: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x282078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x28207c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28207cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282080: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x282084: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x282084u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282088: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28208c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28208cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282090: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x282090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282094: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x282094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282098: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x282098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28209c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28209cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2820a0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2820a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2820a4: 0x8ef30004  lw          $s3, 0x4($s7)
    ctx->pc = 0x2820a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2820a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2820a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2820ac: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2820ACu;
    {
        const bool branch_taken_0x2820ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2820B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820ACu;
        // 0x2820b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820ac) {
            ctx->pc = 0x282120u;
            goto label_282120;
        }
    }
    ctx->pc = 0x2820B4u;
    // 0x2820b4: 0x0  nop
    ctx->pc = 0x2820b4u;
    // NOP
label_2820b8:
    // 0x2820b8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2820b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2820bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2820bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2820c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2820c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2820c4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2820C4u;
    {
        const bool branch_taken_0x2820c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2820C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820C4u;
        // 0x2820c8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820c4) {
            ctx->pc = 0x2820D4u;
            goto label_2820d4;
        }
    }
    ctx->pc = 0x2820CCu;
    // 0x2820cc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2820ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2820d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2820d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2820d4:
    // 0x2820d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2820d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2820d8: 0x10540009  beq         $v0, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2820D8u;
    {
        const bool branch_taken_0x2820d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2820DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2820D8u;
        // 0x2820dc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2820d8) {
            ctx->pc = 0x282100u;
            goto label_282100;
        }
    }
    ctx->pc = 0x2820E0u;
    // 0x2820e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2820e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2820e4: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2820E4u;
    SET_GPR_U32(ctx, 31, 0x2820ECu);
    ctx->pc = 0x2820E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2820E4u;
    // 0x2820e8: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x2820E4u, 0x2820ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2820ECu;
label_2820ec:
    // 0x2820ec: 0xae560010  sw          $s6, 0x10($s2)
    ctx->pc = 0x2820ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 22));
    // 0x2820f0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2820f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2820f4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2820f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2820f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2820f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2820fc: 0x8e14000c  lw          $s4, 0xC($s0)
    ctx->pc = 0x2820fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_282100:
    // 0x282100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282104: 0xc0a0756  jal         func_281D58
    ctx->pc = 0x282104u;
    SET_GPR_U32(ctx, 31, 0x28210Cu);
    ctx->pc = 0x282108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282104u;
    // 0x282108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281D58u, 0x282104u, 0x28210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28210Cu;
label_28210c:
    // 0x28210c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28210cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x282110: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x282110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x282114: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x282114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282118: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x282118u;
    {
        const bool branch_taken_0x282118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282118u;
        // 0x28211c: 0x2c2b021  addu        $s6, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282118) {
            ctx->pc = 0x2820B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2820b8;
        }
    }
    ctx->pc = 0x282120u;
label_282120:
    // 0x282120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x282120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282124: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x282124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282128: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x282128u;
    SET_GPR_U32(ctx, 31, 0x282130u);
    ctx->pc = 0x28212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282128u;
    // 0x28212c: 0x24060011  addiu       $a2, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x282128u, 0x282130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282130u;
label_282130:
    // 0x282130: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x282130u;
    {
        const bool branch_taken_0x282130 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x282134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282130u;
        // 0x282134: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282130) {
            ctx->pc = 0x28213Cu;
            goto label_28213c;
        }
    }
    ctx->pc = 0x282138u;
    // 0x282138: 0xae560010  sw          $s6, 0x10($s2)
    ctx->pc = 0x282138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 22));
label_28213c:
    // 0x28213c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28213cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282140: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x282140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282144: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x282144u;
    SET_GPR_U32(ctx, 31, 0x28214Cu);
    ctx->pc = 0x282148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282144u;
    // 0x282148: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2818E8u, 0x282144u, 0x28214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28214Cu;
label_28214c:
    // 0x28214c: 0x8ef0000c  lw          $s0, 0xC($s7)
    ctx->pc = 0x28214cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x282150: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x282150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282154: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x282154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282158: 0xc0a32e0  jal         func_28CB80
    ctx->pc = 0x282158u;
    SET_GPR_U32(ctx, 31, 0x282160u);
    ctx->pc = 0x28215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282158u;
    // 0x28215c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CB80u, 0x282158u, 0x282160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282160u;
label_282160:
    // 0x282160: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x282160u;
    {
        const bool branch_taken_0x282160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282160u;
        // 0x282164: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282160) {
            ctx->pc = 0x2821F4u;
            goto label_2821f4;
        }
    }
    ctx->pc = 0x282168u;
    // 0x282168: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x282168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28216c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28216cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x282170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282174: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x282174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x282178: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x282178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28217c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28217cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282180: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x282180u;
    SET_GPR_U32(ctx, 31, 0x282188u);
    ctx->pc = 0x282184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282180u;
    // 0x282184: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x282180u, 0x282188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282188u;
label_282188:
    // 0x282188: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x282188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28218c: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28218Cu;
    {
        const bool branch_taken_0x28218c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x282190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28218Cu;
        // 0x282190: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28218c) {
            ctx->pc = 0x2821E8u;
            goto label_2821e8;
        }
    }
    ctx->pc = 0x282194u;
    // 0x282194: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x282194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_282198:
    // 0x282198: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x282198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x28219c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2821a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2821a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2821a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2821a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2821a8: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2821A8u;
    {
        const bool branch_taken_0x2821a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2821ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821A8u;
        // 0x2821ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821a8) {
            ctx->pc = 0x2821C8u;
            goto label_2821c8;
        }
    }
    ctx->pc = 0x2821B0u;
    // 0x2821b0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2821b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2821b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2821b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2821b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2821b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2821bc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x2821bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2821c0: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2821C0u;
    SET_GPR_U32(ctx, 31, 0x2821C8u);
    ctx->pc = 0x2821C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2821C0u;
    // 0x2821c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281740u, 0x2821C0u, 0x2821C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821C8u;
label_2821c8:
    // 0x2821c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2821c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2821cc: 0xc0a0756  jal         func_281D58
    ctx->pc = 0x2821CCu;
    SET_GPR_U32(ctx, 31, 0x2821D4u);
    ctx->pc = 0x2821D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2821CCu;
    // 0x2821d0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281D58u, 0x2821CCu, 0x2821D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2821D4u;
label_2821d4:
    // 0x2821d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2821d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2821d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2821d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2821dc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2821dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2821e0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2821E0u;
    {
        const bool branch_taken_0x2821e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2821e0) {
            ctx->pc = 0x2821E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2821E0u;
            // 0x2821e4: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x282198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_282198;
        }
    }
    ctx->pc = 0x2821E8u;
label_2821e8:
    // 0x2821e8: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x2821e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
    // 0x2821ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2821ECu;
    {
        const bool branch_taken_0x2821ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2821F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2821ECu;
        // 0x2821f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2821ec) {
            ctx->pc = 0x2821F8u;
            goto label_2821f8;
        }
    }
    ctx->pc = 0x2821F4u;
label_2821f4:
    // 0x2821f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2821f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2821f8:
    // 0x2821f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2821f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2821fc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2821fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x282200: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x282200u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282204: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x282204u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282208: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x282208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28220c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x28220cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282210: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282214: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x282214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282218: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x282218u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28221c: 0x3e00008  jr          $ra
    ctx->pc = 0x28221Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28221Cu;
        // 0x282220: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28221Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282224u;
    // 0x282224: 0x0  nop
    ctx->pc = 0x282224u;
    // NOP
    if (ctx->pc == 0x282224u) { ctx->pc = 0x282228u; }
}
