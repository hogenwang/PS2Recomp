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

// Function: sub_0027FF40
// Address: 0x27ff40 - 0x280060
void sub_0027FF40_0x27ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FF40_0x27ff40");
#endif

    switch (ctx->pc) {
        case 0x27ff40u: goto label_27ff40;
        case 0x27ff44u: goto label_27ff44;
        case 0x27ff48u: goto label_27ff48;
        case 0x27ff4cu: goto label_27ff4c;
        case 0x27ff50u: goto label_27ff50;
        case 0x27ff54u: goto label_27ff54;
        case 0x27ff58u: goto label_27ff58;
        case 0x27ff5cu: goto label_27ff5c;
        case 0x27ff60u: goto label_27ff60;
        case 0x27ff64u: goto label_27ff64;
        case 0x27ff68u: goto label_27ff68;
        case 0x27ff6cu: goto label_27ff6c;
        case 0x27ff70u: goto label_27ff70;
        case 0x27ff74u: goto label_27ff74;
        case 0x27ff78u: goto label_27ff78;
        case 0x27ff7cu: goto label_27ff7c;
        case 0x27ff80u: goto label_27ff80;
        case 0x27ff84u: goto label_27ff84;
        case 0x27ff88u: goto label_27ff88;
        case 0x27ff8cu: goto label_27ff8c;
        case 0x27ff90u: goto label_27ff90;
        case 0x27ff94u: goto label_27ff94;
        case 0x27ff98u: goto label_27ff98;
        case 0x27ff9cu: goto label_27ff9c;
        case 0x27ffa0u: goto label_27ffa0;
        case 0x27ffa4u: goto label_27ffa4;
        case 0x27ffa8u: goto label_27ffa8;
        case 0x27ffacu: goto label_27ffac;
        case 0x27ffb0u: goto label_27ffb0;
        case 0x27ffb4u: goto label_27ffb4;
        case 0x27ffb8u: goto label_27ffb8;
        case 0x27ffbcu: goto label_27ffbc;
        case 0x27ffc0u: goto label_27ffc0;
        case 0x27ffc4u: goto label_27ffc4;
        case 0x27ffc8u: goto label_27ffc8;
        case 0x27ffccu: goto label_27ffcc;
        case 0x27ffd0u: goto label_27ffd0;
        case 0x27ffd4u: goto label_27ffd4;
        case 0x27ffd8u: goto label_27ffd8;
        case 0x27ffdcu: goto label_27ffdc;
        case 0x27ffe0u: goto label_27ffe0;
        case 0x27ffe4u: goto label_27ffe4;
        case 0x27ffe8u: goto label_27ffe8;
        case 0x27ffecu: goto label_27ffec;
        case 0x27fff0u: goto label_27fff0;
        case 0x27fff4u: goto label_27fff4;
        case 0x27fff8u: goto label_27fff8;
        case 0x27fffcu: goto label_27fffc;
        case 0x280000u: goto label_280000;
        case 0x280004u: goto label_280004;
        case 0x280008u: goto label_280008;
        case 0x28000cu: goto label_28000c;
        case 0x280010u: goto label_280010;
        case 0x280014u: goto label_280014;
        case 0x280018u: goto label_280018;
        case 0x28001cu: goto label_28001c;
        case 0x280020u: goto label_280020;
        case 0x280024u: goto label_280024;
        case 0x280028u: goto label_280028;
        case 0x28002cu: goto label_28002c;
        case 0x280030u: goto label_280030;
        case 0x280034u: goto label_280034;
        case 0x280038u: goto label_280038;
        case 0x28003cu: goto label_28003c;
        case 0x280040u: goto label_280040;
        case 0x280044u: goto label_280044;
        case 0x280048u: goto label_280048;
        case 0x28004cu: goto label_28004c;
        case 0x280050u: goto label_280050;
        case 0x280054u: goto label_280054;
        case 0x280058u: goto label_280058;
        case 0x28005cu: goto label_28005c;
        default: break;
    }

    ctx->pc = 0x27ff40u;

label_27ff40:
    // 0x27ff40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27ff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_27ff44:
    // 0x27ff44: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x27ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_27ff48:
    // 0x27ff48: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_27ff4c:
    // 0x27ff4c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x27ff4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_27ff50:
    // 0x27ff50: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27ff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_27ff54:
    // 0x27ff54: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x27ff54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27ff58:
    // 0x27ff58: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_27ff5c:
    // 0x27ff5c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x27ff5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27ff60:
    // 0x27ff60: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_27ff64:
    // 0x27ff64: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27ff64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27ff68:
    // 0x27ff68: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x27ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_27ff6c:
    // 0x27ff6c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27ff6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27ff70:
    // 0x27ff70: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_27ff74:
    // 0x27ff74: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27ff74u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ff78:
    // 0x27ff78: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_27ff7c:
    // 0x27ff7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27ff7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27ff80:
    // 0x27ff80: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_27ff84:
    // 0x27ff84: 0xc0a5b7e  jal         func_296DF8
label_27ff88:
    if (ctx->pc == 0x27FF88u) {
        ctx->pc = 0x27FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF84u;
        // 0x27ff88: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FF8Cu;
        goto label_27ff8c;
    }
    ctx->pc = 0x27FF84u;
    SET_GPR_U32(ctx, 31, 0x27FF8Cu);
    ctx->pc = 0x27FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF84u;
    // 0x27ff88: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DF8u, 0x27FF84u, 0x27FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF8Cu;
label_27ff8c:
    // 0x27ff8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ff8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ff90:
    // 0x27ff90: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
label_27ff94:
    if (ctx->pc == 0x27FF94u) {
        ctx->pc = 0x27FF98u;
        goto label_27ff98;
    }
    ctx->pc = 0x27FF90u;
    {
        const bool branch_taken_0x27ff90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ff90) {
            ctx->pc = 0x280008u;
            goto label_280008;
        }
    }
    ctx->pc = 0x27FF98u;
label_27ff98:
    // 0x27ff98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27ff9c:
    // 0x27ff9c: 0x280f809  jalr        $s4
label_27ffa0:
    if (ctx->pc == 0x27FFA0u) {
        ctx->pc = 0x27FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF9Cu;
        // 0x27ffa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFA4u;
        goto label_27ffa4;
    }
    ctx->pc = 0x27FF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x27FFA4u);
        ctx->pc = 0x27FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF9Cu;
        // 0x27ffa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FF9Cu, 0x27FFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27FFA4u;
label_27ffa4:
    // 0x27ffa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27ffa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ffa8:
    // 0x27ffa8: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_27ffac:
    if (ctx->pc == 0x27FFACu) {
        ctx->pc = 0x27FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFA8u;
        // 0x27ffac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFB0u;
        goto label_27ffb0;
    }
    ctx->pc = 0x27FFA8u;
    {
        const bool branch_taken_0x27ffa8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x27FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFA8u;
        // 0x27ffac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffa8) {
            ctx->pc = 0x27FFC8u;
            goto label_27ffc8;
        }
    }
    ctx->pc = 0x27FFB0u;
label_27ffb0:
    // 0x27ffb0: 0xc0a8bf6  jal         func_2A2FD8
label_27ffb4:
    if (ctx->pc == 0x27FFB4u) {
        ctx->pc = 0x27FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFB0u;
        // 0x27ffb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFB8u;
        goto label_27ffb8;
    }
    ctx->pc = 0x27FFB0u;
    SET_GPR_U32(ctx, 31, 0x27FFB8u);
    ctx->pc = 0x27FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFB0u;
    // 0x27ffb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x27FFB0u, 0x27FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFB8u;
label_27ffb8:
    // 0x27ffb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27ffb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ffbc:
    // 0x27ffbc: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_27ffc0:
    if (ctx->pc == 0x27FFC0u) {
        ctx->pc = 0x27FFC4u;
        goto label_27ffc4;
    }
    ctx->pc = 0x27FFBCu;
    {
        const bool branch_taken_0x27ffbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ffbc) {
            ctx->pc = 0x280018u;
            goto label_280018;
        }
    }
    ctx->pc = 0x27FFC4u;
label_27ffc4:
    // 0x27ffc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27ffc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27ffc8:
    // 0x27ffc8: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x27ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_27ffcc:
    // 0x27ffcc: 0x280f809  jalr        $s4
label_27ffd0:
    if (ctx->pc == 0x27FFD0u) {
        ctx->pc = 0x27FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFCCu;
        // 0x27ffd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFD4u;
        goto label_27ffd4;
    }
    ctx->pc = 0x27FFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x27FFD4u);
        ctx->pc = 0x27FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFCCu;
        // 0x27ffd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FFCCu, 0x27FFD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27FFD4u;
label_27ffd4:
    // 0x27ffd4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x27ffd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27ffd8:
    // 0x27ffd8: 0xc0a5102  jal         func_294408
label_27ffdc:
    if (ctx->pc == 0x27FFDCu) {
        ctx->pc = 0x27FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFD8u;
        // 0x27ffdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFE0u;
        goto label_27ffe0;
    }
    ctx->pc = 0x27FFD8u;
    SET_GPR_U32(ctx, 31, 0x27FFE0u);
    ctx->pc = 0x27FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFD8u;
    // 0x27ffdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x27FFD8u, 0x27FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFE0u;
label_27ffe0:
    // 0x27ffe0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27ffe4:
    if (ctx->pc == 0x27FFE4u) {
        ctx->pc = 0x27FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFE0u;
        // 0x27ffe4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFE8u;
        goto label_27ffe8;
    }
    ctx->pc = 0x27FFE0u;
    {
        const bool branch_taken_0x27ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFE0u;
        // 0x27ffe4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffe0) {
            ctx->pc = 0x280008u;
            goto label_280008;
        }
    }
    ctx->pc = 0x27FFE8u;
label_27ffe8:
    // 0x27ffe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27ffec:
    // 0x27ffec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27ffecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27fff0:
    // 0x27fff0: 0xc0a513c  jal         func_2944F0
label_27fff4:
    if (ctx->pc == 0x27FFF4u) {
        ctx->pc = 0x27FFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFF0u;
        // 0x27fff4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27FFF8u;
        goto label_27fff8;
    }
    ctx->pc = 0x27FFF0u;
    SET_GPR_U32(ctx, 31, 0x27FFF8u);
    ctx->pc = 0x27FFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFF0u;
    // 0x27fff4: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x27FFF0u, 0x27FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFF8u;
label_27fff8:
    // 0x27fff8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27fff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27fffc:
    // 0x27fffc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x27fffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_280000:
    // 0x280000: 0xc0a5148  jal         func_294520
label_280004:
    if (ctx->pc == 0x280004u) {
        ctx->pc = 0x280004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280000u;
        // 0x280004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280008u;
        goto label_280008;
    }
    ctx->pc = 0x280000u;
    SET_GPR_U32(ctx, 31, 0x280008u);
    ctx->pc = 0x280004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280000u;
    // 0x280004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x280000u, 0x280008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280008u;
label_280008:
    // 0x280008: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_28000c:
    if (ctx->pc == 0x28000Cu) {
        ctx->pc = 0x280010u;
        goto label_280010;
    }
    ctx->pc = 0x280008u;
    {
        const bool branch_taken_0x280008 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x280008) {
            ctx->pc = 0x280018u;
            goto label_280018;
        }
    }
    ctx->pc = 0x280010u;
label_280010:
    // 0x280010: 0xc0a8c0a  jal         func_2A3028
label_280014:
    if (ctx->pc == 0x280014u) {
        ctx->pc = 0x280014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280010u;
        // 0x280014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280018u;
        goto label_280018;
    }
    ctx->pc = 0x280010u;
    SET_GPR_U32(ctx, 31, 0x280018u);
    ctx->pc = 0x280014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280010u;
    // 0x280014: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x280010u, 0x280018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280018u;
label_280018:
    // 0x280018: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_28001c:
    if (ctx->pc == 0x28001Cu) {
        ctx->pc = 0x28001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280018u;
        // 0x28001c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280020u;
        goto label_280020;
    }
    ctx->pc = 0x280018u;
    {
        const bool branch_taken_0x280018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280018u;
        // 0x28001c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280018) {
            ctx->pc = 0x28002Cu;
            goto label_28002c;
        }
    }
    ctx->pc = 0x280020u;
label_280020:
    // 0x280020: 0xc0a5b9c  jal         func_296E70
label_280024:
    if (ctx->pc == 0x280024u) {
        ctx->pc = 0x280024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280020u;
        // 0x280024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280028u;
        goto label_280028;
    }
    ctx->pc = 0x280020u;
    SET_GPR_U32(ctx, 31, 0x280028u);
    ctx->pc = 0x280024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280020u;
    // 0x280024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296E70u, 0x280020u, 0x280028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280028u;
label_280028:
    // 0x280028: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x280028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28002c:
    // 0x28002c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x28002cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_280030:
    // 0x280030: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x280030u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_280034:
    // 0x280034: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x280034u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_280038:
    // 0x280038: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x280038u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_28003c:
    // 0x28003c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x28003cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_280040:
    // 0x280040: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x280040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_280044:
    // 0x280044: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x280044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_280048:
    // 0x280048: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x280048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28004c:
    // 0x28004c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28004cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_280050:
    // 0x280050: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x280050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_280054:
    // 0x280054: 0x3e00008  jr          $ra
label_280058:
    if (ctx->pc == 0x280058u) {
        ctx->pc = 0x280058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280054u;
        // 0x280058: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28005Cu;
        goto label_28005c;
    }
    ctx->pc = 0x280054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280054u;
        // 0x280058: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28005Cu;
label_28005c:
    // 0x28005c: 0x0  nop
    ctx->pc = 0x28005cu;
    // NOP
    if (ctx->pc == 0x28005cu) { ctx->pc = 0x280060u; }
}
