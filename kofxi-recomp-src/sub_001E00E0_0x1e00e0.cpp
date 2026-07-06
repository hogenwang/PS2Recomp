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

// Function: sub_001E00E0
// Address: 0x1e00e0 - 0x1e0260
void sub_001E00E0_0x1e00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E00E0_0x1e00e0");
#endif

    switch (ctx->pc) {
        case 0x1e0154u: goto label_1e0154;
        case 0x1e016cu: goto label_1e016c;
        case 0x1e0190u: goto label_1e0190;
        case 0x1e01a0u: goto label_1e01a0;
        case 0x1e01acu: goto label_1e01ac;
        case 0x1e01b8u: goto label_1e01b8;
        case 0x1e01c8u: goto label_1e01c8;
        case 0x1e023cu: goto label_1e023c;
        default: break;
    }

    ctx->pc = 0x1e00e0u;

    // 0x1e00e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e00e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e00e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e00e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e00e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e00ec: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e00ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e00f0: 0x24a50108  addiu       $a1, $a1, 0x108
    ctx->pc = 0x1e00f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 264));
    // 0x1e00f4: 0x8cc4003c  lw          $a0, 0x3C($a2)
    ctx->pc = 0x1e00f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1e00f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e00f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e00fc: 0x807ec26  j           func_1FB098
    ctx->pc = 0x1E00FCu;
    ctx->pc = 0x1E0100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00FCu;
    // 0x1e0100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB098u, 0x1E00FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E0104u;
    // 0x1e0104: 0x0  nop
    ctx->pc = 0x1e0104u;
    // NOP
    // 0x1e0108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e0108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e010c: 0x28c30800  slti        $v1, $a2, 0x800
    ctx->pc = 0x1e010cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x1e0110: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e0110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e0114: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e0114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0118: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e0118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e011c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0120: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e0120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e0124: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e0124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e0128: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e0128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e012c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e012cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1e0130: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e0130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e0134: 0x8e8200b4  lw          $v0, 0xB4($s4)
    ctx->pc = 0x1e0134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x1e0138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e013c: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1E013Cu;
    {
        const bool branch_taken_0x1e013c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E013Cu;
        // 0x1e0140: 0xae8200b4  sw          $v0, 0xB4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e013c) {
            ctx->pc = 0x1E023Cu;
            goto label_1e023c;
        }
    }
    ctx->pc = 0x1E0144u;
    // 0x1e0144: 0x5080003e  beql        $a0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E0144u;
    {
        const bool branch_taken_0x1e0144 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0144) {
            ctx->pc = 0x1E0148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0144u;
            // 0x1e0148: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0240u;
            goto label_1e0240;
        }
    }
    ctx->pc = 0x1E014Cu;
    // 0x1e014c: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1E014Cu;
    SET_GPR_U32(ctx, 31, 0x1E0154u);
    ctx->pc = 0x1E0150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E014Cu;
    // 0x1e0150: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1E014Cu, 0x1E0154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0154u;
label_1e0154:
    // 0x1e0154: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e0154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0158: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e0158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e015c: 0x12600037  beqz        $s3, . + 4 + (0x37 << 2)
    ctx->pc = 0x1E015Cu;
    {
        const bool branch_taken_0x1e015c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E015Cu;
        // 0x1e0160: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e015c) {
            ctx->pc = 0x1E023Cu;
            goto label_1e023c;
        }
    }
    ctx->pc = 0x1E0164u;
    // 0x1e0164: 0xc07fc06  jal         func_1FF018
    ctx->pc = 0x1E0164u;
    SET_GPR_U32(ctx, 31, 0x1E016Cu);
    ctx->pc = 0x1FF018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF018u, 0x1E0164u, 0x1E016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E016Cu;
label_1e016c:
    // 0x1e016c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e016cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0174: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0174u;
    {
        const bool branch_taken_0x1e0174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0174u;
        // 0x1e0178: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0174) {
            ctx->pc = 0x1E0188u;
            goto label_1e0188;
        }
    }
    ctx->pc = 0x1E017Cu;
    // 0x1e017c: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x1e017cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0180: 0x12a30005  beq         $s5, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0180u;
    {
        const bool branch_taken_0x1e0180 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e0180) {
            ctx->pc = 0x1E0198u;
            goto label_1e0198;
        }
    }
    ctx->pc = 0x1E0188u;
label_1e0188:
    // 0x1e0188: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1E0188u;
    SET_GPR_U32(ctx, 31, 0x1E0190u);
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1E0188u, 0x1E0190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0190u;
label_1e0190:
    // 0x1e0190: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1E0190u;
    {
        const bool branch_taken_0x1e0190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0190u;
        // 0x1e0194: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0190) {
            ctx->pc = 0x1E0240u;
            goto label_1e0240;
        }
    }
    ctx->pc = 0x1E0198u;
label_1e0198:
    // 0x1e0198: 0xc07815a  jal         func_1E0568
    ctx->pc = 0x1E0198u;
    SET_GPR_U32(ctx, 31, 0x1E01A0u);
    ctx->pc = 0x1E019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0198u;
    // 0x1e019c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0568u, 0x1E0198u, 0x1E01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01A0u;
label_1e01a0:
    // 0x1e01a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e01a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01a4: 0xc077f6e  jal         func_1DFDB8
    ctx->pc = 0x1E01A4u;
    SET_GPR_U32(ctx, 31, 0x1E01ACu);
    ctx->pc = 0x1E01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01A4u;
    // 0x1e01a8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFDB8u, 0x1E01A4u, 0x1E01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01ACu;
label_1e01ac:
    // 0x1e01ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e01acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01b0: 0xc077fd4  jal         func_1DFF50
    ctx->pc = 0x1E01B0u;
    SET_GPR_U32(ctx, 31, 0x1E01B8u);
    ctx->pc = 0x1E01B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01B0u;
    // 0x1e01b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF50u, 0x1E01B0u, 0x1E01B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01B8u;
label_1e01b8:
    // 0x1e01b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e01b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e01bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01c0: 0xc078098  jal         func_1E0260
    ctx->pc = 0x1E01C0u;
    SET_GPR_U32(ctx, 31, 0x1E01C8u);
    ctx->pc = 0x1E01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01C0u;
    // 0x1e01c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0260u, 0x1E01C0u, 0x1E01C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01C8u;
label_1e01c8:
    // 0x1e01c8: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x1e01c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x1e01cc: 0x8e8500b4  lw          $a1, 0xB4($s4)
    ctx->pc = 0x1e01ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x1e01d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e01d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e01d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e01d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e01dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1e01dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1e01e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e01e4: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x1e01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1e01e8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1e01ec: 0x2834021  addu        $t0, $s4, $v1
    ctx->pc = 0x1e01ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1e01f0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1e01f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01f4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1e01f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e01f8: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1e01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1e01fc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1e01fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0200: 0xacf20008  sw          $s2, 0x8($a3)
    ctx->pc = 0x1e0200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 18));
    // 0x1e0204: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x1e0204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x1e0208: 0xac5000d0  sw          $s0, 0xD0($v0)
    ctx->pc = 0x1e0208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 16));
    // 0x1e020c: 0xad150000  sw          $s5, 0x0($t0)
    ctx->pc = 0x1e020cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 21));
    // 0x1e0210: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x1e0210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x1e0214: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1e0214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e0218: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e0218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e021c: 0x28a60000  slti        $a2, $a1, 0x0
    ctx->pc = 0x1e021cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1e0220: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e0220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0224: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x1e0224u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1e0228: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1e0228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1e022c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e022cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1e0230: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1e0230u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e0234: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x1E0234u;
    SET_GPR_U32(ctx, 31, 0x1E023Cu);
    ctx->pc = 0x1E0238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0234u;
    // 0x1e0238: 0xae8500bc  sw          $a1, 0xBC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x1E0234u, 0x1E023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E023Cu;
label_1e023c:
    // 0x1e023c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e023cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0240:
    // 0x1e0240: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e0240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0244: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e0244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0248: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e0248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e024c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e024cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0250: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e0250u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e0254: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e0254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0258: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0258u;
        // 0x1e025c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0260u;
}
