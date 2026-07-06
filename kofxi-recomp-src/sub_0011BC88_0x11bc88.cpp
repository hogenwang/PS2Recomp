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

// Function: sub_0011BC88
// Address: 0x11bc88 - 0x11bf70
void sub_0011BC88_0x11bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BC88_0x11bc88");
#endif

    switch (ctx->pc) {
        case 0x11bcc0u: goto label_11bcc0;
        case 0x11bcd4u: goto label_11bcd4;
        case 0x11bd48u: goto label_11bd48;
        case 0x11bd5cu: goto label_11bd5c;
        case 0x11bd7cu: goto label_11bd7c;
        case 0x11bd88u: goto label_11bd88;
        case 0x11bdc4u: goto label_11bdc4;
        case 0x11bdf0u: goto label_11bdf0;
        case 0x11be10u: goto label_11be10;
        case 0x11bef0u: goto label_11bef0;
        case 0x11bef8u: goto label_11bef8;
        case 0x11bf28u: goto label_11bf28;
        case 0x11bf30u: goto label_11bf30;
        default: break;
    }

    ctx->pc = 0x11bc88u;

    // 0x11bc88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11bc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11bc8c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11bc90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11bc90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11bc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11bc98: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x11bc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x11bc9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bca0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x11bca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x11bca4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x11bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11bca8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11bca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11bcac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11bcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11bcb0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11bcb4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11bcb8: 0xc046e84  jal         func_11BA10
    ctx->pc = 0x11BCB8u;
    SET_GPR_U32(ctx, 31, 0x11BCC0u);
    ctx->pc = 0x11BCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCB8u;
    // 0x11bcbc: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA10u, 0x11BCB8u, 0x11BCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCC0u;
label_11bcc0:
    // 0x11bcc0: 0x1440009f  bnez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x11BCC0u;
    {
        const bool branch_taken_0x11bcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCC0u;
        // 0x11bcc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcc0) {
            ctx->pc = 0x11BF40u;
            goto label_11bf40;
        }
    }
    ctx->pc = 0x11BCC8u;
    // 0x11bcc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11bcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bccc: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x11BCCCu;
    SET_GPR_U32(ctx, 31, 0x11BCD4u);
    ctx->pc = 0x11BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCCCu;
    // 0x11bcd0: 0x3c150036  lui         $s5, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A8u, 0x11BCCCu, 0x11BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCD4u;
label_11bcd4:
    // 0x11bcd4: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x11bcd4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
    // 0x11bcd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bcdc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11bce0: 0xac629de4  sw          $v0, -0x621C($v1)
    ctx->pc = 0x11bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942180), GPR_U32(ctx, 2));
    // 0x11bce4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x11bce4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x11bce8: 0x8ea49e1c  lw          $a0, -0x61E4($s5)
    ctx->pc = 0x11bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942236)));
    // 0x11bcec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11bcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11bcf0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11bcf4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x11bcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x11bcf8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11bcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11bcfc: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x11bcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x11bd00: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x11bd00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x11bd04: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x11bd04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x11bd08: 0xac439e08  sw          $v1, -0x61F8($v0)
    ctx->pc = 0x11bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942216), GPR_U32(ctx, 3));
    // 0x11bd0c: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x11bd0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11bd10: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11bd14: 0xaca39e0c  sw          $v1, -0x61F4($a1)
    ctx->pc = 0x11bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294942220), GPR_U32(ctx, 3));
    // 0x11bd18: 0xacc39dfc  sw          $v1, -0x6204($a2)
    ctx->pc = 0x11bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294942204), GPR_U32(ctx, 3));
    // 0x11bd1c: 0x2451da68  addiu       $s1, $v0, -0x2598
    ctx->pc = 0x11bd1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957672));
    // 0x11bd20: 0xace39e14  sw          $v1, -0x61EC($a3)
    ctx->pc = 0x11bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294942228), GPR_U32(ctx, 3));
    // 0x11bd24: 0x2612dac0  addiu       $s2, $s0, -0x2540
    ctx->pc = 0x11bd24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957760));
    // 0x11bd28: 0xad239e10  sw          $v1, -0x61F0($t1)
    ctx->pc = 0x11bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294942224), GPR_U32(ctx, 3));
    // 0x11bd2c: 0x3c1e0036  lui         $fp, 0x36
    ctx->pc = 0x11bd2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)54 << 16));
    // 0x11bd30: 0xad009df8  sw          $zero, -0x6208($t0)
    ctx->pc = 0x11bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294942200), GPR_U32(ctx, 0));
    // 0x11bd34: 0x3c170036  lui         $s7, 0x36
    ctx->pc = 0x11bd34u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)54 << 16));
    // 0x11bd38: 0xaea49e1c  sw          $a0, -0x61E4($s5)
    ctx->pc = 0x11bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294942236), GPR_U32(ctx, 4));
    // 0x11bd3c: 0x3c16003e  lui         $s6, 0x3E
    ctx->pc = 0x11bd3cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)62 << 16));
    // 0x11bd40: 0xae839e18  sw          $v1, -0x61E8($s4)
    ctx->pc = 0x11bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294942232), GPR_U32(ctx, 3));
    // 0x11bd44: 0x0  nop
    ctx->pc = 0x11bd44u;
    // NOP
label_11bd48:
    // 0x11bd48: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11bd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11bd4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd50: 0x34a50592  ori         $a1, $a1, 0x592
    ctx->pc = 0x11bd50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1426);
    // 0x11bd54: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x11BD54u;
    SET_GPR_U32(ctx, 31, 0x11BD5Cu);
    ctx->pc = 0x11BD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD54u;
    // 0x11bd58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x11BD54u, 0x11BD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD5Cu;
label_11bd5c:
    // 0x11bd5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11bd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd60: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11BD60u;
    {
        const bool branch_taken_0x11bd60 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11bd60) {
            ctx->pc = 0x11BD64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BD60u;
            // 0x11bd64: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BDACu;
            goto label_11bdac;
        }
    }
    ctx->pc = 0x11BD68u;
    // 0x11bd68: 0x8ee29dd0  lw          $v0, -0x6230($s7)
    ctx->pc = 0x11bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294942160)));
    // 0x11bd6c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BD6Cu;
    {
        const bool branch_taken_0x11bd6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD6Cu;
        // 0x11bd70: 0x8ea69e1c  lw          $a2, -0x61E4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd6c) {
            ctx->pc = 0x11BD7Cu;
            goto label_11bd7c;
        }
    }
    ctx->pc = 0x11BD74u;
    // 0x11bd74: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11BD74u;
    SET_GPR_U32(ctx, 31, 0x11BD7Cu);
    ctx->pc = 0x11BD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD74u;
    // 0x11bd78: 0x26c4b320  addiu       $a0, $s6, -0x4CE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11BD74u, 0x11BD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD7Cu;
label_11bd7c:
    // 0x11bd7c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11bd80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11bd84: 0x0  nop
    ctx->pc = 0x11bd84u;
    // NOP
label_11bd88:
    // 0x11bd88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11bd8c: 0x0  nop
    ctx->pc = 0x11bd8cu;
    // NOP
    // 0x11bd90: 0x0  nop
    ctx->pc = 0x11bd90u;
    // NOP
    // 0x11bd94: 0x0  nop
    ctx->pc = 0x11bd94u;
    // NOP
    // 0x11bd98: 0x0  nop
    ctx->pc = 0x11bd98u;
    // NOP
    // 0x11bd9c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BD9Cu;
    {
        const bool branch_taken_0x11bd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11bd9c) {
            ctx->pc = 0x11BD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bd88;
        }
    }
    ctx->pc = 0x11BDA4u;
    // 0x11bda4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11BDA4u;
    {
        const bool branch_taken_0x11bda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bda4) {
            ctx->pc = 0x11BD48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bd48;
        }
    }
    ctx->pc = 0x11BDACu;
label_11bdac:
    // 0x11bdac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11BDACu;
    {
        const bool branch_taken_0x11bdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDACu;
        // 0x11bdb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdac) {
            ctx->pc = 0x11BE04u;
            goto label_11be04;
        }
    }
    ctx->pc = 0x11BDB4u;
    // 0x11bdb4: 0xae13dac0  sw          $s3, -0x2540($s0)
    ctx->pc = 0x11bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294957760), GPR_U32(ctx, 19));
    // 0x11bdb8: 0xae809e18  sw          $zero, -0x61E8($s4)
    ctx->pc = 0x11bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294942232), GPR_U32(ctx, 0));
    // 0x11bdbc: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x11BDBCu;
    SET_GPR_U32(ctx, 31, 0x11BDC4u);
    ctx->pc = 0x11BDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDBCu;
    // 0x11bdc0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102F8u, 0x11BDBCu, 0x11BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDC4u;
label_11bdc4:
    // 0x11bdc4: 0x27d0afc0  addiu       $s0, $fp, -0x5040
    ctx->pc = 0x11bdc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4294946752));
    // 0x11bdc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdcc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x11bdccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdd0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11bdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11bdd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11bdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bddc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x11bddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11bde0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11bde0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bde4: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x11bde4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11bde8: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11BDE8u;
    SET_GPR_U32(ctx, 31, 0x11BDF0u);
    ctx->pc = 0x11BDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDE8u;
    // 0x11bdec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11BDE8u, 0x11BDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDF0u;
label_11bdf0:
    // 0x11bdf0: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11BDF0u;
    {
        const bool branch_taken_0x11bdf0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDF0u;
        // 0x11bdf4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdf0) {
            ctx->pc = 0x11BE34u;
            goto label_11be34;
        }
    }
    ctx->pc = 0x11BDF8u;
    // 0x11bdf8: 0xac409de4  sw          $zero, -0x621C($v0)
    ctx->pc = 0x11bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942180), GPR_U32(ctx, 0));
    // 0x11bdfc: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x11BDFCu;
    {
        const bool branch_taken_0x11bdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDFCu;
        // 0x11be00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdfc) {
            ctx->pc = 0x11BF40u;
            goto label_11bf40;
        }
    }
    ctx->pc = 0x11BE04u;
label_11be04:
    // 0x11be04: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11be04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11be08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11be08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11be0c: 0x0  nop
    ctx->pc = 0x11be0cu;
    // NOP
label_11be10:
    // 0x11be10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11be10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11be14: 0x0  nop
    ctx->pc = 0x11be14u;
    // NOP
    // 0x11be18: 0x0  nop
    ctx->pc = 0x11be18u;
    // NOP
    // 0x11be1c: 0x0  nop
    ctx->pc = 0x11be1cu;
    // NOP
    // 0x11be20: 0x0  nop
    ctx->pc = 0x11be20u;
    // NOP
    // 0x11be24: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BE24u;
    {
        const bool branch_taken_0x11be24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11be24) {
            ctx->pc = 0x11BE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11be10;
        }
    }
    ctx->pc = 0x11BE2Cu;
    // 0x11be2c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x11BE2Cu;
    {
        const bool branch_taken_0x11be2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11be2c) {
            ctx->pc = 0x11BD48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bd48;
        }
    }
    ctx->pc = 0x11BE34u;
label_11be34:
    // 0x11be34: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x11be34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x11be38: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x11be38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x11be3c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11be40: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x11be40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x11be44: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x11be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x11be48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x11be48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11be4c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x11be4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x11be50: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x11be50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x11be54: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x11be54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11be58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11be58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11be5c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11be60: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11BE60u;
    {
        const bool branch_taken_0x11be60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE60u;
        // 0x11be64: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be60) {
            ctx->pc = 0x11BEBCu;
            goto label_11bebc;
        }
    }
    ctx->pc = 0x11BE68u;
    // 0x11be68: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x11be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x11be6c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11BE6Cu;
    {
        const bool branch_taken_0x11be6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE6Cu;
        // 0x11be70: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be6c) {
            ctx->pc = 0x11BE80u;
            goto label_11be80;
        }
    }
    ctx->pc = 0x11BE74u;
    // 0x11be74: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11be74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11be78: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11BE78u;
    {
        const bool branch_taken_0x11be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE78u;
        // 0x11be7c: 0xac509dd0  sw          $s0, -0x6230($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942160), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be78) {
            ctx->pc = 0x11BEBCu;
            goto label_11bebc;
        }
    }
    ctx->pc = 0x11BE80u;
label_11be80:
    // 0x11be80: 0x24a200ff  addiu       $v0, $a1, 0xFF
    ctx->pc = 0x11be80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x11be84: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x11be84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x11be88: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x11be88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x11be8c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x11be8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x11be90: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x11be90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11be94: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11BE94u;
    {
        const bool branch_taken_0x11be94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11be94) {
            ctx->pc = 0x11BE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BE94u;
            // 0x11be98: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BEBCu;
            goto label_11bebc;
        }
    }
    ctx->pc = 0x11BE9Cu;
    // 0x11be9c: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x11be9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11bea0: 0x248200ff  addiu       $v0, $a0, 0xFF
    ctx->pc = 0x11bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x11bea4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x11bea4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x11bea8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x11bea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x11beac: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x11beacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x11beb0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEB0u;
    {
        const bool branch_taken_0x11beb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEB0u;
        // 0x11beb4: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beb0) {
            ctx->pc = 0x11BEC0u;
            goto label_11bec0;
        }
    }
    ctx->pc = 0x11BEB8u;
    // 0x11beb8: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x11beb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11bebc:
    // 0x11bebc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_11bec0:
    // 0x11bec0: 0xac609de4  sw          $zero, -0x621C($v1)
    ctx->pc = 0x11bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942180), GPR_U32(ctx, 0));
    // 0x11bec4: 0x6600016  bltz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x11BEC4u;
    {
        const bool branch_taken_0x11bec4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x11BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEC4u;
        // 0x11bec8: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bec4) {
            ctx->pc = 0x11BF20u;
            goto label_11bf20;
        }
    }
    ctx->pc = 0x11BECCu;
    // 0x11becc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11BECCu;
    {
        const bool branch_taken_0x11becc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BECCu;
        // 0x11bed0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11becc) {
            ctx->pc = 0x11BF20u;
            goto label_11bf20;
        }
    }
    ctx->pc = 0x11BED4u;
    // 0x11bed4: 0x16620012  bne         $s3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11BED4u;
    {
        const bool branch_taken_0x11bed4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BED4u;
        // 0x11bed8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bed4) {
            ctx->pc = 0x11BF20u;
            goto label_11bf20;
        }
    }
    ctx->pc = 0x11BEDCu;
    // 0x11bedc: 0x8c439dd0  lw          $v1, -0x6230($v0)
    ctx->pc = 0x11bedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942160)));
    // 0x11bee0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEE0u;
    {
        const bool branch_taken_0x11bee0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEE0u;
        // 0x11bee4: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bee0) {
            ctx->pc = 0x11BEF0u;
            goto label_11bef0;
        }
    }
    ctx->pc = 0x11BEE8u;
    // 0x11bee8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11BEE8u;
    SET_GPR_U32(ctx, 31, 0x11BEF0u);
    ctx->pc = 0x11BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEE8u;
    // 0x11beec: 0x2484b340  addiu       $a0, $a0, -0x4CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x11BEE8u, 0x11BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEF0u;
label_11bef0:
    // 0x11bef0: 0xc046c9c  jal         func_11B270
    ctx->pc = 0x11BEF0u;
    SET_GPR_U32(ctx, 31, 0x11BEF8u);
    ctx->pc = 0x11B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B270u, 0x11BEF0u, 0x11BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEF8u;
label_11bef8:
    // 0x11bef8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x11bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11befc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11befcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11bf00: 0xac449de8  sw          $a0, -0x6218($v0)
    ctx->pc = 0x11bf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942184), GPR_U32(ctx, 4));
    // 0x11bf04: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11bf08: 0xac649dec  sw          $a0, -0x6214($v1)
    ctx->pc = 0x11bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942188), GPR_U32(ctx, 4));
    // 0x11bf0c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11bf10: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11bf14: 0xac449de0  sw          $a0, -0x6220($v0)
    ctx->pc = 0x11bf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942176), GPR_U32(ctx, 4));
    // 0x11bf18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11BF18u;
    {
        const bool branch_taken_0x11bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bf18) {
            ctx->pc = 0x11BF3Cu;
            goto label_11bf3c;
        }
    }
    ctx->pc = 0x11BF20u;
label_11bf20:
    // 0x11bf20: 0xc046c62  jal         func_11B188
    ctx->pc = 0x11BF20u;
    SET_GPR_U32(ctx, 31, 0x11BF28u);
    ctx->pc = 0x11B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B188u, 0x11BF20u, 0x11BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF28u;
label_11bf28:
    // 0x11bf28: 0xc046cfa  jal         func_11B3E8
    ctx->pc = 0x11BF28u;
    SET_GPR_U32(ctx, 31, 0x11BF30u);
    ctx->pc = 0x11B3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3E8u, 0x11BF28u, 0x11BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF30u;
label_11bf30:
    // 0x11bf30: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11bf30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11bf34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bf38: 0xac629e04  sw          $v0, -0x61FC($v1)
    ctx->pc = 0x11bf38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942212), GPR_U32(ctx, 2));
label_11bf3c:
    // 0x11bf3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11bf3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bf40:
    // 0x11bf40: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11bf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11bf44: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x11bf44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11bf48: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x11bf48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11bf4c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11bf4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11bf50: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11bf50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11bf54: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11bf54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11bf58: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11bf58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bf5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11bf5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bf60: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11bf60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bf64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11bf64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bf68: 0x3e00008  jr          $ra
    ctx->pc = 0x11BF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF68u;
        // 0x11bf6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BF70u;
}
